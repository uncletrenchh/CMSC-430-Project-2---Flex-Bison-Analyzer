/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.y"


#include <string>

using namespace std;

#include "listing.h"

int yylex();
void yyerror(const char* message);


#line 84 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE = 4,                       /* TYPE  */
  YYSYMBOL_INT_LITERAL = 5,                /* INT_LITERAL  */
  YYSYMBOL_REAL_LITERAL = 6,               /* REAL_LITERAL  */
  YYSYMBOL_BOOL_LITERAL = 7,               /* BOOL_LITERAL  */
  YYSYMBOL_CHARACTER = 8,                  /* CHARACTER  */
  YYSYMBOL_ARROW = 9,                      /* ARROW  */
  YYSYMBOL_CASE = 10,                      /* CASE  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ENDCASE = 12,                   /* ENDCASE  */
  YYSYMBOL_ENDIF = 13,                     /* ENDIF  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_OTHERS = 15,                    /* OTHERS  */
  YYSYMBOL_REAL = 16,                      /* REAL  */
  YYSYMBOL_THEN = 17,                      /* THEN  */
  YYSYMBOL_ELSIF = 18,                     /* ELSIF  */
  YYSYMBOL_ADDOP = 19,                     /* ADDOP  */
  YYSYMBOL_MULOP = 20,                     /* MULOP  */
  YYSYMBOL_RELOP = 21,                     /* RELOP  */
  YYSYMBOL_ANDOP = 22,                     /* ANDOP  */
  YYSYMBOL_OROP = 23,                      /* OROP  */
  YYSYMBOL_NOTOP = 24,                     /* NOTOP  */
  YYSYMBOL_REMOP = 25,                     /* REMOP  */
  YYSYMBOL_EXPOP = 26,                     /* EXPOP  */
  YYSYMBOL_WHEN = 27,                      /* WHEN  */
  YYSYMBOL_CARET = 28,                     /* CARET  */
  YYSYMBOL_PERCENT = 29,                   /* PERCENT  */
  YYSYMBOL_BEGIN_ = 30,                    /* BEGIN_  */
  YYSYMBOL_BOOLEAN = 31,                   /* BOOLEAN  */
  YYSYMBOL_END = 32,                       /* END  */
  YYSYMBOL_ENDREDUCE = 33,                 /* ENDREDUCE  */
  YYSYMBOL_FUNCTION = 34,                  /* FUNCTION  */
  YYSYMBOL_INTEGER = 35,                   /* INTEGER  */
  YYSYMBOL_IS = 36,                        /* IS  */
  YYSYMBOL_REDUCE = 37,                    /* REDUCE  */
  YYSYMBOL_RETURNS = 38,                   /* RETURNS  */
  YYSYMBOL_SWITCH = 39,                    /* SWITCH  */
  YYSYMBOL_ENDSWITCH = 40,                 /* ENDSWITCH  */
  YYSYMBOL_OF = 41,                        /* OF  */
  YYSYMBOL_LIST = 42,                      /* LIST  */
  YYSYMBOL_LEFT = 43,                      /* LEFT  */
  YYSYMBOL_RIGHT = 44,                     /* RIGHT  */
  YYSYMBOL_ENDFOLD = 45,                   /* ENDFOLD  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_function = 52,                  /* function  */
  YYSYMBOL_function_header = 53,           /* function_header  */
  YYSYMBOL_optional_variable = 54,         /* optional_variable  */
  YYSYMBOL_variable = 55,                  /* variable  */
  YYSYMBOL_parameters = 56,                /* parameters  */
  YYSYMBOL_type = 57,                      /* type  */
  YYSYMBOL_body = 58,                      /* body  */
  YYSYMBOL_statement_ = 59,                /* statement_  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_statement_1 = 61,               /* statement_1  */
  YYSYMBOL_case_s = 62,                    /* case_s  */
  YYSYMBOL_operator = 63,                  /* operator  */
  YYSYMBOL_reductions = 64,                /* reductions  */
  YYSYMBOL_expression = 65,                /* expression  */
  YYSYMBOL_expression_s = 66,              /* expression_s  */
  YYSYMBOL_relation = 67,                  /* relation  */
  YYSYMBOL_term = 68,                      /* term  */
  YYSYMBOL_remop = 69,                     /* remop  */
  YYSYMBOL_factor = 70,                    /* factor  */
  YYSYMBOL_expop = 71,                     /* expop  */
  YYSYMBOL_primary = 72                    /* primary  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2849

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,    49,     2,     2,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    46,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    32,    33,    34,    35,    38,    38,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    53,    54,
      55,    56,    57,    58,    59,    59,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    74,    77,    78,    79,
      80,    82,    85,    88,    91,    94,    96,    98,   100,   102,
     103,   107,   108,   109,   110,   111,   112,   112,   116,   117,
     118,   119,   120,   120,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     138,   142,   143,   144,   145,   148,   148,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   163,   164,   165,
     166,   168,   169,   170,   171,   172,   173,   173,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   195,   199,   200,
     203,   204,   207,   208,   211,   212,   215,   216,   219,   220,
     221,   222,   223,   224
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "TYPE",
  "INT_LITERAL", "REAL_LITERAL", "BOOL_LITERAL", "CHARACTER", "ARROW",
  "CASE", "ELSE", "ENDCASE", "ENDIF", "IF", "OTHERS", "REAL", "THEN",
  "ELSIF", "ADDOP", "MULOP", "RELOP", "ANDOP", "OROP", "NOTOP", "REMOP",
  "EXPOP", "WHEN", "CARET", "PERCENT", "BEGIN_", "BOOLEAN", "END",
  "ENDREDUCE", "FUNCTION", "INTEGER", "IS", "REDUCE", "RETURNS", "SWITCH",
  "ENDSWITCH", "OF", "LIST", "LEFT", "RIGHT", "ENDFOLD", "';'", "','",
  "'('", "')'", "':'", "$accept", "function", "function_header",
  "optional_variable", "variable", "parameters", "type", "body",
  "statement_", "statement", "statement_1", "case_s", "operator",
  "reductions", "expression", "expression_s", "relation", "term", "remop",
  "factor", "expop", "primary", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-128)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   -39,    18,    32,  -241,  -241,     6,  -241,   124,   584,
     234,     6,   -20,   -10,   967,  -241,    -1,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  2774,  -241,
      72,    79,    45,  2788,     6,  -241,    52,  1548,  2379,  2788,
    1700,  -241,  -241,  -241,  -241,  1793,  2788,   119,    99,   368,
      84,    73,  2788,  2290,  1579,  1015,  2788,  -241,  -241,  -241,
    -241,  -241,    75,    15,  -241,  2788,  2788,  1700,   119,  2627,
    2645,   120,   368,   111,  -241,  1291,  2006,  1579,  2020,  1579,
     114,  -241,   -14,   144,  2788,   509,   104,  -241,   119,   123,
    1700,   119,  2676,  2379,  2410,  2441,  2410,   368,  1731,  -241,
     790,  2472,   107,   329,    17,  2788,  1383,   121,  -241,  2788,
       6,   126,  -241,   157,   677,   110,  -241,  -241,  2788,   795,
     119,   151,  2410,  2788,   119,  1063,  2410,  -241,  1700,  2788,
     871,     1,  1700,   132,   116,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  1700,   146,   154,   145,   155,
    -241,   159,  2304,   133,   136,  2676,    25,  1109,  2410,   138,
       7,  2410,   368,  -241,   336,  2694,   115,  -241,  -241,  -241,
     156,   480,  -241,  1731,   967,   147,   161,  2788,   119,   119,
    1152,  -241,  -241,  -241,   172,   148,   160,  1700,    70,   463,
    -241,  -241,  -241,  1625,   186,   162,   630,  1825,  2788,  2788,
    1847,   123,   123,   123,   123,   123,  1700,  1700,   202,  2410,
    2410,   163,  2410,  -241,  1700,   166,   509,   667,  2788,  -241,
     431,  -241,  -241,  2788,  -241,  2503,   164,  1762,   168,  1199,
     203,   119,  2410,  2052,   967,  1700,  1700,  2788,   548,   201,
     736,   175,    49,  2788,   189,  -241,   179,  -241,   154,   145,
     155,  -241,  -241,  2336,  1879,   119,   205,   180,  2410,   182,
    1901,  -241,   183,  -241,   187,  1965,  -241,  1700,  2788,  -241,
    -241,   188,  2410,   192,  1063,   222,  2074,  2096,   711,  1339,
    1429,  2410,   235,  -241,     1,   197,   119,     1,  2788,  1700,
     119,  2410,   238,  2410,  -241,  2788,   119,  -241,  -241,  2788,
    1933,   198,  2410,    88,   206,   967,  -241,  1473,  2534,   245,
     626,  -241,  2565,  -241,   251,  2805,   215,    64,  2410,   218,
    -241,  2336,  2788,   119,   212,  -241,  -241,  2788,   213,   220,
     256,  1700,  -241,   253,  2788,   119,  2725,   237,  2645,  -241,
    -241,  -241,   239,   271,   241,   242,   243,   252,  2410,  2788,
     254,  -241,  -241,  2410,  2118,  1700,  -241,    23,   782,   286,
     119,  -241,  1504,  -241,  -241,  -241,  1700,   119,   119,  2410,
     255,   967,  2140,   257,  1152,  2410,  1669,  2596,   649,   261,
    2162,  2788,  2788,  2410,  -241,    97,   967,  -241,  1246,   262,
    2788,   368,  2627,  2743,  -241,  2788,   250,   265,  -241,   919,
     290,   266,   295,    83,   289,   119,   827,   119,   287,  2788,
     309,   276,  2194,   967,  -241,  2410,  2788,  -241,  2788,   277,
     280,   315,  -241,  -241,   119,   328,   333,   296,  2788,   306,
     308,  -241,   300,   348,   351,  2788,  1700,  1700,   119,  2226,
    2258,  2788,   323,   324,   331,   372,   378,  2788,  -241,   334,
     342,  -241,  2788,  -241
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     8,     6,    25,     1,     0,     0,
       0,    25,     0,     0,     0,     7,     0,     2,    34,    33,
      31,    32,    35,    26,    28,    27,    29,    30,    20,    21,
       0,     0,     0,     0,    25,    17,     0,    88,    31,     0,
     107,    81,    84,    82,    83,   127,     0,     0,     0,    89,
       0,     0,     0,    51,    87,     0,     0,    22,    19,    24,
      23,    18,     0,     0,    50,     0,     0,   107,   123,     0,
     108,    31,     0,     0,   126,   108,     0,    87,     0,    40,
       0,    86,     0,     0,     0,     0,     0,    37,     0,     0,
     107,     0,    94,    31,    83,   127,   127,     0,   127,    90,
      88,    31,     0,    89,    25,     0,    87,     0,     3,     0,
      25,   119,   118,    89,     0,   122,   117,   116,     0,   111,
     123,     0,     0,     0,   123,     0,   127,    38,   107,     0,
       0,    80,   107,     0,     0,   115,    31,   110,    36,   109,
     143,   139,   140,   141,   142,   107,    97,   129,   131,   133,
     135,   137,     0,     0,     0,   108,    91,    31,   127,     0,
       0,   127,     0,    92,   123,     0,     0,    10,    13,     9,
       0,     0,    14,   127,     0,     0,     0,     0,     0,     0,
     107,   112,   122,   111,     0,     0,   122,   107,     0,     0,
     120,    52,    85,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   107,     0,     0,
     127,     0,   127,    93,   107,     0,   109,   111,     0,    16,
       0,    11,     5,     0,   121,   127,     0,    88,     0,    87,
       0,     0,   127,     0,     0,   107,   107,     0,    89,     0,
       0,     0,    58,     0,     0,   125,   113,   138,   128,   130,
     132,   134,   136,    99,     0,     0,     0,     0,   127,     0,
       0,    54,     0,    12,     0,   108,   104,   107,     0,    53,
     106,     0,   127,     0,     0,     0,     0,     0,   126,   107,
     107,     0,    31,    76,    46,     0,     0,    80,     0,   107,
       0,     0,     0,   127,   105,     0,     0,    15,     4,     0,
       0,     0,     0,     0,     0,     0,    39,    88,    31,     0,
      89,    71,    31,    72,     0,     0,     0,    59,   127,     0,
     114,    98,     0,     0,     0,   102,   103,     0,     0,     0,
       0,   107,    45,     0,     0,   123,    68,     0,     0,    74,
      31,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    49,   127,     0,   107,   118,   122,   111,     0,
      67,    47,   107,    60,    62,    48,   107,     0,     0,   127,
       0,     0,     0,     0,   107,   127,    88,    31,    89,     0,
       0,     0,     0,   127,   100,     0,     0,    66,    87,     0,
       0,   123,     0,     0,    61,     0,     0,     0,    56,     0,
       0,   106,     0,   119,   122,   116,   111,    73,     0,     0,
       0,     0,    51,     0,    65,   127,     0,   101,     0,     0,
       0,     0,    64,    95,     0,     0,     0,    41,     0,     0,
       0,    42,     0,     0,     0,     0,   107,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,    44,     0,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,  -241,  -241,    -3,    -9,  -241,   -52,  -176,
    -194,  -240,   367,  -241,   129,   482,  -241,   193,   191,   194,
     -60,  -241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     8,    15,    12,    49,    17,    50,    51,
     195,   196,    52,   130,    53,    77,   146,   147,   148,   149,
     150,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    31,   285,   104,   228,    16,     1,     5,    32,     9,
     135,   193,    18,    19,    10,   136,   194,   239,    33,    58,
       9,     6,   131,    21,    62,    10,   373,    34,    68,    72,
      74,    63,     7,   209,   132,    55,    35,    80,    22,     2,
      56,   -63,    23,    88,    91,    97,   103,   107,    24,    25,
      26,    27,   102,   109,    11,   214,   111,   112,   113,   193,
     117,   120,   110,   169,   194,    11,   124,    91,    72,    91,
      72,   374,   210,   188,   193,   134,   137,   344,   192,   343,
      59,   234,    60,   120,    72,    72,    72,    72,   235,   162,
     316,   164,   166,   319,    61,   -80,   171,    97,    64,   234,
     175,   170,    82,   311,   313,    91,   331,   176,   399,   181,
     -80,   129,   177,    72,   185,   355,    86,   162,    60,    87,
     190,   108,   221,   121,    83,    13,   140,     9,   141,   142,
     143,   144,    10,   122,    41,    42,    43,    44,    41,    42,
      43,    44,   129,    91,   251,   252,   120,   133,    72,    72,
     138,   137,    72,   167,    14,   177,   120,   174,   180,   183,
     -25,   198,    84,   199,   220,   -25,    83,   201,   224,    76,
     203,   145,    11,   202,    78,   204,    41,    42,    43,    44,
      91,   207,   275,   208,   238,   205,   379,   213,    91,   245,
     246,    91,   218,   222,   230,   240,   114,   231,   228,   223,
      72,    72,   241,    72,    84,   255,   178,   137,   232,   262,
     280,   271,   267,   258,   264,   261,    72,   269,    68,   152,
      97,   284,   303,    72,    91,   287,   288,   292,   278,   297,
     293,   283,   295,   298,   286,   304,   302,    30,   315,    18,
      19,   270,    20,   317,    91,    91,   324,   178,   337,    72,
      21,    91,   332,   333,   339,   342,   120,   189,   346,   301,
     349,   197,   351,    72,   353,    22,   352,    91,    91,    23,
     310,   355,    72,   359,   200,    24,    25,    26,    27,   320,
     362,   366,    72,   369,    72,   361,   326,   363,   364,   365,
     328,    91,   135,    72,    18,    19,   375,   136,   335,    72,
     409,   413,   387,    72,   384,    21,   341,   394,   402,    72,
     415,   414,    91,   347,   410,   416,   233,   418,   350,   385,
      22,   419,   435,   425,    23,   356,   426,   120,   427,   360,
      24,    25,    26,    27,   400,   253,   254,   180,    83,    72,
     368,   429,   431,   260,    72,    91,   430,   411,    41,    42,
      43,    44,   433,   378,   434,    41,    42,    43,    44,   436,
      72,   421,   437,    91,   276,   277,    72,   391,    72,   445,
     446,    91,   396,   397,    72,   168,    84,    83,   447,    97,
     451,   403,   -21,   405,   407,   448,   408,    41,    42,    43,
      44,   449,   452,   249,   248,   137,   300,   250,     0,     0,
     417,     0,     0,    91,    69,     0,    72,   423,     0,   424,
       0,     0,     0,     0,    81,    84,    85,     0,   321,   432,
       0,    98,   105,     0,     0,     0,   438,     0,     0,     0,
      91,    91,   444,     0,     0,   115,   118,    69,   450,    85,
      83,     0,    69,   453,   126,     0,   126,     0,     0,     0,
      41,    42,    43,    44,     0,   139,     0,     0,   153,    69,
     354,     0,     0,     0,   160,     0,     0,    69,    18,    19,
      85,    20,     0,   173,     0,     0,     0,   263,    84,    21,
      85,     0,     0,     0,   372,     0,    89,   182,     0,     0,
       0,   186,     0,     0,    22,   380,    54,     0,    23,    41,
      42,    43,    44,     0,    24,    25,    26,    27,     0,     0,
     206,     0,   135,   236,    18,    19,     0,   136,     0,     0,
      73,     0,    69,     0,     0,    21,   219,    79,   412,   216,
       0,   115,    69,    85,     0,     0,    99,   106,   139,     0,
      22,     0,     0,     0,    23,   225,   226,     0,     0,     0,
      24,    25,    26,    27,     0,     0,     0,   279,     0,    99,
       0,    99,     0,   243,     0,   439,   440,    41,    42,    43,
      44,     0,     0,     0,     0,   154,   156,   158,   159,     0,
     163,     0,     0,    73,     0,     0,     0,   216,    99,    18,
      19,     0,    20,     0,    69,    84,    98,     0,   272,     0,
      21,     0,     0,     0,   184,    85,     0,    54,   163,     0,
       0,     0,    54,     0,     0,    22,     0,     0,     0,    23,
       0,     0,   291,     0,     0,    24,    25,    26,    27,     0,
       0,     0,    69,     0,    28,    83,     0,     0,     0,   211,
     212,     0,     0,   215,     0,    41,    42,    43,    44,    41,
      42,    43,    44,   318,     0,   163,    54,   322,    83,     0,
       0,     0,   229,   327,     0,     0,     0,     0,    41,    42,
      43,    44,   -70,    84,    69,    54,   242,    85,     0,     0,
       0,     0,    18,    19,     0,    20,   -31,   -31,   -31,   -31,
     348,   256,   257,    21,   259,   -76,    84,     0,     0,     0,
      89,     0,   357,    69,     0,    69,     0,   266,    22,     0,
       0,    99,    23,   -24,   273,     0,    54,     0,    24,    25,
      26,    27,     0,     0,    90,     0,   179,   182,     0,     0,
     -78,   -78,   -78,   -78,   381,   382,     0,     0,     0,   281,
     294,    18,    19,   392,   282,    85,     0,     0,     0,     0,
       0,     0,    21,     0,   266,    98,    54,   -78,   404,   118,
      69,    54,    54,   314,     0,     0,     0,    22,     0,     0,
       0,    23,   139,   323,   182,   325,     0,    24,    25,    26,
      27,     0,     0,     0,   330,     0,     0,    54,     0,     0,
      73,   428,     0,  -108,    73,    18,    19,     0,    20,  -108,
     345,   -31,   -31,   -31,   -31,   441,    21,     0,     0,    41,
      42,    43,    44,     0,   -31,   -31,   -31,   -31,    65,    66,
       0,    22,     0,     0,     0,    23,     0,     0,   -69,     0,
     367,    24,    25,    26,    27,   370,     0,     0,    67,     0,
      28,   -31,   -31,     0,    54,   -31,   -31,   -31,   -31,   -31,
       0,   383,     0,    54,     0,     0,   388,   389,   314,    73,
       0,     0,     0,     0,     0,   398,     0,     0,    54,     0,
      99,     0,    36,   -31,    37,     0,    18,    19,     0,    38,
      39,    54,     0,     0,     0,    40,     0,    21,     0,     0,
      41,    42,    43,    44,  -107,    54,     0,   422,    45,    46,
       0,     0,    22,     0,   191,     0,    23,     0,    47,     0,
      48,     0,    24,    25,    26,    27,     0,   -57,  -107,  -127,
      36,     0,    37,     0,    18,    19,     0,    38,    39,     0,
       0,     0,     0,    40,     0,    21,     0,     0,    41,    42,
      43,    44,  -107,     0,     0,     0,    45,    46,     0,     0,
      22,     0,     0,     0,    23,     0,    47,     0,    48,     0,
      24,    25,    26,    27,  -107,   -57,  -107,  -127,    36,     0,
      37,     0,    18,    19,     0,    38,    39,     0,     0,     0,
       0,    40,     0,    21,     0,     0,    41,    42,    43,    44,
    -107,     0,     0,     0,    45,    46,     0,     0,    22,     0,
       0,     0,    23,     0,    47,     0,    48,     0,    24,    25,
      26,    27,     0,   -57,  -107,  -127,    36,     0,   100,     0,
      18,    19,     0,   101,    39,     0,     0,     0,     0,    40,
       0,    21,     0,     0,    41,    42,    43,    44,  -107,     0,
       0,     0,    45,    46,     0,     0,    22,     0,     0,     0,
      23,     0,    47,     0,    48,     0,    24,    25,    26,    27,
       0,   -25,  -107,    11,    36,     0,    37,     0,    18,    19,
       0,    38,    39,     0,     0,     0,     0,   187,     0,    21,
       0,     0,    41,    42,    43,    44,  -107,     0,     0,     0,
      45,    46,     0,     0,    22,     0,     0,     0,    23,     0,
      47,     0,    48,     0,    24,    25,    26,    27,     0,   -57,
    -107,  -127,    70,     0,    18,    19,     0,    71,    39,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    46,     0,     0,
      22,     0,     0,     0,    23,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,   227,     0,    18,    19,  -127,
      38,    39,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    41,    42,    43,    44,     0,     0,     0,     0,     0,
      46,     0,     0,    22,     0,     0,     0,    23,     0,    47,
       0,     0,     0,    24,    25,    26,    27,     0,     0,     0,
    -127,   -57,    92,     0,    18,    19,     0,    93,    39,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    41,    42,
      43,    94,     0,     0,     0,     0,     0,    46,     0,     0,
      22,     0,     0,     0,    23,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,     0,    95,    96,   270,    92,
       0,    18,    19,     0,    93,    39,     0,     0,     0,     0,
       0,     0,    21,     0,     0,    41,    42,    43,    94,     0,
       0,     0,     0,     0,    46,     0,     0,    22,     0,     0,
       0,    23,     0,     0,     0,     0,     0,    24,    25,    26,
      27,     0,     0,    95,    96,   401,    18,    19,     0,    20,
     -88,     0,     0,     0,     0,     0,     0,    21,   -88,     0,
      41,    42,    43,    44,   -88,     0,     0,     0,     0,    65,
      66,     0,    22,     0,     0,     0,    23,     0,     0,     0,
       0,     0,    24,    25,    26,    27,   -88,   -88,   -88,   123,
     -88,   -88,   307,     0,    18,    19,     0,   308,    39,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    46,     0,     0,
      22,     0,     0,     0,    23,     0,    47,     0,   309,     0,
      24,    25,    26,    27,     0,   -57,    92,  -127,    18,    19,
       0,    93,    39,     0,     0,     0,     0,     0,     0,    21,
       0,     0,    41,    42,    43,    94,     0,     0,     0,     0,
       0,    46,     0,     0,    22,     0,     0,     0,    23,     0,
       0,     0,     0,     0,    24,    25,    26,    27,     0,   172,
      95,    96,   227,     0,    18,    19,     0,   312,    39,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    46,     0,     0,
      22,     0,     0,     0,    23,     0,    47,     0,     0,     0,
      24,    25,    26,    27,     0,   -57,  -108,  -127,    18,    19,
       0,    20,  -108,     0,     0,     0,     0,     0,     0,    21,
       0,     0,    41,    42,    43,    44,     0,     0,     0,     0,
       0,    65,   334,     0,    22,     0,     0,   376,    23,    18,
      19,     0,   377,    39,    24,    25,    26,    27,     0,   -79,
      21,   268,     0,    41,    42,    43,    44,     0,     0,     0,
       0,     0,    46,     0,     0,    22,     0,     0,     0,    23,
       0,    47,     0,     0,     0,    24,    25,    26,    27,     0,
     -57,  -108,  -127,    18,    19,     0,    20,  -108,     0,     0,
       0,     0,     0,     0,    21,     0,     0,    41,    42,    43,
      44,     0,     0,     0,     0,     0,    65,    66,     0,    22,
       0,     0,    92,    23,    18,    19,     0,    93,    39,    24,
      25,    26,    27,     0,     0,    21,    67,     0,    41,    42,
      43,    94,     0,     0,     0,     0,     0,    46,     0,     0,
      22,     0,     0,     0,    23,     0,     0,     0,     0,     0,
      24,    25,    26,    27,     0,     0,    95,    96,   227,     0,
      18,    19,     0,    38,   237,     0,     0,     0,     0,     0,
       0,    21,     0,     0,    41,    42,    43,    44,     0,     0,
       0,     0,     0,    46,     0,     0,    22,     0,     0,     0,
      23,     0,    47,     0,     0,     0,    24,    25,    26,    27,
       0,     0,   155,  -127,    18,    19,     0,    71,    39,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,   390,    66,     0,
      22,     0,     0,    75,    23,    18,    19,     0,    38,    39,
      24,    25,    26,    27,     0,     0,    21,   268,     0,    41,
      42,    43,    44,     0,     0,     0,     0,     0,    46,     0,
       0,    22,     0,     0,   155,    23,    18,    19,     0,    71,
      39,    24,    25,    26,    27,     0,     0,    21,  -127,     0,
      41,    42,    43,    44,     0,     0,     0,     0,     0,    46,
       0,     0,    22,     0,     0,  -108,    23,    18,    19,     0,
      20,     0,    24,    25,    26,    27,     0,     0,    21,   161,
       0,    41,    42,    43,    44,     0,     0,     0,     0,     0,
      65,    66,     0,    22,     0,     0,    75,    23,    18,    19,
       0,    38,    39,    24,    25,    26,    27,     0,     0,    21,
     268,     0,    41,    42,    43,    44,  -107,     0,     0,     0,
       0,    46,     0,     0,    22,     0,     0,     0,    23,     0,
      18,    19,     0,    20,    24,    25,    26,    27,     0,  -107,
    -107,    21,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,    18,    19,     0,    20,    22,     0,     0,     0,
      23,     0,     0,    21,     0,     0,    24,    25,    26,    27,
      89,     0,    90,     0,   244,     0,     0,     0,    22,     0,
       0,     0,    23,     0,    18,    19,     0,    20,    24,    25,
      26,    27,     0,     0,    90,    21,   247,     0,     0,     0,
       0,     0,    89,     0,     0,     0,    18,    19,     0,    20,
      22,     0,     0,     0,    23,     0,     0,    21,     0,     0,
      24,    25,    26,    27,    89,     0,    90,     0,   290,     0,
       0,     0,    22,     0,     0,     0,    23,     0,    18,    19,
       0,    20,    24,    25,    26,    27,     0,     0,    90,    21,
     296,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,    23,     0,
      18,    19,     0,    20,    24,    25,    26,    27,     0,     0,
      90,    21,   329,     0,    41,    42,    43,    44,     0,     0,
       0,     0,     0,    65,    66,     0,    22,     0,     0,     0,
      23,     0,     0,     0,     0,     0,    24,    25,    26,    27,
       0,    18,    19,   299,    20,     0,     0,     0,     0,     0,
       0,     0,    21,   125,     0,    18,    19,     0,    20,    89,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,    23,     0,    89,     0,     0,     0,    24,    25,    26,
      27,    22,     0,    90,     0,    23,     0,    18,    19,     0,
      20,    24,    25,    26,    27,     0,   127,   128,    21,   274,
       0,     0,     0,     0,     0,    89,     0,     0,     0,    18,
      19,     0,    20,    22,     0,     0,     0,    23,     0,     0,
      21,   305,     0,    24,    25,    26,    27,    89,     0,    90,
       0,    18,    19,     0,    20,    22,     0,     0,     0,    23,
       0,     0,    21,     0,     0,    24,    25,    26,    27,    89,
       0,    90,     0,    18,    19,     0,    20,    22,     0,     0,
       0,    23,     0,     0,    21,   371,     0,    24,    25,    26,
      27,    89,   306,    90,     0,    18,    19,     0,    20,    22,
       0,     0,     0,    23,     0,     0,    21,   386,     0,    24,
      25,    26,    27,    89,     0,    90,     0,    18,    19,     0,
      20,    22,     0,     0,     0,    23,     0,     0,    21,     0,
       0,    24,    25,    26,    27,    89,     0,    90,     0,     0,
     395,     0,     0,    22,     0,     0,     0,    23,     0,    18,
      19,     0,    20,    24,    25,    26,    27,     0,     0,    90,
      21,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,    23,
       0,    18,    19,     0,    20,    24,    25,    26,    27,   420,
       0,    90,    21,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,    23,     0,    18,    19,     0,    20,    24,    25,    26,
      27,   442,     0,    90,    21,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,    23,     0,    18,    19,     0,    20,    24,
      25,    26,    27,   443,     0,    90,    21,     0,     0,    18,
      19,     0,    20,    89,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,    23,     0,    89,     0,     0,
       0,    24,    25,    26,    27,    22,     0,    90,     0,    23,
       0,    18,    19,     0,    20,    24,    25,    26,    27,     0,
       0,   206,    21,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,    23,     0,     0,     0,     0,     0,    24,    25,    26,
      27,     0,    70,   289,    18,    19,     0,    71,    39,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    46,     0,     0,
      22,     0,     0,   155,    23,    18,    19,     0,    71,    39,
      24,    25,    26,    27,     0,     0,    21,     0,     0,    41,
      42,    43,    44,     0,     0,     0,     0,     0,    46,     0,
       0,    22,     0,     0,   155,    23,    18,    19,     0,   157,
      39,    24,    25,    26,    27,     0,     0,    21,     0,     0,
      41,    42,    43,    44,     0,     0,     0,     0,     0,    46,
       0,     0,    22,     0,     0,   165,    23,    18,    19,     0,
      71,    39,    24,    25,    26,    27,     0,     0,    21,     0,
       0,    41,    42,    43,    44,     0,     0,     0,     0,     0,
      46,     0,     0,    22,     0,     0,   265,    23,    18,    19,
       0,    71,    39,    24,    25,    26,    27,     0,     0,    21,
       0,     0,    41,    42,    43,    44,     0,     0,     0,     0,
       0,    46,     0,     0,    22,     0,     0,   336,    23,    18,
      19,     0,    71,    39,    24,    25,    26,    27,     0,     0,
      21,     0,     0,    41,    42,    43,    44,     0,     0,     0,
       0,     0,    46,     0,     0,    22,     0,     0,   338,    23,
      18,    19,     0,    71,    39,    24,    25,    26,    27,     0,
       0,    21,     0,     0,    41,    42,    43,    44,     0,     0,
       0,     0,     0,    46,     0,     0,    22,     0,     0,   393,
      23,    18,    19,     0,    71,    39,    24,    25,    26,    27,
       0,     0,    21,     0,     0,    41,    42,    43,    44,     0,
       0,     0,     0,     0,    46,     0,     0,    22,     0,     0,
     116,    23,    18,    19,     0,    20,     0,    24,    25,    26,
      27,     0,     0,    21,     0,     0,    41,    42,    43,    44,
      18,    19,     0,   119,     0,     0,     0,     0,    22,     0,
       0,    21,    23,     0,    41,    42,    43,    44,    24,    25,
      26,    27,     0,    65,    66,     0,    22,     0,     0,     0,
      23,    18,    19,     0,    20,     0,    24,    25,    26,    27,
       0,     0,    21,     0,     0,    41,    42,    43,    44,    18,
      19,     0,   217,     0,    65,    66,     0,    22,     0,     0,
      21,    23,     0,    41,    42,    43,    44,    24,    25,    26,
      27,     0,    65,    66,     0,    22,     0,     0,     0,    23,
      18,    19,     0,   358,     0,    24,    25,    26,    27,     0,
       0,    21,     0,     0,    41,    42,    43,    44,    18,    19,
       0,   406,     0,    65,    66,     0,    22,     0,     0,    21,
      23,     0,    41,    42,    43,    44,    24,    25,    26,    27,
       0,    65,    66,     0,    22,     0,     0,     0,    23,    18,
      19,     0,    57,     0,    24,    25,    26,    27,     0,     0,
      21,     0,     0,    18,    19,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,    23,
      18,    19,     0,   340,     0,    24,    25,    26,    27,    22,
       0,    21,     0,    23,     0,     0,     0,     0,     0,    24,
      25,    26,    27,     0,     0,     0,    22,     0,     0,     0,
      23,     0,     0,     0,     0,     0,    24,    25,    26,    27
};

static const yytype_int16 yycheck[] =
{
       9,    10,   242,    55,   180,     8,     1,    46,    11,     3,
       3,    10,     5,     6,     8,     8,    15,   193,    38,    28,
       3,     3,    36,    16,    33,     8,     3,    47,    37,    38,
      39,    34,     0,     8,    48,    36,    46,    46,    31,    34,
      41,    40,    35,    52,    53,    54,    55,    56,    41,    42,
      43,    44,    55,    38,    48,    48,    65,    66,    67,    10,
      69,    70,    47,    46,    15,    48,    75,    76,    77,    78,
      79,    48,    47,   125,    10,    84,    85,   317,   130,    15,
       8,    11,     3,    92,    93,    94,    95,    96,    18,    98,
     284,   100,   101,   287,    49,    46,   105,   106,    46,    11,
     109,   104,     3,   279,   280,   114,    18,   110,    11,   118,
      46,    28,    29,   122,   123,    18,    32,   126,     3,    46,
     129,    46,   174,     3,     9,     1,     3,     3,     5,     6,
       7,     8,     8,    22,    19,    20,    21,    22,    19,    20,
      21,    22,    28,   152,   204,   205,   155,     3,   157,   158,
      46,   160,   161,    46,    30,    29,   165,    36,    48,     8,
      36,    29,    47,    47,   173,    41,     9,    21,   177,    40,
      25,    48,    48,    19,    45,    20,    19,    20,    21,    22,
     189,    48,   234,    47,   193,    26,   362,    49,   197,   198,
     199,   200,    36,    46,    22,     9,    67,    49,   374,    38,
     209,   210,    40,   212,    47,     3,    49,   216,    48,   218,
       9,     8,    48,    50,   223,    49,   225,    49,   227,    90,
     229,    46,   274,   232,   233,    36,    47,    22,   237,    46,
      50,   240,    50,    46,   243,    13,    48,     3,     3,     5,
       6,    49,     8,    46,   253,   254,     8,    49,     3,   258,
      16,   260,    46,   305,     3,    40,   265,   128,    40,   268,
      48,   132,    49,   272,     8,    31,    46,   276,   277,    35,
     279,    18,   281,    36,   145,    41,    42,    43,    44,   288,
       9,    29,   291,    29,   293,    46,   295,    46,    46,    46,
     299,   300,     3,   302,     5,     6,    10,     8,   307,   308,
      50,    11,    45,   312,    49,    16,   315,    46,    46,   318,
      15,    45,   321,   322,    49,    28,   187,     8,   327,   371,
      31,    45,    22,    46,    35,   334,    46,   336,    13,   338,
      41,    42,    43,    44,   386,   206,   207,    48,     9,   348,
     349,    13,    46,   214,   353,   354,    13,   399,    19,    20,
      21,    22,    46,   362,    46,    19,    20,    21,    22,    11,
     369,   413,    11,   372,   235,   236,   375,   376,   377,    46,
      46,   380,   381,   382,   383,    46,    47,     9,    47,   388,
      46,   390,    46,   392,   393,    13,   395,    19,    20,    21,
      22,    13,    50,   202,   201,   404,   267,   203,    -1,    -1,
     409,    -1,    -1,   412,    37,    -1,   415,   416,    -1,   418,
      -1,    -1,    -1,    -1,    47,    47,    49,    -1,   289,   428,
      -1,    54,    55,    -1,    -1,    -1,   435,    -1,    -1,    -1,
     439,   440,   441,    -1,    -1,    68,    69,    70,   447,    72,
       9,    -1,    75,   452,    77,    -1,    79,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    88,    -1,    -1,    91,    92,
     331,    -1,    -1,    -1,    97,    -1,    -1,   100,     5,     6,
     103,     8,    -1,   106,    -1,    -1,    -1,    46,    47,    16,
     113,    -1,    -1,    -1,   355,    -1,    23,   120,    -1,    -1,
      -1,   124,    -1,    -1,    31,   366,    14,    -1,    35,    19,
      20,    21,    22,    -1,    41,    42,    43,    44,    -1,    -1,
      47,    -1,     3,    50,     5,     6,    -1,     8,    -1,    -1,
      38,    -1,   155,    -1,    -1,    16,    46,    45,   399,   162,
      -1,   164,   165,   166,    -1,    -1,    54,    55,   171,    -1,
      31,    -1,    -1,    -1,    35,   178,   179,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,     9,    -1,    77,
      -1,    79,    -1,   196,    -1,   436,   437,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   220,   106,     5,
       6,    -1,     8,    -1,   227,    47,   229,    -1,   231,    -1,
      16,    -1,    -1,    -1,   122,   238,    -1,   125,   126,    -1,
      -1,    -1,   130,    -1,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,   255,    -1,    -1,    41,    42,    43,    44,    -1,
      -1,    -1,   265,    -1,    50,     9,    -1,    -1,    -1,   157,
     158,    -1,    -1,   161,    -1,    19,    20,    21,    22,    19,
      20,    21,    22,   286,    -1,   173,   174,   290,     9,    -1,
      -1,    -1,   180,   296,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    46,    47,   307,   193,    46,   310,    -1,    -1,
      -1,    -1,     5,     6,    -1,     8,    19,    20,    21,    22,
     323,   209,   210,    16,   212,    46,    47,    -1,    -1,    -1,
      23,    -1,   335,   336,    -1,   338,    -1,   225,    31,    -1,
      -1,   229,    35,    46,   232,    -1,   234,    -1,    41,    42,
      43,    44,    -1,    -1,    47,    -1,    49,   360,    -1,    -1,
      19,    20,    21,    22,   367,   368,    -1,    -1,    -1,     3,
     258,     5,     6,   376,     8,   378,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,   272,   388,   274,    46,   391,   392,
     393,   279,   280,   281,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,   405,   291,   407,   293,    -1,    41,    42,    43,
      44,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
     308,   424,    -1,     3,   312,     5,     6,    -1,     8,     9,
     318,    19,    20,    21,    22,   438,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    19,    20,    21,    22,    28,    29,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    46,    -1,
     348,    41,    42,    43,    44,   353,    -1,    -1,    48,    -1,
      50,    46,    47,    -1,   362,    50,    19,    20,    21,    22,
      -1,   369,    -1,   371,    -1,    -1,   374,   375,   376,   377,
      -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,   386,    -1,
     388,    -1,     1,    46,     3,    -1,     5,     6,    -1,     8,
       9,   399,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    23,   413,    -1,   415,    27,    28,
      -1,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
       1,    -1,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,     1,    -1,
       3,    -1,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    37,    -1,    39,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,     1,    -1,     3,    -1,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    -1,    41,    42,    43,    44,
      -1,    46,    47,    48,     1,    -1,     3,    -1,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,     3,    -1,     5,     6,    50,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    -1,    47,    48,    49,     3,
      -1,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    42,    43,    44,    -1,    46,     3,    48,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    46,     3,    48,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    31,    -1,    -1,     3,    35,     5,
       6,    -1,     8,     9,    41,    42,    43,    44,    -1,    46,
      16,    48,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
      46,     3,    48,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      -1,    -1,     3,    35,     5,     6,    -1,     8,     9,    41,
      42,    43,    44,    -1,    -1,    16,    48,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    -1,    -1,    47,    48,     3,    -1,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    -1,     3,    48,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      31,    -1,    -1,     3,    35,     5,     6,    -1,     8,     9,
      41,    42,    43,    44,    -1,    -1,    16,    48,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,     3,    35,     5,     6,    -1,     8,
       9,    41,    42,    43,    44,    -1,    -1,    16,    48,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,     3,    35,     5,     6,    -1,
       8,    -1,    41,    42,    43,    44,    -1,    -1,    16,    48,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    -1,    -1,     3,    35,     5,     6,
      -1,     8,     9,    41,    42,    43,    44,    -1,    -1,    16,
      48,    -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
       5,     6,    -1,     8,    41,    42,    43,    44,    -1,    46,
      47,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,     5,     6,    -1,     8,    31,    -1,    -1,    -1,
      35,    -1,    -1,    16,    -1,    -1,    41,    42,    43,    44,
      23,    -1,    47,    -1,    49,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,     5,     6,    -1,     8,    41,    42,
      43,    44,    -1,    -1,    47,    16,    49,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,     5,     6,    -1,     8,
      31,    -1,    -1,    -1,    35,    -1,    -1,    16,    -1,    -1,
      41,    42,    43,    44,    23,    -1,    47,    -1,    49,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,     5,     6,
      -1,     8,    41,    42,    43,    44,    -1,    -1,    47,    16,
      49,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
       5,     6,    -1,     8,    41,    42,    43,    44,    -1,    -1,
      47,    16,    49,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,     5,     6,    48,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,     5,     6,    -1,     8,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    31,    -1,    -1,
      -1,    35,    -1,    23,    -1,    -1,    -1,    41,    42,    43,
      44,    31,    -1,    47,    -1,    35,    -1,     5,     6,    -1,
       8,    41,    42,    43,    44,    -1,    46,    47,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,     5,
       6,    -1,     8,    31,    -1,    -1,    -1,    35,    -1,    -1,
      16,    17,    -1,    41,    42,    43,    44,    23,    -1,    47,
      -1,     5,     6,    -1,     8,    31,    -1,    -1,    -1,    35,
      -1,    -1,    16,    -1,    -1,    41,    42,    43,    44,    23,
      -1,    47,    -1,     5,     6,    -1,     8,    31,    -1,    -1,
      -1,    35,    -1,    -1,    16,    17,    -1,    41,    42,    43,
      44,    23,    46,    47,    -1,     5,     6,    -1,     8,    31,
      -1,    -1,    -1,    35,    -1,    -1,    16,    17,    -1,    41,
      42,    43,    44,    23,    -1,    47,    -1,     5,     6,    -1,
       8,    31,    -1,    -1,    -1,    35,    -1,    -1,    16,    -1,
      -1,    41,    42,    43,    44,    23,    -1,    47,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,     5,
       6,    -1,     8,    41,    42,    43,    44,    -1,    -1,    47,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,
      -1,     5,     6,    -1,     8,    41,    42,    43,    44,    45,
      -1,    47,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,     5,     6,    -1,     8,    41,    42,    43,
      44,    45,    -1,    47,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    -1,     5,     6,    -1,     8,    41,
      42,    43,    44,    45,    -1,    47,    16,    -1,    -1,     5,
       6,    -1,     8,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    31,    -1,    -1,    -1,    35,    -1,    23,    -1,    -1,
      -1,    41,    42,    43,    44,    31,    -1,    47,    -1,    35,
      -1,     5,     6,    -1,     8,    41,    42,    43,    44,    -1,
      -1,    47,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,     3,    47,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,     3,    35,     5,     6,    -1,     8,     9,
      41,    42,    43,    44,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,     3,    35,     5,     6,    -1,     8,
       9,    41,    42,    43,    44,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,     3,    35,     5,     6,    -1,
       8,     9,    41,    42,    43,    44,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,     3,    35,     5,     6,
      -1,     8,     9,    41,    42,    43,    44,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,     3,    35,     5,
       6,    -1,     8,     9,    41,    42,    43,    44,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,     3,    35,
       5,     6,    -1,     8,     9,    41,    42,    43,    44,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,     3,
      35,     5,     6,    -1,     8,     9,    41,    42,    43,    44,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
       3,    35,     5,     6,    -1,     8,    -1,    41,    42,    43,
      44,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
       5,     6,    -1,     8,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    16,    35,    -1,    19,    20,    21,    22,    41,    42,
      43,    44,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,     5,     6,    -1,     8,    -1,    41,    42,    43,    44,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,     5,
       6,    -1,     8,    -1,    28,    29,    -1,    31,    -1,    -1,
      16,    35,    -1,    19,    20,    21,    22,    41,    42,    43,
      44,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,
       5,     6,    -1,     8,    -1,    41,    42,    43,    44,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,     5,     6,
      -1,     8,    -1,    28,    29,    -1,    31,    -1,    -1,    16,
      35,    -1,    19,    20,    21,    22,    41,    42,    43,    44,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,     5,
       6,    -1,     8,    -1,    41,    42,    43,    44,    -1,    -1,
      16,    -1,    -1,     5,     6,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    31,    -1,    -1,    -1,    35,
       5,     6,    -1,     8,    -1,    41,    42,    43,    44,    31,
      -1,    16,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    34,    52,    53,    46,     3,     0,    54,     3,
       8,    48,    56,     1,    30,    55,    56,    58,     5,     6,
       8,    16,    31,    35,    41,    42,    43,    44,    50,    57,
       3,    57,    56,    38,    47,    46,     1,     3,     8,     9,
      14,    19,    20,    21,    22,    27,    28,    37,    39,    57,
      59,    60,    63,    65,    66,    36,    41,     8,    57,     8,
       3,    49,    57,    56,    46,    28,    29,    48,    57,    63,
       3,     8,    57,    66,    57,     3,    65,    66,    65,    66,
      57,    63,     3,     9,    47,    63,    32,    46,    57,    23,
      47,    57,     3,     8,    22,    47,    48,    57,    63,    66,
       3,     8,    56,    57,    59,    63,    66,    57,    46,    38,
      47,    57,    57,    57,    65,    63,     3,    57,    63,     8,
      57,     3,    22,    48,    57,    17,    63,    46,    47,    28,
      64,    36,    48,     3,    57,     3,     8,    57,    46,    63,
       3,     5,     6,     7,     8,    48,    67,    68,    69,    70,
      71,    72,    65,    63,    66,     3,    66,     8,    66,    66,
      63,    48,    57,    66,    57,     3,    57,    46,    46,    46,
      56,    57,    46,    63,    36,    57,    56,    29,    49,    49,
      48,    57,    63,     8,    66,    57,    63,    14,    59,    65,
      57,    33,    59,    10,    15,    61,    62,    65,    29,    47,
      65,    21,    19,    25,    20,    26,    47,    48,    47,     8,
      47,    66,    66,    49,    48,    66,    63,     8,    36,    46,
      57,    59,    46,    38,    57,    63,    63,     3,    60,    66,
      22,    49,    48,    65,    11,    18,    50,     9,    57,    60,
       9,    40,    46,    63,    49,    57,    57,    49,    68,    69,
      70,    71,    71,    65,    65,     3,    66,    66,    50,    66,
      65,    49,    57,    46,    57,     3,    66,    48,    48,    49,
      49,     8,    63,    66,    17,    59,    65,    65,    57,     9,
       9,     3,     8,    57,    46,    62,    57,    36,    47,    47,
      49,    63,    22,    50,    66,    50,    49,    46,    46,    48,
      65,    57,    48,    59,    13,    17,    46,     3,     8,    39,
      57,    60,     8,    60,    66,     3,    61,    46,    63,    61,
      57,    65,    63,    66,     8,    66,    57,    63,    57,    49,
      66,    18,    46,    59,    29,    57,     3,     3,     3,     3,
       8,    57,    40,    15,    62,    66,    40,    57,    63,    48,
      57,    49,    46,     8,    65,    18,    57,    63,     8,    36,
      57,    46,     9,    46,    46,    46,    29,    66,    57,    29,
      66,    17,    65,     3,    48,    10,     3,     8,    57,    60,
      65,    63,    63,    66,    49,    59,    17,    45,    66,    66,
      28,    57,    63,     3,    46,    28,    57,    57,    66,    11,
      59,    49,    46,    57,    63,    57,     8,    57,    57,    50,
      49,    59,    65,    11,    45,    15,    28,    57,     8,    45,
      45,    59,    66,    57,    57,    46,    46,    13,    63,    13,
      13,    46,    57,    46,    46,    22,    11,    11,    57,    65,
      65,    63,    45,    45,    57,    46,    46,    47,    13,    13,
      57,    46,    50,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,    10,     8,     2,     2,     0,     4,
       4,     5,     6,     4,     4,     7,     5,     2,     3,     3,
       2,     2,     3,     3,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     3,     7,
       2,    15,    16,    22,    23,     8,     6,     9,     9,     9,
       2,     1,     4,     6,     5,     9,    11,     0,     2,     4,
       6,     8,     6,     0,    11,    10,     8,     6,     5,     6,
       4,     4,     4,     5,     5,     5,     3,     3,     3,     4,
       0,     1,     1,     1,     1,     2,     0,     1,     1,     1,
       2,     3,     3,     4,     2,    14,    24,     3,     7,     5,
      11,    13,     7,     7,     6,     6,     6,     0,     1,     3,
       3,     3,     4,     5,     7,     3,     3,     3,     3,     3,
       4,     5,     3,     2,     3,     5,     2,     0,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 2161 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 226 "parser.y"


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
