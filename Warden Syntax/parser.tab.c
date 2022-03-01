
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
        #include <process.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int lineno;
	extern int yylex();
	void yyerror();
        char str[20];


/* Line 189 of yacc.c  */
#line 88 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     ICONST = 259,
     FCONST = 260,
     CCONST = 261,
     SCONST = 262,
     CHAR = 263,
     INT = 264,
     SINGLE = 265,
     BOOL = 266,
     TSTRING = 267,
     VOID = 268,
     IF = 269,
     UNLESS = 270,
     RETURN = 271,
     SWITCH = 272,
     BREAK = 273,
     CONTINUE = 274,
     DEFAULT = 275,
     CASE = 276,
     DO = 277,
     WHILE = 278,
     FOR = 279,
     DOTIMES = 280,
     VAR = 281,
     FUNCTION = 282,
     MAIN = 283,
     DOT = 284,
     TRUE = 285,
     FALSE = 286,
     OUTPUT = 287,
     OUTPUTNL = 288,
     INPUT = 289,
     NOTOP = 290,
     RPAREN = 291,
     LPAREN = 292,
     RBRACEDEM = 293,
     LBRACEDEM = 294,
     RBRACK = 295,
     LBRACK = 296,
     GTHANOP = 297,
     LTHANOP = 298,
     GEQTHANOP = 299,
     LEQTHANOP = 300,
     EQUOP = 301,
     ANDOP = 302,
     OROP = 303,
     NOTEQUOP = 304,
     COLON = 305,
     MODEQOP = 306,
     DIVEQOP = 307,
     MULEQOP = 308,
     MINEQOP = 309,
     ADDEQOP = 310,
     ASSIGN = 311,
     IINCROP = 312,
     DINCROP = 313,
     REFERVAR = 314,
     EXPOP = 315,
     COMMA = 316,
     MINOP = 317,
     ADDOP = 318,
     MODOP = 319,
     DIVOP = 320,
     MULOP = 321,
     SEMIDEM = 322,
     ELSE = 323
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "parser.y"

    char char_val;
	int int_val;
	double double_val;
	char* str_val;
	list_t* symtab_item;



/* Line 214 of yacc.c  */
#line 202 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  289

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    13,    16,    18,    24,    28,    30,    32,
      34,    36,    38,    40,    43,    45,    48,    52,    57,    61,
      63,    65,    70,    78,    82,    84,    87,    89,    91,    93,
      95,    98,   101,   103,   105,   107,   109,   112,   115,   119,
     123,   125,   127,   129,   136,   138,   140,   146,   154,   161,
     169,   176,   184,   191,   194,   195,   203,   210,   216,   225,
     234,   240,   248,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   286,
     290,   294,   298,   302,   306,   309,   312,   315,   318,   322,
     325,   329,   333,   337,   340,   342,   344,   346,   348,   350,
     354,   358,   362,   366,   370,   372,   373,   375,   376,   382,
     385,   387,   389,   390,   392,   394,   396,   398,   400,   402,
     404,   408,   414,   416,   418,   419,   423,   425,   426,   428,
     429,   432,   434,   437,   444,   446,   448,   450,   451,   455,
     457,   461,   467,   469,   470,   472,   473,   477
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    72,    39,    71,    82,    16,   108,    67,
      38,   114,    -1,    71,    73,    -1,    73,    -1,    27,    28,
      37,    36,   118,    -1,    26,    75,    67,    -1,     9,    -1,
       8,    -1,    10,    -1,    11,    -1,    12,    -1,    76,    -1,
      75,    61,    -1,    78,    -1,     3,    74,    -1,     3,    77,
      74,    -1,    77,    41,   103,    40,    -1,    41,   103,    40,
      -1,    79,    -1,    80,    -1,     3,    74,    56,   108,    -1,
       3,    77,    74,    56,    39,    81,    38,    -1,    81,    61,
     108,    -1,   108,    -1,    82,    83,    -1,    83,    -1,    87,
      -1,    93,    -1,    94,    -1,   110,    67,    -1,    19,    67,
      -1,    95,    -1,    92,    -1,    90,    -1,    91,    -1,    18,
      67,    -1,   111,    67,    -1,     3,    97,    67,    -1,    97,
       3,    67,    -1,    84,    -1,    86,    -1,   102,    -1,    76,
      56,    34,    37,    36,    67,    -1,    32,    -1,    33,    -1,
      85,    37,   102,    36,    67,    -1,    14,    37,   102,    36,
      96,    88,    89,    -1,    14,    37,   102,    36,    96,    89,
      -1,    88,    68,    14,    37,   102,    36,    96,    -1,    68,
      14,    37,   102,    36,    96,    -1,    88,    68,    15,    37,
     102,    36,    96,    -1,    68,    15,    37,   102,    36,    96,
      -1,    68,    96,    -1,    -1,    15,    37,   102,    36,    96,
      88,    89,    -1,    15,    37,   102,    36,    96,    89,    -1,
      25,    37,   102,    36,    96,    -1,    17,    37,   102,    36,
      39,   105,   106,    38,    -1,    24,    37,   102,   102,    67,
     102,    36,    96,    -1,    23,    37,   102,    36,    96,    -1,
      22,    96,    23,    37,   102,    36,    67,    -1,    39,    82,
      38,    -1,    57,    -1,    58,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1,    49,    -1,    55,    -1,
      54,    -1,    53,    -1,    52,    -1,    51,    -1,    48,    -1,
      47,    -1,   102,    63,   102,    -1,   102,    62,   102,    -1,
     102,    66,   102,    -1,   102,    65,   102,    -1,   102,    64,
     102,    -1,   102,   100,   102,    -1,   102,    60,    -1,     3,
      97,    -1,    97,     3,    -1,     3,     3,    -1,   102,   101,
     102,    -1,    35,   102,    -1,   102,    99,   102,    -1,   102,
      98,   102,    -1,    37,   102,    36,    -1,   107,   108,    -1,
     111,    -1,   105,    -1,    73,    -1,    76,    -1,     3,    -1,
     102,    63,   102,    -1,   102,    62,   102,    -1,   102,    66,
     102,    -1,   102,    65,   102,    -1,   102,    64,   102,    -1,
     108,    -1,    -1,    18,    -1,    -1,    21,   108,    50,    83,
     104,    -1,    20,    83,    -1,    20,    -1,    62,    -1,    -1,
       4,    -1,     6,    -1,     7,    -1,     5,    -1,   109,    -1,
      30,    -1,    31,    -1,     3,    56,   102,    -1,     3,    37,
     112,    36,    67,    -1,   113,    -1,     7,    -1,    -1,   113,
      61,   102,    -1,   102,    -1,    -1,   115,    -1,    -1,   115,
     116,    -1,   116,    -1,   117,   122,    -1,    27,     3,    37,
     119,    36,   118,    -1,    74,    -1,    13,    -1,   120,    -1,
      -1,   120,    61,   121,    -1,   121,    -1,     3,    50,    74,
      -1,    39,   123,   124,   125,    38,    -1,    71,    -1,    -1,
      82,    -1,    -1,    16,   102,    67,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    56,    57,    60,    63,    66,    67,    68,
      69,    70,    73,    74,    75,    79,    80,    83,    84,    86,
      87,    90,    93,    96,    97,   100,   101,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   122,   125,   126,   129,   132,   133,   136,
     137,   138,   139,   142,   143,   146,   147,   150,   153,   156,
     159,   162,   166,   169,   170,   173,   174,   175,   176,   179,
     180,   183,   184,   185,   186,   187,   190,   191,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   217,
     218,   219,   220,   221,   222,   223,   226,   227,   230,   233,
     234,   237,   238,   241,   242,   243,   244,   245,   248,   249,
     252,   256,   259,   260,   261,   264,   265,   266,   269,   270,
     273,   274,   277,   280,   283,   284,   287,   288,   291,   292,
     295,   298,   301,   302,   305,   306,   309,   310
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "ICONST", "FCONST", "CCONST",
  "SCONST", "CHAR", "INT", "SINGLE", "BOOL", "TSTRING", "VOID", "IF",
  "UNLESS", "RETURN", "SWITCH", "BREAK", "CONTINUE", "DEFAULT", "CASE",
  "DO", "WHILE", "FOR", "DOTIMES", "VAR", "FUNCTION", "MAIN", "DOT",
  "TRUE", "FALSE", "OUTPUT", "OUTPUTNL", "INPUT", "NOTOP", "RPAREN",
  "LPAREN", "RBRACEDEM", "LBRACEDEM", "RBRACK", "LBRACK", "GTHANOP",
  "LTHANOP", "GEQTHANOP", "LEQTHANOP", "EQUOP", "ANDOP", "OROP",
  "NOTEQUOP", "COLON", "MODEQOP", "DIVEQOP", "MULEQOP", "MINEQOP",
  "ADDEQOP", "ASSIGN", "IINCROP", "DINCROP", "REFERVAR", "EXPOP", "COMMA",
  "MINOP", "ADDOP", "MODOP", "DIVOP", "MULOP", "SEMIDEM", "ELSE",
  "$accept", "program", "declarations", "func_main", "declaration", "type",
  "var_names", "variable", "array", "init", "var_init", "array_init",
  "values", "statements", "statement", "input_statement", "outputall",
  "output_statement", "if_statement", "else_if", "optional_else",
  "unless_statement", "do_times_statement", "switch_statement",
  "for_statement", "while_statement", "do_while_statement", "tail",
  "incrop", "relop", "equop", "assop", "logop", "expression", "array_exp",
  "break_keyword", "switch_expression", "switch_default", "sign",
  "constant", "bool_const", "assignment", "function_call", "call_params",
  "call_param", "functions_optional", "functions", "function",
  "function_head", "return_type", "parameters_optional", "parameters",
  "parameter", "function_tail", "declarations_optional",
  "statements_optional", "return_optional", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    73,    74,    74,    74,
      74,    74,    75,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    80,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    85,    85,    86,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    92,    93,
      94,    95,    96,    97,    97,    98,    98,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   105,   106,
     106,   107,   107,   108,   108,   108,   108,   108,   109,   109,
     110,   111,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   118,   118,   119,   119,   120,   120,
     121,   122,   123,   123,   124,   124,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     2,     1,     5,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     4,     3,     1,
       1,     4,     7,     3,     1,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     1,     1,     6,     1,     1,     5,     7,     6,     7,
       6,     7,     6,     2,     0,     7,     6,     5,     8,     8,
       5,     7,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     2,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     0,     1,     0,     5,     2,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     1,     0,     3,     1,     0,     1,     0,
       2,     1,     2,     6,     1,     1,     1,     0,     3,     1,
       3,     5,     1,     0,     1,     0,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     0,   112,
       4,     0,     0,     0,    12,    14,    19,    20,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,   112,   112,    63,    64,   111,     3,    97,   112,    26,
      40,     0,    41,    27,    34,    35,    33,    28,    29,    32,
       0,    42,    95,     0,     0,    94,     8,     7,     9,    10,
      11,   135,   134,     5,   105,    15,     0,    13,     6,    87,
     112,   112,    15,     0,    85,   112,   112,   112,    36,    31,
     113,   116,   114,   115,   118,   119,     0,   117,   112,     0,
     112,   112,   112,    98,    96,    97,     0,    89,    94,     0,
       0,     0,    25,   112,    86,    65,    66,    67,    68,    69,
      77,    76,    70,    75,    74,    73,    72,    71,    84,   112,
     112,   112,   112,   112,   112,   112,   112,   112,    93,    30,
      37,     0,     0,   104,     0,   105,    16,   123,   126,     0,
     122,   120,    16,    38,     0,     0,     0,   112,   112,     0,
       0,   112,     0,    85,    86,    92,     0,     0,     0,    39,
      79,    78,    82,    81,    80,    91,    90,    83,    88,   112,
     112,   112,   112,   112,    18,    21,     0,     0,     0,   112,
       0,     0,     0,   107,    62,   112,     0,   111,     0,     0,
       0,     0,     0,    79,    78,    82,    81,    80,    17,     0,
     121,   125,    54,    54,     0,   106,   108,     0,    60,   112,
      57,     0,   129,    46,     0,    24,     0,    54,    48,    54,
      56,     0,     0,     0,    43,     0,     2,   128,   131,     0,
      22,     0,     0,     0,    53,     0,    47,    55,   112,     0,
      61,     0,     0,   130,   143,   132,    23,   112,   112,     0,
       0,   109,    58,    59,   137,   142,   112,     0,     0,   112,
     112,     0,     0,   136,   139,     3,   112,   147,     0,     0,
       0,     0,     0,     0,     0,   112,     0,    50,    52,     0,
       0,   140,   133,   138,     0,   141,    49,    51,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,     3,    94,    62,    13,    95,    73,    15,
      16,    17,   214,    38,    39,    40,    41,    42,    43,   217,
     218,    44,    45,    46,    47,    48,    49,   234,    96,   124,
     125,   126,   127,    51,   132,   206,    52,   239,    53,   133,
      87,    54,    98,   139,   140,   226,   227,   228,   229,    63,
     262,   263,   264,   245,   256,   267,   276
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -193
static const yytype_int16 yypact[] =
{
     -14,   -13,    16,   -16,   -11,  -193,     2,    -7,    28,   481,
    -193,   270,    32,   -43,  -193,  -193,  -193,  -193,   514,    10,
      25,    31,   -35,     3,    15,    35,    47,    51,    53,  -193,
    -193,    91,    91,  -193,  -193,  -193,   541,    39,   281,  -193,
    -193,    60,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
      84,   980,  -193,    15,    33,    37,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,    72,    43,   113,  -193,  -193,  -193,
     134,    91,  -193,   113,    38,    91,    91,    91,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,    56,  -193,   481,    78,
      91,    91,    91,   524,  -193,  -193,   105,   980,  -193,   566,
      76,    15,  -193,    91,    44,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,    91,
      91,    91,    91,    91,    91,    91,    91,    91,  -193,  -193,
    -193,  1005,    73,  -193,    15,    72,    58,  -193,   980,    80,
      59,   980,  -193,  -193,   591,   616,   641,   481,   425,    90,
     666,   321,   691,  -193,  -193,  -193,    94,    65,   716,  -193,
     141,   141,   346,   346,   346,   980,   980,   980,   980,    91,
      91,    91,    91,    91,  -193,  -193,    93,    96,    69,    91,
      35,    35,    99,   126,  -193,    91,    35,    91,   928,    35,
     111,   112,    85,   893,   903,  1032,  1042,  1061,  -193,    15,
    -193,   980,    83,    83,   135,  -193,  -193,   741,  -193,    91,
    -193,    92,   137,  -193,   -26,  -193,    24,    97,  -193,    97,
    -193,   142,   100,   766,  -193,   158,  -193,   137,  -193,   129,
    -193,    15,   136,   138,  -193,    50,  -193,  -193,   453,   139,
    -193,    35,   156,  -193,     2,  -193,  -193,    91,    91,   157,
     160,  -193,  -193,  -193,   169,     2,    34,   791,   816,    91,
      91,   124,   143,   117,  -193,  -193,   397,   182,    35,    35,
     841,   866,   278,   270,   169,    91,   161,  -193,  -193,    35,
      35,  -193,  -193,  -193,   954,  -193,  -193,  -193,  -193
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,   -44,  -193,     8,   -12,  -193,    -5,   190,  -193,
    -193,  -193,  -193,   -80,   -29,  -193,  -193,  -193,  -193,     0,
    -192,  -193,  -193,  -193,  -193,  -193,  -193,   -23,    -8,  -193,
    -193,  -193,  -193,   150,    75,  -193,     4,  -193,  -193,   -19,
    -193,  -193,    -2,  -193,  -193,  -193,  -193,   -10,  -193,   -69,
    -193,  -193,   -63,  -193,  -193,  -193,  -193
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -146
static const yytype_int16 yytable[] =
{
      65,    50,    89,    14,    37,    86,    72,    55,   148,   102,
      74,   220,   230,     1,    10,     4,     5,    36,    67,    80,
      81,    82,    83,     6,    68,   236,     7,   237,     8,    11,
      50,    12,    78,    37,   128,   231,    55,    18,   232,   233,
      56,    57,    58,    59,    60,    84,    85,    75,    19,    20,
    -145,    21,    22,    23,   136,    24,    25,    26,    27,    28,
       8,   142,    76,    88,   249,   250,    29,    30,    77,    31,
      79,    32,  -145,    64,    88,    93,    80,    81,    82,    83,
      50,    72,   157,    37,    90,   153,    55,   104,    91,    88,
      92,    33,    34,    24,    93,   100,    35,   103,     8,   134,
     129,   149,    84,    85,   130,   143,   147,    31,   154,    32,
     156,   159,    24,   174,   177,   175,   178,     8,   183,   102,
     179,    56,    57,    58,    59,    60,    31,   185,    32,    33,
      34,   190,   191,   198,    35,   199,   200,    93,   204,    50,
      50,   137,    37,    37,   205,    55,    55,   211,    33,    34,
     212,   216,   213,    35,   135,    24,    24,   202,   203,   224,
       8,   242,   238,   208,   225,   235,   210,   240,   244,    31,
    -124,    32,   261,   247,   272,   248,   266,   252,   274,   273,
     215,    97,    99,   105,   106,   107,   108,   109,   110,   111,
     112,    33,    34,   254,   259,  -127,    35,   260,   275,   285,
     255,   118,    66,   219,   282,   121,   122,   123,   221,   251,
     176,   283,   246,     0,   131,     0,     0,   243,   253,     0,
     138,   141,     0,     0,     0,   144,   145,   146,     0,     0,
      50,     0,     0,    37,     0,     0,    55,   102,     0,     0,
     150,   151,   152,     0,     0,   277,   278,     0,    50,     0,
       0,    37,    10,   158,    55,     0,   286,   287,    50,     0,
     281,    37,     0,   265,    55,     0,     0,     0,     0,   160,
     161,   162,   163,   164,   165,   166,   167,   168,    56,    57,
      58,    59,    60,    61,    18,   131,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    19,    20,   101,    21,    22,
      23,   188,    24,    25,    26,    27,    28,     8,     0,     0,
       0,     0,     0,    29,    30,     0,    31,     0,    32,   193,
     194,   195,   196,   197,    93,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,   207,     0,   160,    33,    34,
       0,     0,    24,    35,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    32,   223,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,    33,    34,
       0,   118,     0,   187,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   257,   258,     0,
      18,     0,     0,     0,     0,     0,   118,     0,     0,   270,
     271,    19,    20,  -144,    21,    22,    23,     0,    24,    25,
      26,    27,    28,     8,     0,   284,     0,     0,    18,    29,
      30,     0,    31,     0,    32,  -144,     0,     0,     0,    19,
      20,     0,    21,    22,    23,     0,    24,    25,    26,    27,
      28,     8,     0,     0,    33,    34,    18,    29,    30,    35,
      31,     0,    32,   184,     0,     0,     0,    19,    20,     0,
      21,    22,    23,     0,    24,    25,    26,    27,    28,     8,
       0,     0,    33,    34,    18,    29,    30,    35,    31,     0,
      32,  -110,     0,     0,     0,    19,    20,     0,    21,    22,
      23,     0,    24,    25,    26,    27,    28,     8,     0,     0,
      33,    34,     0,    29,    30,    35,    31,    69,    32,     0,
       0,     0,    56,    57,    58,    59,    60,    69,     0,     0,
       0,     0,    56,    57,    58,    59,    60,     0,    33,    34,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,    64,     0,   -96,     0,     0,
       0,    70,     0,     0,     0,    64,     0,     0,     0,     0,
      71,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,     0,   -96,   -96,   -96,   -96,   -96,     0,     0,     0,
       0,   -96,   155,     0,   -96,   -96,   -96,   -96,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   180,   119,   120,
     121,   122,   123,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   181,   119,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   182,   119,   120,
     121,   122,   123,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   186,   119,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   189,   119,   120,
     121,   122,   123,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   192,   119,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   222,   119,   120,
     121,   122,   123,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   241,   119,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   268,   119,   120,
     121,   122,   123,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   269,   119,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   279,   119,   120,
     121,   122,   123,   105,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   280,   119,   120,   121,   122,   123,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,     0,   119,   120,
     121,   122,   123,  -100,     0,   105,   106,   107,   108,   109,
     110,   111,   112,   -99,     0,   105,   106,   107,   108,   109,
     110,   111,   112,   118,     0,     0,     0,   121,   122,   123,
       0,     0,     0,   118,     0,     0,     0,   121,   122,   123,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   115,   116,   117,     0,     0,     0,     0,   118,     0,
     119,   120,   121,   122,   123,   209,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,   117,
       0,     0,     0,     0,   118,     0,   119,   120,   121,   122,
     123,   288,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   115,   116,   117,     0,     0,     0,     0,
     118,     0,   119,   120,   121,   122,   123,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,   115,   116,
     117,     0,     0,     0,     0,   118,     0,   169,   170,   171,
     172,   173,  -103,     0,   105,   106,   107,   108,   109,   110,
     111,   112,  -102,     0,   105,   106,   107,   108,   109,   110,
     111,   112,   118,     0,     0,     0,     0,     0,     0,     0,
       0,  -101,   118,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118
};

static const yytype_int16 yycheck[] =
{
      12,     9,    25,     8,     9,    24,    18,     9,    88,    38,
      18,   203,    38,    27,     6,    28,     0,     9,    61,     4,
       5,     6,     7,    39,    67,   217,    37,   219,    26,    36,
      38,     3,    67,    38,    53,    61,    38,     3,    14,    15,
       8,     9,    10,    11,    12,    30,    31,    37,    14,    15,
      16,    17,    18,    19,    66,    21,    22,    23,    24,    25,
      26,    73,    37,    39,    14,    15,    32,    33,    37,    35,
      67,    37,    38,    41,    39,     3,     4,     5,     6,     7,
      88,    93,   101,    88,    37,    93,    88,     3,    37,    39,
      37,    57,    58,    21,     3,    56,    62,    37,    26,    56,
      67,    23,    30,    31,    67,    67,    50,    35,     3,    37,
      34,    67,    21,    40,    56,   134,    36,    26,   147,   148,
      61,     8,     9,    10,    11,    12,    35,    37,    37,    57,
      58,    37,    67,    40,    62,    39,    67,     3,    39,   147,
     148,     7,   147,   148,    18,   147,   148,    36,    57,    58,
      38,    68,    67,    62,    41,    21,    21,   180,   181,    67,
      26,     3,    20,   186,    27,    68,   189,    67,    39,    35,
      36,    37,     3,    37,    50,    37,   256,    38,    61,    36,
     199,    31,    32,    42,    43,    44,    45,    46,    47,    48,
      49,    57,    58,    37,    37,    61,    62,    37,    16,    38,
     244,    60,    12,   203,   273,    64,    65,    66,   204,   238,
     135,   274,   231,    -1,    64,    -1,    -1,   227,   241,    -1,
      70,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
     238,    -1,    -1,   238,    -1,    -1,   238,   266,    -1,    -1,
      90,    91,    92,    -1,    -1,   268,   269,    -1,   256,    -1,
      -1,   256,   244,   103,   256,    -1,   279,   280,   266,    -1,
     272,   266,    -1,   255,   266,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     8,     9,
      10,    11,    12,    13,     3,   135,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,   151,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    35,    -1,    37,   169,
     170,   171,   172,   173,     3,    -1,    -1,    -1,    -1,   179,
      -1,    -1,    -1,    -1,    -1,   185,    -1,   187,    57,    58,
      -1,    -1,    21,    62,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,   209,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    57,    58,
      -1,    60,    -1,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,   247,   248,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,   259,
     260,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,   275,    -1,    -1,     3,    32,
      33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,    14,
      15,    -1,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    57,    58,     3,    32,    33,    62,
      35,    -1,    37,    38,    -1,    -1,    -1,    14,    15,    -1,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    57,    58,     3,    32,    33,    62,    35,    -1,
      37,    38,    -1,    -1,    -1,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      57,    58,    -1,    32,    33,    62,    35,     3,    37,    -1,
      -1,    -1,     8,     9,    10,    11,    12,     3,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    16,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    -1,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    36,    62,    63,
      64,    65,    66,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    36,    62,    63,
      64,    65,    66,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    36,    62,    63,
      64,    65,    66,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    36,    62,    63,
      64,    65,    66,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    36,    62,    63,
      64,    65,    66,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    36,    62,    63,
      64,    65,    66,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    60,    36,    62,    63,    64,    65,    66,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      64,    65,    66,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    60,    -1,    -1,    -1,    64,    65,    66,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,    -1,
      62,    63,    64,    65,    66,    67,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,
      65,    66,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    60,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    70,    72,    28,     0,    39,    37,    26,    71,
      73,    36,     3,    75,    76,    78,    79,    80,     3,    14,
      15,    17,    18,    19,    21,    22,    23,    24,    25,    32,
      33,    35,    37,    57,    58,    62,    73,    76,    82,    83,
      84,    85,    86,    87,    90,    91,    92,    93,    94,    95,
      97,   102,   105,   107,   110,   111,     8,     9,    10,    11,
      12,    13,    74,   118,    41,    74,    77,    61,    67,     3,
      37,    56,    74,    77,    97,    37,    37,    37,    67,    67,
       4,     5,     6,     7,    30,    31,   108,   109,    39,    96,
      37,    37,    37,     3,    73,    76,    97,   102,   111,   102,
      56,    16,    83,    37,     3,    42,    43,    44,    45,    46,
      47,    48,    49,    51,    52,    53,    54,    55,    60,    62,
      63,    64,    65,    66,    98,    99,   100,   101,   108,    67,
      67,   102,   103,   108,    56,    41,    74,     7,   102,   112,
     113,   102,    74,    67,   102,   102,   102,    50,    82,    23,
     102,   102,   102,    97,     3,    36,    34,   108,   102,    67,
     102,   102,   102,   102,   102,   102,   102,   102,   102,    62,
      63,    64,    65,    66,    40,   108,   103,    56,    36,    61,
      36,    36,    36,    83,    38,    37,    36,    62,   102,    36,
      37,    67,    36,   102,   102,   102,   102,   102,    40,    39,
      67,   102,    96,    96,    39,    18,   104,   102,    96,    67,
      96,    36,    38,    67,    81,   108,    68,    88,    89,    88,
      89,   105,    36,   102,    67,    27,   114,   115,   116,   117,
      38,    61,    14,    15,    96,    68,    89,    89,    20,   106,
      67,    36,     3,   116,    39,   122,   108,    37,    37,    14,
      15,    83,    38,    96,    37,    71,   123,   102,   102,    37,
      37,     3,   119,   120,   121,    73,    82,   124,    36,    36,
     102,   102,    50,    36,    61,    16,   125,    96,    96,    36,
      36,    74,   118,   121,   102,    38,    96,    96,    67
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1846 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 314 "parser.y"



void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

int main (int argc, char *argv[]){

	init_hash_table();
        
        printf("Enter Warden Source File:\n");
        scanf("%123s",str);
        strcat(str,".wd");
        yyin = fopen("sample.wd", "r"); 
        if(yyin == NULL){
                printf("File not detected or different file\n");
                return 1;
        }
        
        /* yydebug = 1; */
        yyparse();
	fclose(yyin);
	

	printf("\n\nParsing finished! No errors found!\n\n");
	
	yyout = fopen("symtab_dump.out", "w");
	symtab_dump(yyout);
	fclose(yyout);
	
        system("pause");
        return 0;
}
