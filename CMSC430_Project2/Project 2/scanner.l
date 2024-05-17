/* Omoniyi Tomjones
CMSC 430 Project 2 
**/

%{ 
#include <cstdio>
#include <string>

using namespace std;

#include "listing.h"
#include "tokens.h"
%}

%option noyywrap

ws		[ \t\r]+
comment	\-\-.*\n
secondcomment	"//".*\n
line		[\n]
id		[A-Za-z](_?[A-Za-z0-9])*
digit		[0-9]
int		{digit}+
punc		[(),.:;]
real_literal    ({digit}+\.{digit}*|\.{digit}+|\d+\.{digit}*)([eE][+-]?{digit}+)?

bool		(true|false)

%%

{ws}		{ ECHO; }
{comment}	{ ECHO; nextLine();}
{secondcomment}	{ ECHO; nextLine();}
{line}		{ ECHO; nextLine();}
"<"		{ ECHO; return(RELOP); }
"+"		{ ECHO; return(ADDOP); }
"*"		{ ECHO; return(MULOP); }
"=>"		{ ECHO; return(ARROW); }
"\\"        { ECHO; return(CHARACTER); }
"="		{ ECHO; return(RELOP); }
"/="		{ ECHO; return(RELOP); }
">"		{ ECHO; return(RELOP); }
">="		{ ECHO; return(RELOP); } 
"<="		{ ECHO; return(RELOP); }
"<>"        { ECHO; return(RELOP); }
"#"         { ECHO; return(CHARACTER); }
"'"     { ECHO; return(CHARACTER); }
"-"		{ ECHO; return(ADDOP); }
"~"     { ECHO; return(CHARACTER); }
"^"     { ECHO; return(CARET); }
"|"     { ECHO; return(CHARACTER); }
"!"     { ECHO; return(CHARACTER); }
"%"     { ECHO; return(PERCENT); }
"/"		{ ECHO; return(MULOP); }
"&"     { ECHO; return(ANDOP); }

"**"		{ ECHO; return(EXPOP); }

begin		{ ECHO; return(BEGIN_); }
boolean	{ ECHO; return(BOOLEAN); }
end		{ ECHO; return(END); }
endfold     { ECHO; return(ENDFOLD); }
endreduce	{ ECHO; return(ENDREDUCE); }
function	{ ECHO; return(FUNCTION); }
integer	{ ECHO; return(INTEGER); }
is		{ ECHO; return(IS); }
reduce		{ ECHO; return(REDUCE); }
character   { ECHO; return(CHARACTER); }
returns	{ ECHO; return(RETURNS); }
switch      { ECHO; return(SWITCH); }
endswitch   { ECHO; return(ENDSWITCH); }
and		{ ECHO; return(ANDOP); }
case 		{ ECHO; return(CASE); }
else 		{ ECHO; return(ELSE); }
elsif       { ECHO; return(ELSIF); }
endcase	{ ECHO; return(ENDCASE); } 
endif		{ ECHO; return(ENDIF); } 
if		{ ECHO; return(IF); } 
others		{ ECHO; return(OTHERS); } 
real		{ ECHO; return(REAL); } 
then		{ ECHO; return(THEN); } 
when		{ ECHO; return(WHEN); }
of      { ECHO; return(OF); }
list    { ECHO; return(LIST); }
left    { ECHO; return(LEFT); }
right   {ECHO; return(RIGHT); }

or		{ ECHO; return(OROP); }
not		{ ECHO; return(NOTOP); }

rem		{ ECHO; return(REMOP); }

{int}		{ ECHO; return(INT_LITERAL); }
{real_literal}		{ ECHO; return(REAL_LITERAL); }
{bool}		{ ECHO; return(BOOL_LITERAL); }
{id}		{ ECHO; return(IDENTIFIER);}
{punc}		{ ECHO; return(yytext[0]); }
.		{ ECHO; appendError(LEXICAL, yytext); }

%%
