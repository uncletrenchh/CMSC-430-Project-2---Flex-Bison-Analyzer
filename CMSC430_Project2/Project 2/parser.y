%{

#include <string>

using namespace std;

#include "listing.h"

int yylex();
void yyerror(const char* message);

%}

%define parse.error verbose

%token IDENTIFIER TYPE
%token INT_LITERAL REAL_LITERAL BOOL_LITERAL CHARACTER 

%token ARROW CASE ELSE ENDCASE ENDIF IF OTHERS REAL THEN ELSIF

%token ADDOP MULOP RELOP ANDOP OROP NOTOP REMOP EXPOP WHEN CARET PERCENT

%token BEGIN_ BOOLEAN END ENDREDUCE FUNCTION INTEGER IS REDUCE RETURNS SWITCH ENDSWITCH OF LIST LEFT RIGHT ENDFOLD

%%

function: 
	function_header optional_variable body ;
	
function_header: 
	FUNCTION IDENTIFIER parameters RETURNS type ';' |
	FUNCTION IDENTIFIER parameters ',' parameters ',' parameters RETURNS type ';' |
	FUNCTION IDENTIFIER parameters ',' parameters RETURNS type ';' |
	error ';' ;

optional_variable:
	optional_variable variable |
	;

variable:
	parameters IS statement_ ';' |
	parameters IS parameters ';' |
	parameters OF type IS statement_ |
	parameters IS expression_s operator type ';' |
	parameters IS type ';' |
	parameters IS expression_s ';' |
	parameters IS statement_ parameters IS type ';' |
	parameters IS operator type ';' |
	error ';' ;

parameters: 
	'(' parameters ')' | 
	IDENTIFIER ':' type |
	IDENTIFIER ':' |
	IDENTIFIER type |
	IDENTIFIER ':' CHARACTER |
	CHARACTER type IDENTIFIER |
	CHARACTER IDENTIFIER CHARACTER |

type:
	INTEGER | 
	LIST |
	OF |
	LEFT |
	RIGHT |
	CHARACTER |
	REAL | 
	REAL_LITERAL |
	INT_LITERAL |
	BOOLEAN ;

body: 
	BEGIN_ statement_ END ';' ; 
    
statement_:
	statement ';' | 
	WHEN expression ';' |
	WHEN expression ',' expression ':' expression ';' |
	WHEN expression_s |

	IF expression THEN statement_ ELSIF expression THEN statement_ ELSIF expression THEN statement_
	ELSE statement_ ENDIF |

	IF expression THEN statement_ ELSIF expression THEN statement_ ELSIF expression THEN statement_
	ELSE statement_ ENDIF ';' |

	IF expression THEN IF expression THEN statement_ ELSIF expression THEN statement_ 
	ELSE statement_ ENDFOLD ';' ENDIF ';' ELSE expression ENDFOLD ';' ENDIF |

	IF expression THEN IF expression THEN statement_ ELSIF expression THEN statement_ 
	ELSE expression ENDFOLD ';' ENDIF ';' ELSE expression ENDFOLD ';' ENDIF ';' |

	IF expression THEN statement_ ELSE statement_ ENDIF ';' |

	SWITCH IDENTIFIER IS statement_1 ENDSWITCH ';' |

	SWITCH IDENTIFIER IS statement_1 ENDSWITCH ';' statement_1 ENDSWITCH ';' |
	
	SWITCH IDENTIFIER '(' expression ')' IS statement_1 ENDSWITCH ';' |
	
	IDENTIFIER '(' expression ')' operator '(' expression ')' ';' |
	error ';' ;
	;

statement:
	expression |
	REDUCE operator reductions ENDREDUCE |
	IDENTIFIER type operator '(' statement ')' |
	expression_s operator '(' expression_s ')' |
	IDENTIFIER '(' type ')' operator IDENTIFIER '(' type ')' |
	expression_s type operator '(' expression ')' operator type PERCENT expression_s expression_s |
	;

statement_1:
	case_s ';' |
	case_s ';' case_s ';' |
	case_s ';' case_s ';' case_s ';' |
	case_s ';' case_s ';' OTHERS ARROW statement ';' |
	case_s operator type operator expression_s ';' |
	;
case_s:
	CASE type ARROW SWITCH IDENTIFIER IS CASE expression_s ';' OTHERS expression_s |
	CASE type ARROW IDENTIFIER type operator '(' expression_s ')' ENDFOLD |
	CASE type ARROW IDENTIFIER type operator IDENTIFIER ENDFOLD |
	CASE statement ARROW CHARACTER IDENTIFIER type |
	CASE type ARROW CHARACTER IDENTIFIER |
	CASE type ARROW CHARACTER IDENTIFIER CHARACTER |
	CASE type ARROW type |
	CASE type ARROW statement |
	CASE statement ARROW statement |
	OTHERS ARROW CHARACTER IDENTIFIER type |
	OTHERS ARROW IDENTIFIER expression_s IDENTIFIER |
	OTHERS ARROW CHARACTER IDENTIFIER CHARACTER |
	OTHERS ARROW type |
	CASE type ARROW |
	CASE ARROW type |
	CASE type ARROW IDENTIFIER |
	;
	
operator: // +-*/
	ADDOP |
	RELOP |
	ANDOP |
	MULOP ;
	
reductions:
	reductions statement_ |
	; ///or blank

expression:
	expression_s |
	IDENTIFIER |
	type |
	expression_s expression_s |
	expression_s ANDOP expression_s |
	expression_s operator expression_s |
	expression_s '(' expression_s ')' |
	expression_s IDENTIFIER |
	expression type operator '(' expression ')' operator type PERCENT expression CARET type CARET type |
	expression_s ANDOP expression_s CHARACTER expression_s ANDOP CHARACTER
	'(' type operator type ')' CHARACTER type operator type ANDOP type operator type ',' type ':' type |
	expression OROP relation |
	expression ',' expression ',' expression ',' expression |
	expression ',' expression ',' expression |
	CHARACTER expression_s ANDOP expression_s ANDOP 
	CHARACTER '(' expression_s CHARACTER expression_s')' |
	expression_s CHARACTER expression_s ',' IDENTIFIER operator expression_s operator expression_s operator type ':' type |
	expression_s ANDOP expression_s ',' expression_s ':' expression_s |
	expression_s ',' expression_s expression_s expression_s ':' type |
	IDENTIFIER '(' type ')' operator expression_s |
	expression_s ',' CHARACTER expression_s ':' expression_s |
	IDENTIFIER type operator '(' expression_s ')' |
	;

expression_s:
	IDENTIFIER |
	operator type operator |
	type operator type |
	CHARACTER IDENTIFIER CHARACTER |
	IDENTIFIER operator operator type |
	type ',' type ',' type |
	type ',' type ',' type ',' type |
	type operator IDENTIFIER |
	IDENTIFIER operator type |
	IDENTIFIER operator IDENTIFIER |
	IDENTIFIER PERCENT type |
	IDENTIFIER CARET type |
	CARET type CARET type |
	IDENTIFIER CARET type PERCENT type |
	IDENTIFIER type operator |
	IDENTIFIER type |
	type operator CHARACTER |
	type ARROW IDENTIFIER PERCENT type |
	ARROW type |
	;

relation:
	relation RELOP term |
	term;

term:
	term ADDOP remop |
	remop ;
  
remop:
	remop REMOP factor|
	factor;
    
factor:
	factor MULOP expop | ///factor * expop/expression which can be in parenthesis
	expop ; ///or just expop

expop:
	primary EXPOP expop | ///primary ** expop, right associative
	primary; ///or just primary

primary: ///can be the (expression) OR int lit OR real lit OR bool lit token OR identifier
	'(' expression ')' |
	INT_LITERAL | 
	REAL_LITERAL |
	BOOL_LITERAL |
	CHARACTER |
	IDENTIFIER ;
    
%%

void yyerror(const char* message)
{
	appendError(SYNTAX, message);
}

int main(int argc, char *argv[])    
{
	firstLine();
	yyparse();
	lastLine();
	return 0;
} 