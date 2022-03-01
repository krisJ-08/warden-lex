
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
	extern FILE *yyin;
	extern FILE *yyout;
	extern int lineno;
	extern int yylex();
	void yyerror();
        char str[20];
        #define YYDEBUG 1


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
     SEMIDEM = 290,
     NOTOP = 291,
     RPAREN = 292,
     LPAREN = 293,
     RBRACEDEM = 294,
     LBRACEDEM = 295,
     RBRACK = 296,
     LBRACK = 297,
     NOTEQUOP = 298,
     OROP = 299,
     ANDOP = 300,
     EQUOP = 301,
     LEQTHANOP = 302,
     GEQTHANOP = 303,
     LTHANOP = 304,
     GTHANOP = 305,
     COLON = 306,
     MODEQOP = 307,
     DIVEQOP = 308,
     MULEQOP = 309,
     MINEQOP = 310,
     ADDEQOP = 311,
     ASSIGN = 312,
     REFERVAR = 313,
     DINCROP = 314,
     IINCROP = 315,
     COMMA = 316,
     MINOP = 317,
     ADDOP = 318,
     EXPOP = 319,
     MODOP = 320,
     DIVOP = 321,
     MULOP = 322,
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
#define YYLAST   939

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

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
     235,   241,   249,   253,   255,   257,   259,   261,   263,   265,
     267,   269,   271,   273,   275,   277,   279,   283,   287,   291,
     295,   299,   303,   306,   309,   312,   315,   319,   323,   326,
     330,   334,   338,   340,   343,   345,   347,   349,   351,   353,
     357,   361,   365,   369,   373,   375,   376,   378,   379,   385,
     388,   390,   392,   393,   395,   397,   399,   401,   405,   407,
     410,   415,   417,   419,   420,   424,   426,   428,   429,   432,
     434,   437,   444,   446,   448,   450,   451,   455,   457,   461,
     467,   469,   470,   472,   473,   477
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    72,    40,    71,    82,    16,   107,    35,
      39,   113,    -1,    71,    73,    -1,    73,    -1,    27,    28,
      38,    37,   117,    -1,    26,    75,    35,    -1,     9,    -1,
       8,    -1,    10,    -1,    11,    -1,    12,    -1,    76,    -1,
      75,    61,    -1,    78,    -1,     3,    74,    -1,     3,    77,
      74,    -1,    77,    42,   102,    41,    -1,    42,   102,    41,
      -1,    79,    -1,    80,    -1,     3,    74,    57,   107,    -1,
       3,    77,    74,    57,    40,    81,    39,    -1,    81,    61,
     107,    -1,   107,    -1,    82,    83,    -1,    83,    -1,    87,
      -1,    93,    -1,    94,    -1,   108,    35,    -1,    19,    35,
      -1,    95,    -1,    92,    -1,    90,    -1,    91,    -1,    18,
      35,    -1,   110,    35,    -1,     3,    97,    35,    -1,    97,
       3,    35,    -1,    84,    -1,    86,    -1,   101,    -1,    76,
      57,    34,    38,    37,    35,    -1,    32,    -1,    33,    -1,
      85,    38,   101,    37,    35,    -1,    14,    38,   101,    37,
      96,    88,    89,    -1,    14,    38,   101,    37,    96,    89,
      -1,    88,    68,    14,    38,   101,    37,    96,    -1,    68,
      14,    38,   101,    37,    96,    -1,    88,    68,    15,    38,
     101,    37,    96,    -1,    68,    15,    38,   101,    37,    96,
      -1,    68,    96,    -1,    -1,    15,    38,   101,    37,    96,
      88,    89,    -1,    15,    38,   101,    37,    96,    89,    -1,
      25,    38,   101,    37,    96,    -1,    17,    38,   101,    37,
      40,   104,   105,    39,    -1,    24,    38,   108,    35,   101,
      35,   101,    37,    96,    -1,    23,    38,   101,    37,    96,
      -1,    22,    96,    23,    38,   101,    37,    35,    -1,    40,
      82,    39,    -1,    60,    -1,    59,    -1,    50,    -1,    49,
      -1,    48,    -1,    47,    -1,    46,    -1,    43,    -1,    56,
      -1,    55,    -1,    54,    -1,    53,    -1,    52,    -1,   101,
      63,   101,    -1,   101,    62,   101,    -1,   101,    67,   101,
      -1,   101,    66,   101,    -1,   101,    65,   101,    -1,   101,
     100,   101,    -1,    76,    64,    -1,     3,    97,    -1,    97,
       3,    -1,    76,    76,    -1,   101,    44,   101,    -1,   101,
      45,   101,    -1,    36,   101,    -1,   101,    99,   101,    -1,
     101,    98,   101,    -1,    38,   101,    37,    -1,   109,    -1,
     106,   107,    -1,   110,    -1,   104,    -1,    73,    -1,     3,
      -1,   107,    -1,   101,    63,   101,    -1,   101,    62,   101,
      -1,   101,    67,   101,    -1,   101,    66,   101,    -1,   101,
      65,   101,    -1,   107,    -1,    -1,    18,    -1,    -1,    21,
     107,    51,    83,   103,    -1,    20,    83,    -1,    20,    -1,
      62,    -1,    -1,     4,    -1,     6,    -1,     7,    -1,     5,
      -1,   109,    57,   101,    -1,    76,    -1,    58,    76,    -1,
       3,    38,   111,    37,    -1,   112,    -1,     7,    -1,    -1,
     112,    61,   101,    -1,   101,    -1,   114,    -1,    -1,   114,
     115,    -1,   115,    -1,   116,   121,    -1,    27,     3,    38,
     118,    37,   117,    -1,    74,    -1,    13,    -1,   119,    -1,
      -1,   119,    61,   120,    -1,   120,    -1,    76,    51,    74,
      -1,    40,   122,   123,   124,    39,    -1,    71,    -1,    -1,
      82,    -1,    -1,    16,   101,    35,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    57,    58,    61,    64,    67,    68,    69,
      70,    71,    74,    75,    76,    80,    81,    84,    85,    87,
      88,    91,    94,    97,    98,   101,   102,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   123,   126,   127,   130,   133,   134,   137,
     138,   139,   140,   143,   144,   147,   148,   151,   154,   157,
     160,   163,   167,   170,   171,   174,   175,   176,   177,   180,
     181,   184,   185,   186,   187,   188,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   216,
     217,   218,   219,   220,   221,   222,   225,   226,   229,   232,
     233,   236,   237,   240,   241,   242,   243,   246,   249,   250,
     253,   256,   257,   258,   261,   262,   264,   265,   268,   269,
     272,   275,   278,   279,   282,   283,   286,   287,   290,   293,
     296,   297,   300,   301,   304,   305
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
  "TRUE", "FALSE", "OUTPUT", "OUTPUTNL", "INPUT", "SEMIDEM", "NOTOP",
  "RPAREN", "LPAREN", "RBRACEDEM", "LBRACEDEM", "RBRACK", "LBRACK",
  "NOTEQUOP", "OROP", "ANDOP", "EQUOP", "LEQTHANOP", "GEQTHANOP",
  "LTHANOP", "GTHANOP", "COLON", "MODEQOP", "DIVEQOP", "MULEQOP",
  "MINEQOP", "ADDEQOP", "ASSIGN", "REFERVAR", "DINCROP", "IINCROP",
  "COMMA", "MINOP", "ADDOP", "EXPOP", "MODOP", "DIVOP", "MULOP", "ELSE",
  "$accept", "program", "declarations", "func_main", "declaration", "type",
  "var_names", "variable", "array", "init", "var_init", "array_init",
  "values", "statements", "statement", "input_statement", "outputall",
  "output_statement", "if_statement", "else_if", "optional_else",
  "unless_statement", "do_times_statement", "switch_statement",
  "for_statement", "while_statement", "do_while_statement", "tail",
  "incrop", "relop", "equop", "assop", "expression", "array_exp",
  "break_keyword", "switch_expression", "switch_default", "sign",
  "constant", "assignment", "var_ref", "function_call", "call_params",
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
      99,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   105,
     105,   106,   106,   107,   107,   107,   107,   108,   109,   109,
     110,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   116,   117,   117,   118,   118,   119,   119,   120,   121,
     122,   122,   123,   123,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     2,     1,     5,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     4,     3,     1,
       1,     4,     7,     3,     1,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     1,     1,     6,     1,     1,     5,     7,     6,     7,
       6,     7,     6,     2,     0,     7,     6,     5,     8,     9,
       5,     7,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     2,     3,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     0,     1,     0,     5,     2,
       1,     1,     0,     1,     1,     1,     1,     3,     1,     2,
       4,     1,     1,     0,     3,     1,     1,     0,     2,     1,
       2,     6,     1,     1,     1,     0,     3,     1,     3,     5,
       1,     0,     1,     0,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       4,     0,     0,     0,    12,    14,    19,    20,    97,   113,
     116,   114,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     0,     0,    64,    63,
     111,     3,   118,     0,    26,    40,     0,    41,    27,    34,
      35,    33,    28,    29,    32,     0,    42,    95,     0,    98,
       0,    92,    94,     8,     7,     9,    10,    11,   133,   132,
       5,   105,    15,     0,     6,    13,   123,    15,     0,    83,
       0,     0,     0,    36,    31,     0,     0,     0,     0,     0,
       0,    97,    96,   118,     0,    88,    92,    94,     0,     0,
     119,     0,    82,    85,     0,    25,     0,    84,    70,     0,
       0,    69,    68,    67,    66,    65,    75,    74,    73,    72,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      30,     0,    37,     0,     0,    98,     0,   105,    16,   115,
     125,     0,   121,    16,    38,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,    83,    84,    91,     0,
       0,     0,    39,    86,    87,    77,    76,    80,    79,    78,
      90,    89,    81,   117,     0,     0,     0,     0,     0,    18,
      21,     0,     0,   120,     0,     0,     0,     0,   107,    62,
       0,     0,     0,     0,     0,     0,     0,    77,    76,    80,
      79,    78,    17,     0,   124,    54,    54,     0,   106,   108,
       0,    60,     0,    57,     0,   127,    46,     0,    24,     0,
      54,    48,    54,    56,     0,     0,     0,    43,     0,     2,
     126,   129,     0,    22,     0,     0,     0,    53,     0,    47,
      55,   110,     0,    61,     0,     0,   128,   141,   130,    23,
       0,     0,     0,     0,   109,    58,     0,   135,   140,   143,
       0,     0,     0,     0,    59,     0,     0,   134,   137,     3,
     142,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    52,     0,     0,   138,   131,   136,     0,   139,
      49,    51,   144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,     3,    92,    77,    13,    93,    78,    15,
      16,    17,   217,    43,    44,    45,    46,    47,    48,   220,
     221,    49,    50,    51,    52,    53,    54,   237,    94,   126,
     127,   128,    56,   134,   209,    57,   242,    58,    59,    60,
      96,    97,   141,   142,   229,   230,   231,   232,    70,   266,
     267,   268,   248,   259,   271,   280
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -112
static const yytype_int16 yypact[] =
{
       0,   -19,    19,   -12,    -6,  -112,     7,     9,    41,   400,
    -112,   184,    12,    22,  -112,  -112,  -112,  -112,   272,  -112,
    -112,  -112,  -112,    14,    17,    27,    31,    45,   142,    36,
      46,    58,    59,  -112,  -112,    68,    68,    95,  -112,  -112,
    -112,   421,    13,   283,  -112,  -112,    67,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,   104,   847,  -112,   142,  -112,
      73,    57,    75,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,    68,    63,    50,  -112,  -112,    96,  -112,    50,    80,
      68,    68,    68,  -112,  -112,    65,   400,    98,    68,     5,
      68,   272,  -112,    15,   120,   847,  -112,  -112,   498,    12,
    -112,    90,  -112,  -112,   142,  -112,    68,    94,  -112,    68,
      68,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,    68,    68,    68,    68,    68,    68,    68,    68,  -112,
    -112,    68,  -112,   872,    84,    92,   142,    68,    74,  -112,
     847,   102,    77,  -112,  -112,   525,   552,   579,   400,   351,
      97,   606,  -112,   107,    57,   633,  -112,  -112,  -112,   105,
     122,   660,  -112,   387,   387,   -29,   -29,  -112,  -112,  -112,
     847,   847,   847,   847,    68,    68,    68,    68,    68,  -112,
    -112,   118,   123,  -112,    68,    36,    36,   124,   144,  -112,
      68,    36,    68,    36,   128,   130,   132,   -24,   -16,   129,
     133,   134,  -112,   142,   847,   103,   103,   152,  -112,  -112,
     687,  -112,   446,  -112,   141,   151,  -112,   -13,  -112,    16,
     112,  -112,   112,  -112,   164,   153,    68,  -112,   183,  -112,
     151,  -112,   147,  -112,   142,   165,   166,  -112,    53,  -112,
    -112,   400,   167,  -112,   714,   170,  -112,     7,  -112,  -112,
      68,    68,   171,   174,  -112,  -112,    36,    95,     7,   400,
     741,   768,    68,    68,  -112,   139,   176,   154,  -112,  -112,
     400,   198,    36,    36,   795,   822,   190,   184,    95,    68,
     178,  -112,  -112,    36,    36,  -112,  -112,  -112,   471,  -112,
    -112,  -112,  -112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,   -28,  -112,     6,    -9,  -112,    -8,   206,  -112,
    -112,  -112,  -112,   -80,   -36,  -112,  -112,  -112,  -112,    24,
    -111,  -112,  -112,  -112,  -112,  -112,  -112,   -25,    -4,  -112,
    -112,  -112,   101,    83,  -112,    28,  -112,  -112,   -18,   150,
       2,     4,  -112,  -112,  -112,  -112,    10,  -112,   -56,  -112,
    -112,   -42,  -112,  -112,  -112,  -112
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -105
static const yytype_int16 yytable[] =
{
      14,    42,    69,    72,    87,    55,   149,   105,    99,     4,
      85,    61,    10,    62,    79,    41,    99,  -100,    99,     5,
      63,    64,    65,    66,    67,   -99,   233,     1,     6,   100,
     235,   236,     7,     8,   103,    42,   123,   124,   125,    55,
     129,   123,   124,   125,    12,    61,    11,    62,   234,   123,
     124,   125,    80,   135,    71,    81,    86,    74,    63,    64,
      65,    66,    67,    37,   138,    82,    83,   252,   253,   143,
     101,    91,    19,    20,    21,    22,    86,   102,    42,   102,
      84,   152,    55,    75,    88,   103,   160,   156,    61,    28,
      62,   154,   137,    86,     8,   223,    89,    90,    99,    91,
      19,    20,    21,   139,    35,   106,    36,   107,   130,   239,
     132,   240,   188,   105,   131,   144,   148,    28,   180,   135,
     136,   150,     8,   157,   159,   179,    37,    38,    39,   162,
      40,   182,    35,  -104,    36,   190,    95,    98,   184,   183,
      42,    42,   192,   194,    55,    55,    19,    20,    21,    22,
      61,    61,    62,    62,    37,    38,    39,   195,    40,   202,
     205,   206,   208,   203,   207,   214,   211,   216,   213,   215,
    -103,   219,   133,    28,  -102,  -101,   227,   140,   228,   270,
     238,   145,   146,   147,   241,   218,   245,   247,   243,   151,
     276,   155,    63,    64,    65,    66,    67,    68,    63,    64,
      65,    66,    67,   250,   251,   254,   255,   161,   257,   262,
     163,   164,   263,   277,   279,   278,   249,   289,    73,   258,
     181,   286,   165,   166,   167,   168,   169,   170,   171,   172,
     222,   264,   173,    42,   105,   224,   287,    55,   133,   153,
     246,     0,     0,    61,     0,    62,     0,   281,   282,   265,
       0,    42,     0,    10,     0,    55,     0,     0,   290,   291,
       0,    61,    42,    62,   269,     0,    55,   285,    69,     0,
     265,     0,    61,     0,    62,   197,   198,   199,   200,   201,
      63,    64,    65,    66,    67,   204,    18,    19,    20,    21,
      22,   210,     0,   212,     0,     0,     0,    23,    24,   104,
      25,    26,    27,     0,    28,    29,    30,    31,    32,     8,
      76,     0,     0,     0,    71,    33,    34,     0,     0,    35,
       0,    36,     0,     0,     0,     0,     0,   244,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,    39,     0,    40,     0,     0,     0,     0,
       0,   260,   261,     0,    18,    19,    20,    21,    22,     0,
       0,     0,     0,   274,   275,    23,    24,     0,    25,    26,
      27,     0,    28,    29,    30,    31,    32,     8,     0,     0,
     288,     0,     0,    33,    34,     0,     0,    35,     0,    36,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,     0,    37,
      38,    39,     0,    40,    23,    24,     0,    25,    26,    27,
       0,    28,    29,    30,    31,    32,     8,     0,     0,     0,
       0,     0,    33,    34,     0,     0,    35,   -96,    36,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,   121,
     122,     0,   123,   124,   125,     0,     0,     0,    37,    38,
      39,     0,    40,     0,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,   226,     0,     0,   -96,     0,   -96,   -96,   -96,   108,
     109,   110,   111,   112,   113,   114,   115,     0,   116,   117,
     118,   119,   120,     0,     0,     0,   292,     0,   121,   122,
       0,   123,   124,   125,   108,   109,   110,   111,   112,   113,
     114,   115,     0,   116,   117,   118,   119,   120,     0,     0,
       0,     0,     0,   121,   122,   158,   123,   124,   125,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
     116,   117,   118,   119,   120,     0,     0,     0,     0,     0,
     121,   122,   185,   123,   124,   125,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,   121,   122,   186,
     123,   124,   125,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,   121,   122,   187,   123,   124,   125,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
       0,   116,   117,   118,   119,   120,     0,     0,     0,     0,
       0,   121,   122,   191,   123,   124,   125,     0,     0,   108,
     109,   110,   111,   112,   113,   114,   115,     0,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,   121,   122,
     193,   123,   124,   125,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,     0,   116,   117,   118,   119,   120,
       0,     0,     0,     0,     0,   121,   122,   196,   123,   124,
     125,     0,     0,   108,   109,   110,   111,   112,   113,   114,
     115,     0,   116,   117,   118,   119,   120,     0,     0,     0,
       0,     0,   121,   122,   225,   123,   124,   125,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,   121,
     122,   256,   123,   124,   125,     0,     0,   108,   109,   110,
     111,   112,   113,   114,   115,     0,   116,   117,   118,   119,
     120,     0,     0,     0,     0,     0,   121,   122,   272,   123,
     124,   125,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,     0,   116,   117,   118,   119,   120,     0,     0,
       0,     0,     0,   121,   122,   273,   123,   124,   125,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   115,     0,
     116,   117,   118,   119,   120,     0,     0,     0,     0,     0,
     121,   122,   283,   123,   124,   125,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,     0,   116,   117,   118,
     119,   120,     0,     0,     0,     0,     0,   121,   122,   284,
     123,   124,   125,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,     0,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,   121,   122,     0,   123,   124,   125,
     108,   109,   110,   111,   112,   113,   114,   115,     0,   116,
     117,   118,   119,   120,     0,     0,     0,     0,     0,   121,
     122,     0,   123,   124,   125,   108,   109,   110,   111,   112,
     113,   114,   115,     0,   116,   117,   118,   119,   120,     0,
       0,     0,     0,     0,   174,   175,     0,   176,   177,   178
};

static const yytype_int16 yycheck[] =
{
       8,     9,    11,    12,    29,     9,    86,    43,     3,    28,
      28,     9,     6,     9,    18,     9,     3,    41,     3,     0,
       8,     9,    10,    11,    12,    41,    39,    27,    40,    37,
      14,    15,    38,    26,    42,    43,    65,    66,    67,    43,
      58,    65,    66,    67,     3,    43,    37,    43,    61,    65,
      66,    67,    38,    71,    42,    38,    40,    35,     8,     9,
      10,    11,    12,    58,    73,    38,    35,    14,    15,    78,
      57,     3,     4,     5,     6,     7,    40,    64,    86,    64,
      35,    89,    86,    61,    38,    93,   104,    91,    86,    21,
      86,    89,    42,    40,    26,   206,    38,    38,     3,     3,
       4,     5,     6,     7,    36,    38,    38,     3,    35,   220,
      35,   222,   148,   149,    57,    35,    51,    21,   136,   137,
      57,    23,    26,     3,    34,    41,    58,    59,    60,    35,
      62,    57,    36,    41,    38,    38,    35,    36,    61,    37,
     148,   149,    35,    38,   148,   149,     4,     5,     6,     7,
     148,   149,   148,   149,    58,    59,    60,    35,    62,    41,
     185,   186,    18,    40,    40,    37,   191,    35,   193,    39,
      41,    68,    71,    21,    41,    41,    35,    76,    27,   259,
      68,    80,    81,    82,    20,   203,     3,    40,    35,    88,
      51,    90,     8,     9,    10,    11,    12,    13,     8,     9,
      10,    11,    12,    38,    38,   241,    39,   106,    38,    38,
     109,   110,    38,    37,    16,    61,   234,    39,    12,   247,
     137,   277,   121,   122,   123,   124,   125,   126,   127,   128,
     206,   256,   131,   241,   270,   207,   278,   241,   137,    89,
     230,    -1,    -1,   241,    -1,   241,    -1,   272,   273,   257,
      -1,   259,    -1,   247,    -1,   259,    -1,    -1,   283,   284,
      -1,   259,   270,   259,   258,    -1,   270,   276,   277,    -1,
     278,    -1,   270,    -1,   270,   174,   175,   176,   177,   178,
       8,     9,    10,    11,    12,   184,     3,     4,     5,     6,
       7,   190,    -1,   192,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      38,    -1,    -1,    -1,    42,    32,    33,    -1,    -1,    36,
      -1,    38,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    62,    -1,    -1,    -1,    -1,
      -1,   250,   251,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,   262,   263,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
     279,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    58,
      59,    60,    -1,    62,    14,    15,    -1,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    36,    16,    38,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    67,    -1,    -1,    -1,    58,    59,
      60,    -1,    62,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    35,    -1,    -1,    63,    -1,    65,    66,    67,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    35,    -1,    62,    63,
      -1,    65,    66,    67,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    62,    63,    37,    65,    66,    67,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      62,    63,    37,    65,    66,    67,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    62,    63,    37,
      65,    66,    67,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    62,    63,    37,    65,    66,    67,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    62,    63,    37,    65,    66,    67,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,    63,
      37,    65,    66,    67,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    62,    63,    37,    65,    66,
      67,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    62,    63,    37,    65,    66,    67,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    37,    65,    66,    67,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    62,    63,    37,    65,
      66,    67,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    62,    63,    37,    65,    66,    67,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      62,    63,    37,    65,    66,    67,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    62,    63,    37,
      65,    66,    67,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,    67,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    67,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    66,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    70,    72,    28,     0,    40,    38,    26,    71,
      73,    37,     3,    75,    76,    78,    79,    80,     3,     4,
       5,     6,     7,    14,    15,    17,    18,    19,    21,    22,
      23,    24,    25,    32,    33,    36,    38,    58,    59,    60,
      62,    73,    76,    82,    83,    84,    85,    86,    87,    90,
      91,    92,    93,    94,    95,    97,   101,   104,   106,   107,
     108,   109,   110,     8,     9,    10,    11,    12,    13,    74,
     117,    42,    74,    77,    35,    61,    38,    74,    77,    97,
      38,    38,    38,    35,    35,   107,    40,    96,    38,    38,
      38,     3,    73,    76,    97,   101,   109,   110,   101,     3,
      76,    57,    64,    76,    16,    83,    38,     3,    43,    44,
      45,    46,    47,    48,    49,    50,    52,    53,    54,    55,
      56,    62,    63,    65,    66,    67,    98,    99,   100,   107,
      35,    57,    35,   101,   102,   107,    57,    42,    74,     7,
     101,   111,   112,    74,    35,   101,   101,   101,    51,    82,
      23,   101,    76,   108,   109,   101,    97,     3,    37,    34,
     107,   101,    35,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,    62,    63,    65,    66,    67,    41,
     107,   102,    57,    37,    61,    37,    37,    37,    83,    39,
      38,    37,    35,    37,    38,    35,    37,   101,   101,   101,
     101,   101,    41,    40,   101,    96,    96,    40,    18,   103,
     101,    96,   101,    96,    37,    39,    35,    81,   107,    68,
      88,    89,    88,    89,   104,    37,    35,    35,    27,   113,
     114,   115,   116,    39,    61,    14,    15,    96,    68,    89,
      89,    20,   105,    35,   101,     3,   115,    40,   121,   107,
      38,    38,    14,    15,    83,    39,    37,    38,    71,   122,
     101,   101,    38,    38,    96,    76,   118,   119,   120,    73,
      82,   123,    37,    37,   101,   101,    51,    37,    61,    16,
     124,    96,    96,    37,    37,    74,   117,   120,   101,    39,
      96,    96,    35
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
#line 1811 "parser.tab.c"
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
#line 309 "parser.y"



void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

int main (int argc, char *argv[]){

	// initialize symbol table
	init_hash_table();
        
        printf("Enter Warden Source File:\n");
        scanf("%123s",str);
        strcat(str,".wd");
        yyin = fopen(str, "r"); 
        if(yyin == NULL){
                printf("File not detected or different file\n");
                return 1;
    }
        
        /* yydebug = 1; */
	/* int flag;
	/* yyin = fopen(argv[1], "r"); */
	/* flag =  */
        yyparse();
	fclose(yyin);
	
	printf("Parsing finished!");
	
	// symbol table dump
	yyout = fopen("symtab_dump.out", "w");
	symtab_dump(yyout);
	fclose(yyout);
	
	return 0;
}

