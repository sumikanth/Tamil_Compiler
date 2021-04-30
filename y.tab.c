/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "errorreport.y" /* yacc.c:339  */

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include "lex.yy.c"
int x=0;
int y=0;
int o=0;
int in=0;
int errs=0;
int errlines[50];
int yydebug=1;
char hu[70][70];
int yyerror(char*);
struct symbtable{
char name[20];
}sym[50];
struct store{
char name[20];
}ops[50];
char instrlist[40][50];
void backpatch(int*list,int ins);
void copy(int*a,int*b);
void merge(int*a,int*b,int*c);

#line 93 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    pl = 258,
    allathu = 259,
    orop = 260,
    mul = 261,
    matrum = 262,
    andop = 263,
    clbr = 264,
    perc = 265,
    illati = 266,
    not = 267,
    opbr = 268,
    puthutype = 269,
    whnum = 270,
    frac = 271,
    bigfrac = 272,
    word = 273,
    eppo = 274,
    appo = 275,
    eppovarilum = 276,
    id = 277,
    term = 278,
    eq = 279,
    unmai = 280,
    poi = 281,
    relop = 282,
    sp = 283,
    enral = 284,
    opcbr = 285,
    clcbr = 286,
    num = 287,
    eppothume = 288,
    irrukuna = 289
  };
#endif
/* Tokens.  */
#define pl 258
#define allathu 259
#define orop 260
#define mul 261
#define matrum 262
#define andop 263
#define clbr 264
#define perc 265
#define illati 266
#define not 267
#define opbr 268
#define puthutype 269
#define whnum 270
#define frac 271
#define bigfrac 272
#define word 273
#define eppo 274
#define appo 275
#define eppovarilum 276
#define id 277
#define term 278
#define eq 279
#define unmai 280
#define poi 281
#define relop 282
#define sp 283
#define enral 284
#define opcbr 285
#define clcbr 286
#define num 287
#define eppothume 288
#define irrukuna 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "errorreport.y" /* yacc.c:355  */

struct s1{char* code;int nextlist[40];} statement;
struct s2{char* code; char* addr;}expression ;
struct s3{int truelist[40]; int falselist[40];}boole ;
struct s4{int truelist[40]; int falselist[40]; char* tempval;}numb ;
struct s5{int instr;}inst;
struct s6{char* op;}rel;
struct s7{char* nulltype;}type;
char* chary;

#line 209 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 226 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  33
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  92

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    60,    61,    62,    65,    66,    67,    68,
      70,    87,    93,    98,   103,   107,   111,   117,   132,   163,
     164,   168,   176,   187,   195,   213,   223,   226,   234,   240,
     244,   248,   269,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "pl", "allathu", "orop", "mul", "matrum",
  "andop", "clbr", "perc", "illati", "not", "opbr", "puthutype", "whnum",
  "frac", "bigfrac", "word", "eppo", "appo", "eppovarilum", "id", "term",
  "eq", "unmai", "poi", "relop", "sp", "enral", "opcbr", "clcbr", "num",
  "eppothume", "irrukuna", "$accept", "K", "F", "REL", "T", "P", "B",
  "NUM", "M", "S", "N", "L", "E", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      39,    -3,   -70,   -70,     0,    39,   -70,    15,     7,    -5,
     -70,    -1,    83,     4,    83,   -70,   -10,    39,   -70,   -70,
      28,   -70,    24,    10,    10,    10,    83,    83,   -70,   -70,
      26,     6,    83,    54,   -70,    39,   -70,   -70,   -70,   -70,
     -70,    36,    47,   -70,    45,   -70,    19,   -70,    92,   -70,
     -70,   -70,   -70,    10,    98,   -70,   -70,    10,    18,    27,
     -70,   -70,    83,    83,    39,   107,   -70,    39,    45,    56,
      39,    48,   -70,   -70,    39,    55,   -70,    40,   -70,   -70,
     -70,    43,   -70,   -70,    39,    39,   -70,   -70,    51,   -70,
     -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      19,     0,    19,    33,     0,    19,    19,     0,    19,     0,
       3,     0,     0,     0,     0,    30,    19,    19,     1,     4,
       0,    18,     0,     0,     0,     0,     0,     0,    11,    16,
       0,     0,     0,     0,    26,    19,    23,     6,     7,     8,
       9,     0,     0,    19,    32,    31,     0,    14,     0,    19,
      19,    19,     5,     0,     0,    19,    29,     0,     0,     0,
      27,    15,     0,     0,    19,    17,    19,    19,    10,     0,
      19,    13,    12,    20,    19,     0,    19,    19,    19,    28,
      19,     0,    19,    22,    19,    19,    24,    19,    19,    21,
      19,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,   -70,    -8,   -70,    -2,     3,
     -70,   -69,    67
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,    53,    41,    42,    30,    22,     9,    15,
      80,    16,    11
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      13,    77,    23,    10,    17,    24,    33,    -2,    20,    23,
      12,    19,    24,    14,    35,    18,    88,    32,    47,    48,
      36,    34,    23,    25,    54,    24,     1,    21,     2,     3,
      43,    49,     3,    52,    50,    51,     4,     5,    56,    57,
       6,    59,    60,    37,    38,    39,    40,    62,    63,    64,
      58,    24,    69,    67,    71,    72,    50,    70,     1,    49,
       2,     3,    50,    55,    74,    76,    79,    73,     4,     5,
      75,    82,     6,    85,    81,    35,    83,    78,    84,    31,
      86,    31,    90,     0,     0,    89,    35,    87,    91,     0,
      44,    45,    46,    31,    31,    26,    27,    49,     0,    31,
      50,    61,     0,    49,     0,     3,    50,    66,    28,    29,
      23,     0,     0,    24,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,    68,     0,     0,     0,     0,    31,
      31
};

static const yytype_int8 yycheck[] =
{
       2,    70,     3,     0,     6,     6,    14,     0,    13,     3,
      13,     8,     6,    13,    16,     0,    85,    13,    26,    27,
      17,    31,     3,    24,    32,     6,    19,    32,    21,    22,
       6,     5,    22,    27,     8,     9,    29,    30,    35,     3,
      33,    43,    23,    15,    16,    17,    18,    49,    50,    51,
       3,     6,    34,    55,    62,    63,     8,    30,    19,     5,
      21,    22,     8,     9,    66,     9,    11,    64,    29,    30,
      67,    31,    33,    30,    76,    77,    78,    74,    80,    12,
      82,    14,    31,    -1,    -1,    87,    88,    84,    90,    -1,
      23,    24,    25,    26,    27,    12,    13,     5,    -1,    32,
       8,     9,    -1,     5,    -1,    22,     8,     9,    25,    26,
       3,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    21,    22,    29,    30,    33,    36,    37,    43,
      44,    47,    13,    43,    13,    44,    46,    43,     0,    44,
      13,    32,    42,     3,     6,    24,    12,    13,    25,    26,
      41,    47,    13,    41,    31,    43,    44,    15,    16,    17,
      18,    39,    40,     6,    47,    47,    47,    41,    41,     5,
       8,     9,    27,    38,    41,     9,    44,     3,     3,    43,
      23,     9,    43,    43,    43,    47,     9,    43,    47,    34,
      30,    41,    41,    44,    43,    44,     9,    46,    44,    11,
      45,    43,    31,    43,    43,    30,    43,    44,    46,    43,
      31,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    39,    39,    39,    39,
      40,    41,    41,    41,    41,    41,    41,    41,    42,    43,
      44,    44,    44,    44,    44,    44,    44,    44,    45,    46,
      46,    47,    47,    47
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     2,     3,     1,     3,     1,     0,
       6,    10,     8,     3,     8,    11,     3,     4,     1,     3,
       1,     3,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 52 "errorreport.y" /* yacc.c:1646  */
    {
int i=0;
while(i<in)
{
fprintf(yyout,"%d %s \n",i,instrlist[i]);
i++;
}
}
#line 1372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "errorreport.y" /* yacc.c:1646  */
    {strcpy(ops[o].name,yytext);
(yyval.rel).op=ops[o].name;
o++;}
#line 1380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 65 "errorreport.y" /* yacc.c:1646  */
    { (yyval.type).nulltype="0";}
#line 1386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 66 "errorreport.y" /* yacc.c:1646  */
    {(yyval.type).nulltype="0.0";}
#line 1392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "errorreport.y" /* yacc.c:1646  */
    {(yyval.type).nulltype="0.000";}
#line 1398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "errorreport.y" /* yacc.c:1646  */
    {(yyval.type).nulltype="NULL";}
#line 1404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "errorreport.y" /* yacc.c:1646  */
    {                
char tempo[60];
strcpy(tempo,"if ");
strcat(tempo,(yyvsp[0].expression).addr);
strcat(tempo," !=");
strcat(tempo,(yyvsp[-2].type).nulltype);
strcat(tempo," goto ");
(yyval.numb).truelist[0]=in;
(yyval.numb).truelist[1]=0;
strcpy(instrlist[in++],tempo);
char hempo[60];
strcpy(hempo,"goto ");
(yyval.numb).falselist[0]=in;
(yyval.numb).falselist[1]=0;
strcpy(instrlist[in++],hempo);
}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "errorreport.y" /* yacc.c:1646  */
    {(yyval.boole).truelist[0]=in; 
(yyval.boole).truelist[1]=0;
char tempo[20]; 
strcpy(tempo,"goto");
strcpy(instrlist[in++],tempo);
}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "errorreport.y" /* yacc.c:1646  */
    {
backpatch((yyvsp[-3].boole).truelist,(yyvsp[-1].inst).instr);
merge((yyvsp[-3].boole).falselist,(yyvsp[0].boole).falselist,(yyval.boole).falselist);
copy((yyval.boole).truelist,(yyvsp[0].boole).truelist);
}
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "errorreport.y" /* yacc.c:1646  */
    {
backpatch((yyvsp[-3].boole).falselist,(yyvsp[-1].inst).instr);
merge((yyvsp[-3].boole).truelist,(yyvsp[0].boole).truelist,(yyval.boole).truelist);
copy((yyval.boole).falselist,(yyvsp[0].boole).falselist);
}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "errorreport.y" /* yacc.c:1646  */
    {
copy((yyval.boole).truelist,(yyvsp[0].boole).falselist);
copy((yyval.boole).falselist,(yyvsp[0].boole).truelist);
}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 107 "errorreport.y" /* yacc.c:1646  */
    {
copy((yyval.boole).truelist,(yyvsp[-1].boole).truelist);
copy((yyval.boole).falselist,(yyvsp[-1].boole).falselist);
}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 111 "errorreport.y" /* yacc.c:1646  */
    {(yyval.boole).falselist[0]=in;
(yyval.boole).falselist[1]=0; 
char tempo[20]; 
strcpy(tempo,"goto");
strcpy(instrlist[in++],tempo);
}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "errorreport.y" /* yacc.c:1646  */
    {(yyval.boole).truelist[0]=in;
(yyval.boole).truelist[1]=0;
(yyval.boole).falselist[0]=in+1;
(yyval.boole).falselist[1]=0;
char tempo[100];
strcpy(tempo, "if ");
strcat(tempo, (yyvsp[-2].expression).addr);
strcat(tempo, (yyvsp[-1].rel).op);
strcat(tempo, (yyvsp[0].expression).addr);
strcat(tempo, " ");
strcat(tempo, "goto ");
strcpy(instrlist[in++],tempo);
strcpy(tempo, "goto ");
strcpy(instrlist[in++],tempo);
}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "errorreport.y" /* yacc.c:1646  */
    {
strcpy(sym[y].name,yytext);
y++;
char temp[50];
strcpy(temp,"t");
char inte[10];
char intec[10];
int ts=x;
snprintf(inte,10,"%d",ts);
strcat(temp,inte);
strcpy(sym[y].name,inte);
(yyval.numb).tempval=sym[y].name;
x++; 
strcat(temp,"=");
strcat(temp,sym[y-1].name); 
y++;
strcpy(instrlist[in++],temp);
char tempo[60];
strcpy(tempo,"if t");
strcat(tempo,(yyval.numb).tempval);
strcat(tempo,">0 goto ");
(yyval.numb).truelist[0]=in;
(yyval.numb).truelist[1]=0;
strcpy(instrlist[in++],tempo);
char hempo[60];
strcpy(hempo,"goto ");
(yyval.numb).falselist[0]=in;
(yyval.numb).falselist[1]=0;
strcpy(instrlist[in++],hempo);
}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "errorreport.y" /* yacc.c:1646  */
    {(yyval.inst).instr=in;}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 164 "errorreport.y" /* yacc.c:1646  */
    {
backpatch((yyvsp[-3].boole).truelist,(yyvsp[-1].inst).instr);
merge((yyvsp[-3].boole).falselist,(yyvsp[0].statement).nextlist,(yyval.statement).nextlist);
}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 168 "errorreport.y" /* yacc.c:1646  */
    {
backpatch((yyvsp[-7].boole).truelist,(yyvsp[-5].inst).instr);
backpatch((yyvsp[-7].boole).falselist,(yyvsp[-2].inst).instr);
int temp[100];
merge((yyvsp[-4].statement).nextlist,(yyvsp[-3].statement).nextlist,temp);
merge(temp,(yyvsp[-1].statement).nextlist,(yyval.statement).nextlist);
backpatch((yyvsp[-3].statement).nextlist,(yyvsp[0].inst).instr);
}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 176 "errorreport.y" /* yacc.c:1646  */
    {
backpatch((yyvsp[-1].statement).nextlist,(yyvsp[-6].inst).instr);
backpatch((yyvsp[-4].boole).truelist,(yyvsp[-2].inst).instr);
backpatch((yyvsp[-4].boole).falselist,(yyvsp[0].inst).instr+1);
char temp[20];
strcpy(temp,"goto ");
char inte[10];
snprintf(inte,10,"%d",(yyvsp[-6].inst).instr);
strcat(temp,inte);
strcpy(instrlist[in++],temp);
}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 187 "errorreport.y" /* yacc.c:1646  */
    {
char temp[20];
strcpy(temp,"goto ");
char inte[10];
snprintf(inte,10,"%d",(yyvsp[-1].inst).instr);
strcat(temp,inte);
strcpy(instrlist[in++],temp);
}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "errorreport.y" /* yacc.c:1646  */
    {
backpatch((yyvsp[-6].numb).truelist,(yyvsp[-4].inst).instr);
char tempo[30];
strcpy(tempo,"t");
strcat(tempo,(yyvsp[-6].numb).tempval);
strcat(tempo,"=");
strcat(tempo,"t");
strcat(tempo,(yyvsp[-6].numb).tempval);
strcat(tempo,"-1");
strcpy(instrlist[in++],tempo);
char hempo[30];
strcpy(hempo,"goto ");
char inte[10];
snprintf(inte,10,"%d",(yyvsp[-7].inst).instr+1);
strcat(hempo,inte);
strcpy(instrlist[in++],hempo);
backpatch((yyvsp[-6].numb).falselist,(yyvsp[0].inst).instr+2);
}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 213 "errorreport.y" /* yacc.c:1646  */
    { //(wholenum+x+irruku na){f=f+g;}
backpatch((yyvsp[-8].numb).truelist,(yyvsp[-4].inst).instr);
char hempo[30];
strcpy(hempo,"goto ");
char inte[10];
snprintf(inte,10,"%d",(yyvsp[-10].inst).instr);
strcat(hempo,inte);
strcpy(instrlist[in++],hempo);
backpatch((yyvsp[-8].numb).falselist,(yyvsp[0].inst).instr+1);
}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 223 "errorreport.y" /* yacc.c:1646  */
    {
copy((yyval.statement).nextlist,(yyvsp[-1].statement).nextlist);
}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 226 "errorreport.y" /* yacc.c:1646  */
    {
char tempo[20];
strcpy(tempo,(yyvsp[-3].expression).addr);
strcat(tempo,"=");
strcat(tempo,(yyvsp[-1].expression).addr);
strcpy(instrlist[in++],tempo);
x++;
(yyval.statement).nextlist[0]=in;(yyval.statement).nextlist[1]=0;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 234 "errorreport.y" /* yacc.c:1646  */
    {(yyval.statement).nextlist[0]=in;
(yyval.statement).nextlist[1]=0;
char gen[100];
strcpy(gen,"goto ");
strcpy(instrlist[in++],gen);
}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 240 "errorreport.y" /* yacc.c:1646  */
    {
//backpatch($1.nextlist,$2.instr);
copy((yyval.statement).nextlist,(yyvsp[0].statement).nextlist);
}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 244 "errorreport.y" /* yacc.c:1646  */
    {
copy((yyval.statement).nextlist,(yyvsp[0].statement).nextlist);
}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 248 "errorreport.y" /* yacc.c:1646  */
    {
(yyval.expression).addr="t";
char temp[100];
strcpy(temp,(yyval.expression).addr);
char inte[10];
snprintf(inte,10,"%d",x);
strcat(temp,inte);
(yyval.expression).addr=temp;
char s[100];
strcpy(s,(yyvsp[-2].expression).code);
strcpy(s,(yyvsp[0].expression).code);
char gen[100];
strcpy(gen,(yyval.expression).addr);
strcat(gen,"=");
strcat(gen,(yyvsp[-2].expression).addr);
strcat(gen,"*");
strcat(gen,(yyvsp[0].expression).addr);
strcat(s,gen);
(yyval.expression).code=s;
strcpy(instrlist[in++],s);
}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 269 "errorreport.y" /* yacc.c:1646  */
    {
(yyval.expression).addr="t";
char temp[100];
strcpy(temp,(yyval.expression).addr);
char inte[10];
snprintf(inte,10,"%d",x);
strcat(temp,inte);
(yyval.expression).addr=temp;
char s[100];
strcpy(s,(yyvsp[-2].expression).code);
strcpy(s,(yyvsp[0].expression).code);
char gen[100];
strcpy(gen,(yyval.expression).addr);
strcat(gen,"=");
strcat(gen,(yyvsp[-2].expression).addr);
strcat(gen,"+");
strcat(gen,(yyvsp[0].expression).addr);
strcat(s,gen);
(yyval.expression).code=s;
strcpy(instrlist[in++],s);
}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 290 "errorreport.y" /* yacc.c:1646  */
    {
strcpy(sym[y].name,yytext);
(yyval.expression).addr=sym[y].name;
(yyval.expression).code="";
y++;
}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1751 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 296 "errorreport.y" /* yacc.c:1906  */

void backpatch(int*list,int ins){
int i=0;
char inte[10];
snprintf(inte,10,"%d",ins);
do{
strcat(instrlist[list[i]],inte);
i++;
}while(list[i]!=0);
}
void copy(int*a, int*b)
{
int l=0;
for(;b[l]!=0;l++)
a[l]=b[l];
a[l]=0;
}
void merge(int*a,int*b,int*c)
{
int j=0,k=0;
for(;a[j]!=0;j++)
c[j]=a[j];
for(k=j;b[k-j]!=0;k++)
c[k]=b[k-j];
c[k]=0;
}
int main()
{
extern FILE *yyin, *yyout;
yyin=fopen("inp1.txt","r");
yyout=fopen("outp.c","w"); 
yyparse();
FILE* inptr=fopen("inp1.txt","r");
FILE* errfile=fopen("errfile.c","a");
int far=1;
char chunk[128]; 
int counter=0;
while(fgets(chunk, sizeof(chunk), inptr) != NULL) {
fputs(chunk, errfile);
if(far==errlines[counter])
{
fputs(hu[counter],errfile);  
counter++;
}
far++;
}
}
int yyerror(char*s)
{
printf("Error in line %d %s\n",countnl,s);
errlines[errs]=countnl;
printf("Error at %s\n",yytext);
strcpy(hu[errs],"/*change the line or term before ");
strcat(hu[errs],yytext);
strcat(hu[errs],"*/");
errs++;
yyparse();
}



