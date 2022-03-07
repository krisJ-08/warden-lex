
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
#line 1 "parser-warden.y"

	#include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
        #include <process.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int yylineno;
	extern int yylex();
        char str[5];
        char src[20];
        #define YYERROR_VERBOSE 1
        void yyerror(const char *s);

        


/* Line 189 of yacc.c  */
#line 92 "parser-warden.tab.c"

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
#line 20 "parser-warden.y"

        char char_val;
	int int_val;
	double double_val;
	char* str_val;
	list_t* symtab_item;



/* Line 214 of yacc.c  */
#line 206 "parser-warden.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "parser-warden.tab.c"

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
#define YYLAST   867

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNRULES -- Number of states.  */
#define YYNSTATES  277

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
      34,    36,    38,    42,    47,    49,    54,    58,    60,    62,
      67,    75,    79,    81,    84,    86,    88,    90,    92,    95,
      98,   100,   102,   104,   106,   109,   112,   116,   120,   122,
     124,   126,   133,   135,   137,   143,   151,   158,   166,   173,
     181,   188,   191,   192,   200,   207,   213,   222,   224,   225,
     231,   234,   236,   245,   251,   259,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   307,   311,   314,
     317,   320,   323,   327,   330,   334,   338,   342,   345,   347,
     349,   351,   353,   357,   359,   360,   362,   363,   365,   367,
     369,   371,   373,   375,   377,   381,   387,   389,   391,   392,
     396,   398,   399,   401,   402,   405,   407,   410,   417,   419,
     421,   423,   425,   427,   428,   432,   434,   438,   444,   446,
     447,   449,   450,   454
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    72,    39,   124,    81,    16,   108,    67,
      38,   114,    -1,    71,    73,    -1,    73,    -1,    27,    28,
      37,    36,   119,    -1,    26,    75,    67,    -1,     9,    -1,
       8,    -1,    10,    -1,    11,    -1,    12,    -1,     3,    61,
      75,    -1,     3,    76,    61,    75,    -1,    77,    -1,    76,
      41,   106,    40,    -1,    41,   106,    40,    -1,    78,    -1,
      79,    -1,     3,    74,    56,   105,    -1,     3,    76,    74,
      56,    39,    80,    38,    -1,    80,    61,   108,    -1,   108,
      -1,    81,    82,    -1,    82,    -1,    86,    -1,    95,    -1,
      96,    -1,   110,    67,    -1,    19,    67,    -1,    97,    -1,
      91,    -1,    89,    -1,    90,    -1,    18,    67,    -1,   111,
      67,    -1,     3,    99,    67,    -1,    99,     3,    67,    -1,
      83,    -1,    85,    -1,   105,    -1,    73,    56,    34,    37,
      36,    67,    -1,    32,    -1,    33,    -1,    84,    37,   105,
      36,    67,    -1,    14,    37,   105,    36,    98,    87,    88,
      -1,    14,    37,   105,    36,    98,    88,    -1,    87,    68,
      14,    37,   105,    36,    98,    -1,    68,    14,    37,   105,
      36,    98,    -1,    87,    68,    15,    37,   105,    36,    98,
      -1,    68,    15,    37,   105,    36,    98,    -1,    68,    98,
      -1,    -1,    15,    37,   105,    36,    98,    87,    88,    -1,
      15,    37,   105,    36,    98,    88,    -1,    25,    37,   105,
      36,    98,    -1,    17,    37,   105,    36,    39,    93,    94,
      38,    -1,    18,    -1,    -1,    21,   108,    50,    82,    92,
      -1,    20,    82,    -1,    20,    -1,    24,    37,   105,   105,
      67,   105,    36,    98,    -1,    23,    37,   105,    36,    98,
      -1,    22,    98,    23,    37,   105,    36,    67,    -1,    39,
      81,    38,    -1,    57,    -1,    58,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    49,    -1,    55,
      -1,    54,    -1,    53,    -1,    52,    -1,    51,    -1,    48,
      -1,    47,    -1,    63,    -1,    62,    -1,    66,    -1,    65,
      -1,    64,    -1,   105,   104,   105,    -1,   105,   102,   105,
      -1,   105,    60,    -1,     3,    99,    -1,    99,     3,    -1,
       3,     3,    -1,   105,   103,   105,    -1,    35,   105,    -1,
     105,   101,   105,    -1,   105,   100,   105,    -1,    37,   105,
      36,    -1,   107,   108,    -1,   111,    -1,    93,    -1,    73,
      -1,     3,    -1,   105,   104,   105,    -1,   108,    -1,    -1,
      62,    -1,    -1,     4,    -1,     6,    -1,     7,    -1,     5,
      -1,   109,    -1,    30,    -1,    31,    -1,     3,    56,   105,
      -1,     3,    37,   112,    36,    67,    -1,   113,    -1,     7,
      -1,    -1,   113,    61,   105,    -1,   105,    -1,    -1,   115,
      -1,    -1,   115,   116,    -1,   116,    -1,   117,   123,    -1,
      27,     3,    37,   120,    36,   118,    -1,    74,    -1,    13,
      -1,     9,    -1,    13,    -1,   121,    -1,    -1,   121,    61,
     122,    -1,   122,    -1,     3,    50,    74,    -1,    39,   124,
     125,   126,    38,    -1,    71,    -1,    -1,    81,    -1,    -1,
      16,   105,    67,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    62,    63,    66,    69,    74,    75,    76,
      77,    78,    83,    84,    85,    89,    90,    95,    96,    99,
     102,   105,   106,   111,   112,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   135,   138,   139,   142,   148,   149,   152,   153,   154,
     155,   158,   159,   162,   163,   166,   169,   172,   173,   176,
     179,   180,   186,   189,   192,   197,   202,   203,   206,   207,
     208,   209,   212,   213,   216,   217,   218,   219,   220,   223,
     224,   227,   228,   229,   230,   231,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   254,   255,   256,   261,   262,   265,   266,   267,
     268,   269,   272,   273,   278,   284,   287,   288,   289,   292,
     293,   294,   297,   298,   301,   302,   305,   308,   311,   312,
     315,   316,   319,   320,   323,   324,   327,   330,   335,   336,
     339,   340,   343,   344
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
  "var_names", "array", "init", "var_init", "array_init", "array_values",
  "statements", "statement", "input_statement", "outputall",
  "output_statement", "if_statement", "else_if", "optional_else",
  "unless_statement", "do_times_statement", "switch_statement",
  "break_keyword", "switch_expression", "switch_default", "for_statement",
  "while_statement", "do_while_statement", "tail", "incrop", "relop",
  "equop", "assop", "logop", "arthio", "expression", "array_exp", "sign",
  "constant", "bool_const", "assignment", "function_call", "call_params",
  "call_param", "functions_optional", "functions", "function",
  "function_head", "return_type", "main_return_type",
  "parameters_optional", "parameters", "parameter", "function_tail",
  "declarations_optional", "statements_optional", "return_optional", 0
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
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    84,    84,    85,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    91,    92,    92,    93,
      94,    94,    95,    96,    97,    98,    99,    99,   100,   100,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   109,   109,   110,   111,   112,   112,   112,   113,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   123,   124,   124,
     125,   125,   126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     2,     1,     5,     3,     1,     1,     1,
       1,     1,     3,     4,     1,     4,     3,     1,     1,     4,
       7,     3,     1,     2,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     1,
       1,     6,     1,     1,     5,     7,     6,     7,     6,     7,
       6,     2,     0,     7,     6,     5,     8,     1,     0,     5,
       2,     1,     8,     5,     7,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     2,
       2,     2,     3,     2,     3,     3,     3,     2,     1,     1,
       1,     1,     3,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     1,     1,     0,     3,
       1,     0,     1,     0,     2,     1,     2,     6,     1,     1,
       1,     1,     1,     0,     3,     1,     3,     5,     1,     0,
       1,     0,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,   139,     0,     0,   138,
       4,   106,     0,     0,     0,    14,    17,    18,     3,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,   106,   106,    66,    67,   105,   100,   106,    24,
      38,     0,    39,    25,    32,    33,    31,    99,    26,    27,
      30,     0,    40,     0,     0,    98,   130,   131,     5,     8,
       7,     9,    10,    11,   104,     0,     0,     0,     6,    91,
     106,   106,    89,   106,   106,   106,    34,    29,   107,   110,
     108,   109,   112,   113,     0,   111,   106,     0,   106,   106,
     106,   101,   100,     0,    93,    98,     0,     0,     0,    23,
     106,    90,    68,    69,    70,    71,    72,    80,    79,    73,
      78,    77,    76,    75,    74,    88,    82,    81,    85,    84,
      83,   106,   106,   106,   106,   106,    97,    28,    35,     0,
       0,   103,    12,   106,   104,     0,     0,   117,   120,     0,
     116,   114,    36,     0,     0,     0,   106,   106,     0,     0,
     106,     0,    89,    90,    96,     0,     0,     0,    37,    95,
      94,    87,    92,    86,   106,    16,    19,     0,    13,     0,
       0,   106,     0,     0,     0,    58,    65,   106,     0,    82,
       0,     0,     0,     0,     0,   102,    15,     0,   115,   119,
      52,    52,     0,    57,    59,     0,    63,   106,    55,     0,
     123,    44,     0,    22,     0,    52,    46,    52,    54,     0,
       0,     0,    41,     0,     2,   122,   125,     0,    20,     0,
       0,     0,    51,     0,    45,    53,   106,     0,    64,     0,
       0,   124,   139,   126,    21,   106,   106,     0,     0,    60,
      56,    62,   133,   106,     0,     0,   106,   106,     0,     0,
     132,   135,   106,   143,     0,     0,     0,     0,     0,     0,
       0,   106,     0,    48,    50,     0,     0,   136,   129,   128,
     127,   134,     0,   137,    47,    49,   142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,     3,    92,    66,    14,    67,    15,    16,
      17,   202,    38,    39,    40,    41,    42,    43,   205,   206,
      44,    45,    46,   194,    47,   227,    48,    49,    50,   222,
      93,   121,   122,   123,   124,   125,    52,   130,    53,   131,
      85,    54,    95,   139,   140,   214,   215,   216,   217,   270,
      58,   249,   250,   251,   233,    11,   253,   262
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -157
static const yytype_int16 yypact[] =
{
     -16,     2,    31,    -3,     5,  -157,    19,    12,    30,    19,
    -157,   417,    14,   173,   -15,  -157,  -157,  -157,  -157,    72,
      18,    22,    25,    20,    21,    13,     0,    26,    27,    37,
    -157,  -157,     3,     3,  -157,  -157,  -157,    23,   333,  -157,
    -157,    48,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,    87,   418,    13,    24,    28,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,    63,    30,    36,   447,  -157,  -157,
     142,     3,    29,     3,     3,     3,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,    47,  -157,   417,    76,     3,     3,
       3,    74,  -157,    98,   418,  -157,   449,    68,    13,  -157,
       3,    43,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,     3,     3,     3,     3,     3,  -157,  -157,  -157,   418,
      73,  -157,  -157,     3,    63,    30,    56,  -157,   418,    67,
      53,   418,  -157,   474,   499,   524,   417,   361,    78,   549,
     224,   574,  -157,  -157,  -157,    85,    57,   599,  -157,   418,
     418,   418,   418,   418,     3,  -157,   418,    83,  -157,    88,
      59,     3,     0,     0,    95,   117,  -157,     3,     0,  -157,
     774,     0,   102,   101,    77,   418,  -157,    13,  -157,   418,
      80,    80,   125,  -157,  -157,   624,  -157,     3,  -157,    84,
     123,  -157,   -24,  -157,     7,    89,  -157,    89,  -157,   132,
      86,   649,  -157,   152,  -157,   123,  -157,   126,  -157,    13,
     119,   129,  -157,    11,  -157,  -157,   389,   124,  -157,     0,
     139,  -157,    19,  -157,  -157,     3,     3,   154,   155,  -157,
    -157,  -157,   192,   277,   674,   699,     3,     3,   146,   165,
     136,  -157,   305,   186,     0,     0,   724,   749,   178,   161,
     192,     3,   167,  -157,  -157,     0,     0,  -157,  -157,  -157,
    -157,  -157,   800,  -157,  -157,  -157,  -157
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,  -157,    -6,   -65,   -57,  -157,  -157,  -157,
    -157,  -157,   -82,   -28,  -157,  -157,  -157,  -157,    15,  -156,
    -157,  -157,  -157,  -157,    16,  -157,  -157,  -157,  -157,   -14,
     -10,  -157,  -157,  -157,  -157,    81,   -17,    75,  -157,   -12,
    -157,  -157,    -4,  -157,  -157,  -157,  -157,    -2,  -157,  -157,
    -157,  -157,  -157,   -49,  -157,   -20,  -157,  -157
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -142
static const yytype_int16 yytable[] =
{
      10,    51,   136,    18,   147,    37,    91,    55,   132,    72,
      99,     1,    87,    84,   218,    94,    96,    78,    79,    80,
      81,   220,   221,    56,    25,   237,   238,    57,    51,     8,
       4,     5,    37,    13,    55,   208,     6,   219,    32,    86,
      33,   126,     7,    82,    83,     8,    86,   129,    12,   224,
      86,   225,    68,   138,   141,    73,   143,   144,   145,    74,
      34,    35,    75,    88,    89,    36,    91,    78,    79,    80,
      81,   149,   150,   151,    90,    69,    51,    69,   168,    97,
      37,   152,    55,   157,    25,   100,   156,    76,    77,     8,
     101,   127,   133,    82,    83,   128,   142,   146,    32,   148,
      33,   153,   155,   170,   159,   160,   161,   162,   163,    70,
     158,    70,   169,   165,   171,   177,   166,   129,   175,    99,
      34,    35,   182,   186,   183,    36,   188,   187,    71,    34,
      35,    34,    35,   180,   192,   193,    51,    51,   199,   200,
      37,    37,    55,    55,   201,    91,    25,   185,   204,   137,
     213,   212,   226,   228,   189,   230,   235,   223,   190,   191,
     195,   252,   240,    25,   196,   232,   236,   198,     8,    59,
      60,    61,    62,    63,   268,   203,   242,    32,  -118,    33,
     211,    59,    60,    61,    62,    63,    59,    60,    61,    62,
      63,   246,   247,   267,   269,   248,   258,   260,   239,    34,
      35,   259,   261,  -121,    36,   273,   207,   234,   209,   167,
     164,   271,   243,   231,    64,   241,    51,     0,   244,   245,
      37,     0,    55,     0,    99,     0,    10,    91,     0,   256,
     257,     0,     0,    51,    65,     0,     0,    37,     0,    55,
     263,   264,    51,     0,   272,    25,    37,     0,    55,     0,
       8,   274,   275,     0,     0,     0,     0,     0,     0,    32,
       0,    33,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
      19,    34,    35,     0,   115,     0,   179,   117,   118,   119,
     120,    20,    21,  -141,    22,    23,    24,     0,    25,    26,
      27,    28,    29,     8,     0,     0,     0,     0,    19,    30,
      31,     0,    32,     0,    33,  -141,     0,     0,     0,    20,
      21,  -140,    22,    23,    24,     0,    25,    26,    27,    28,
      29,     8,     0,     0,    34,    35,    19,    30,    31,    36,
      32,     0,    33,  -140,     0,     0,     0,    20,    21,    98,
      22,    23,    24,     0,    25,    26,    27,    28,    29,     8,
       0,     0,    34,    35,    19,    30,    31,    36,    32,     0,
      33,     0,     0,     0,     0,    20,    21,     0,    22,    23,
      24,     0,    25,    26,    27,    28,    29,     8,     0,     0,
      34,    35,    19,    30,    31,    36,    32,     0,    33,   176,
       0,     0,     0,    20,    21,     0,    22,    23,    24,     0,
      25,    26,    27,    28,    29,     8,     0,     0,    34,    35,
      19,    30,    31,    36,    32,     0,    33,   -61,     0,     0,
       0,    20,    21,     0,    22,    23,    24,     0,    25,    26,
      27,    28,    29,     8,     0,     0,    34,    35,     0,    30,
      31,    36,    32,     0,    33,    59,    60,    61,    62,    63,
     102,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     111,   112,   113,   114,    34,    35,     0,     0,   115,    36,
     116,   117,   118,   119,   120,   154,     0,     0,   134,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,   135,   115,
     172,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,   173,   116,   117,   118,   119,
     120,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,   115,
     174,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,   178,   116,   117,   118,   119,
     120,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,   115,
     181,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,   184,   116,   117,   118,   119,
     120,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,   115,
     210,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,   229,   116,   117,   118,   119,
     120,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,   115,
     254,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,   255,   116,   117,   118,   119,
     120,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,   115,
     265,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,   266,   116,   117,   118,   119,
     120,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,     0,     0,     0,     0,   115,
       0,   116,   117,   118,   119,   120,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
       0,     0,     0,     0,   115,     0,   116,   117,   118,   119,
     120,   197,   102,   103,   104,   105,   106,   107,   108,   109,
       0,   110,   111,   112,   113,   114,     0,     0,     0,     0,
     115,     0,   116,   117,   118,   119,   120,   276
};

static const yytype_int16 yycheck[] =
{
       6,    11,    67,     9,    86,    11,     3,    11,    65,    19,
      38,    27,    26,    25,    38,    32,    33,     4,     5,     6,
       7,    14,    15,     9,    21,    14,    15,    13,    38,    26,
      28,     0,    38,     3,    38,   191,    39,    61,    35,    39,
      37,    53,    37,    30,    31,    26,    39,    64,    36,   205,
      39,   207,    67,    70,    71,    37,    73,    74,    75,    37,
      57,    58,    37,    37,    37,    62,     3,     4,     5,     6,
       7,    88,    89,    90,    37,     3,    86,     3,   135,    56,
      86,    91,    86,   100,    21,    37,    98,    67,    67,    26,
       3,    67,    56,    30,    31,    67,    67,    50,    35,    23,
      37,     3,    34,    36,   121,   122,   123,   124,   125,    37,
      67,    37,    56,    40,    61,    37,   133,   134,   146,   147,
      57,    58,    37,    40,    67,    62,    67,    39,    56,    57,
      58,    57,    58,   150,    39,    18,   146,   147,    36,    38,
     146,   147,   146,   147,    67,     3,    21,   164,    68,     7,
      27,    67,    20,    67,   171,     3,    37,    68,   172,   173,
     177,   243,    38,    21,   178,    39,    37,   181,    26,     8,
       9,    10,    11,    12,    13,   187,    37,    35,    36,    37,
     197,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    37,    37,   258,   259,     3,    50,    61,   226,    57,
      58,    36,    16,    61,    62,    38,   191,   219,   192,   134,
     129,   260,   232,   215,    41,   229,   226,    -1,   235,   236,
     226,    -1,   226,    -1,   252,    -1,   232,     3,    -1,   246,
     247,    -1,    -1,   243,    61,    -1,    -1,   243,    -1,   243,
     254,   255,   252,    -1,   261,    21,   252,    -1,   252,    -1,
      26,   265,   266,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
       3,    57,    58,    -1,    60,    -1,    62,    63,    64,    65,
      66,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,     3,    32,
      33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    -1,    -1,    57,    58,     3,    32,    33,    62,
      35,    -1,    37,    38,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    57,    58,     3,    32,    33,    62,    35,    -1,
      37,    -1,    -1,    -1,    -1,    14,    15,    -1,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    -1,    -1,
      57,    58,     3,    32,    33,    62,    35,    -1,    37,    38,
      -1,    -1,    -1,    14,    15,    -1,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    -1,    57,    58,
       3,    32,    33,    62,    35,    -1,    37,    38,    -1,    -1,
      -1,    14,    15,    -1,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    57,    58,    -1,    32,
      33,    62,    35,    -1,    37,     8,     9,    10,    11,    12,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    57,    58,    -1,    -1,    60,    62,
      62,    63,    64,    65,    66,    36,    -1,    -1,    41,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    61,    60,
      36,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    36,    62,    63,    64,    65,
      66,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      36,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    36,    62,    63,    64,    65,
      66,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      36,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    36,    62,    63,    64,    65,
      66,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      36,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    36,    62,    63,    64,    65,
      66,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      36,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    36,    62,    63,    64,    65,
      66,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      36,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    36,    62,    63,    64,    65,
      66,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      -1,    62,    63,    64,    65,    66,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    70,    72,    28,     0,    39,    37,    26,    71,
      73,   124,    36,     3,    75,    77,    78,    79,    73,     3,
      14,    15,    17,    18,    19,    21,    22,    23,    24,    25,
      32,    33,    35,    37,    57,    58,    62,    73,    81,    82,
      83,    84,    85,    86,    89,    90,    91,    93,    95,    96,
      97,    99,   105,   107,   110,   111,     9,    13,   119,     8,
       9,    10,    11,    12,    41,    61,    74,    76,    67,     3,
      37,    56,    99,    37,    37,    37,    67,    67,     4,     5,
       6,     7,    30,    31,   108,   109,    39,    98,    37,    37,
      37,     3,    73,    99,   105,   111,   105,    56,    16,    82,
      37,     3,    42,    43,    44,    45,    46,    47,    48,    49,
      51,    52,    53,    54,    55,    60,    62,    63,    64,    65,
      66,   100,   101,   102,   103,   104,   108,    67,    67,   105,
     106,   108,    75,    56,    41,    61,    74,     7,   105,   112,
     113,   105,    67,   105,   105,   105,    50,    81,    23,   105,
     105,   105,    99,     3,    36,    34,   108,   105,    67,   105,
     105,   105,   105,   105,   104,    40,   105,   106,    75,    56,
      36,    61,    36,    36,    36,    82,    38,    37,    36,    62,
     105,    36,    37,    67,    36,   105,    40,    39,    67,   105,
      98,    98,    39,    18,    92,   105,    98,    67,    98,    36,
      38,    67,    80,   108,    68,    87,    88,    87,    88,    93,
      36,   105,    67,    27,   114,   115,   116,   117,    38,    61,
      14,    15,    98,    68,    88,    88,    20,    94,    67,    36,
       3,   116,    39,   123,   108,    37,    37,    14,    15,    82,
      38,    98,    37,   124,   105,   105,    37,    37,     3,   120,
     121,   122,    81,   125,    36,    36,   105,   105,    50,    36,
      61,    16,   126,    98,    98,    36,    36,    74,    13,    74,
     118,   122,   105,    38,    98,    98,    67
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
#line 1793 "parser-warden.tab.c"
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
#line 348 "parser-warden.y"



void yyerror(const char *str)
{
    fprintf(stderr,"error: %s in line %d\n", str, yylineno);
    fprintf(stderr,"^\n");
    exit(1);
}

int main (int argc, char *argv[]){

	init_hash_table();
        
        printf("Enter Warden Source File with 'ward [sourcefile.wd]':\n");
        scanf("%s", str);
        scanf("%s", src);
        
	char search[] = "ward";
	char *ptr = strstr(str, search);

	if (ptr != NULL)
	{
		yyin = fopen(src, "r"); 
                if(yyin == NULL){
                        printf("File not detected or different file\n");
                        return 1;
                }
	}
	else
	{
		printf("\nPlease include \"ward\" then source file!\n\n");
                return 1;
	}


        yyparse();
	fclose(yyin);
	
	printf("\n\nParsing finished! No errors found!\n\n");
	
        system("pause");
        return 0;
}
