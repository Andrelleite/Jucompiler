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
#line 8 "jucompiler.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"
    #include "SyntaxTree.h"
    #include "SymTable.h"

    int yylex(void);
    void yyerror(char *s);

    extern char *yytext;
    extern char *strlit;
    extern int yyleng;
    extern int lineCounter;
    extern int columnCounter;
    extern int fatalities;
    extern int initString;

    Node *root;
    Node *temp;
    Node *temp2;
    Node *temp3;
    Node *temp4;
    Node *topNode;

    int assignError = 0;
    int blocks = 0;
    int canBlock = 0; /* 1 or 0 if used in a if else while statement*/
    char *typeAssign;
    char *blockassign;

#line 99 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    BOOL = 258,
    CLASS = 259,
    DOTLENGTH = 260,
    DOUBLE = 261,
    ELSE = 262,
    IF = 263,
    INT = 264,
    PRINT = 265,
    PUBLIC = 266,
    RETURN = 267,
    STATIC = 268,
    STRING = 269,
    VOID = 270,
    WHILE = 271,
    SEMICOLON = 272,
    BLANKID = 273,
    AND = 274,
    STAR = 275,
    ARROW = 276,
    COMMA = 277,
    DIV = 278,
    EQ = 279,
    GE = 280,
    GT = 281,
    LBRACE = 282,
    LE = 283,
    LPAR = 284,
    LSQ = 285,
    LT = 286,
    MINUS = 287,
    MOD = 288,
    NE = 289,
    NOT = 290,
    OR = 291,
    PLUS = 292,
    RBRACE = 293,
    RPAR = 294,
    RSQ = 295,
    XOR = 296,
    LSHIFT = 297,
    RSHIFT = 298,
    ID = 299,
    RESERVED = 300,
    INTLIT = 301,
    REALLIT = 302,
    STRLIT = 303,
    BOOLLIT = 304,
    UNARY = 305,
    ASSIGN = 306,
    PARSEINT = 307
  };
#endif
/* Tokens.  */
#define BOOL 258
#define CLASS 259
#define DOTLENGTH 260
#define DOUBLE 261
#define ELSE 262
#define IF 263
#define INT 264
#define PRINT 265
#define PUBLIC 266
#define RETURN 267
#define STATIC 268
#define STRING 269
#define VOID 270
#define WHILE 271
#define SEMICOLON 272
#define BLANKID 273
#define AND 274
#define STAR 275
#define ARROW 276
#define COMMA 277
#define DIV 278
#define EQ 279
#define GE 280
#define GT 281
#define LBRACE 282
#define LE 283
#define LPAR 284
#define LSQ 285
#define LT 286
#define MINUS 287
#define MOD 288
#define NE 289
#define NOT 290
#define OR 291
#define PLUS 292
#define RBRACE 293
#define RPAR 294
#define RSQ 295
#define XOR 296
#define LSHIFT 297
#define RSHIFT 298
#define ID 299
#define RESERVED 300
#define INTLIT 301
#define REALLIT 302
#define STRLIT 303
#define BOOLLIT 304
#define UNARY 305
#define ASSIGN 306
#define PARSEINT 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "jucompiler.y" /* yacc.c:355  */

    int col;
    struct uni* loki;
    struct node* newNode;

#line 249 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    74,    74,    77,    78,    79,    80,    84,    87,    88,
      91,    92,    95,    96,    97,   100,   101,   102,   103,   106,
     107,   110,   111,   115,   118,   119,   120,   123,   126,   127,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   142,
     143,   146,   147,   150,   151,   152,   153,   156,   157,   160,
     161,   164,   165,   168,   171,   172,   175,   176,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "CLASS", "DOTLENGTH", "DOUBLE",
  "ELSE", "IF", "INT", "PRINT", "PUBLIC", "RETURN", "STATIC", "STRING",
  "VOID", "WHILE", "SEMICOLON", "BLANKID", "AND", "STAR", "ARROW", "COMMA",
  "DIV", "EQ", "GE", "GT", "LBRACE", "LE", "LPAR", "LSQ", "LT", "MINUS",
  "MOD", "NE", "NOT", "OR", "PLUS", "RBRACE", "RPAR", "RSQ", "XOR",
  "LSHIFT", "RSHIFT", "ID", "RESERVED", "INTLIT", "REALLIT", "STRLIT",
  "BOOLLIT", "UNARY", "ASSIGN", "PARSEINT", "$accept", "Program",
  "Declarations", "MethodDecl", "FieldDecl", "CommaIDaux2", "Type",
  "MethodHeader", "FormalParams", "ParametersAux", "MethodBody",
  "MethodAux", "VarDecl", "CommaIDaux", "Statement", "StatementAux1",
  "StatementAux2", "StatementAux3", "MethodInvocation", "MethodInvocAux",
  "MethodInvocAux2", "Assignment", "ParseArgs", "Expr", "Expr1", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -37

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-37)))

#define YYTABLE_NINF -51

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    -9,    43,    30,   -37,    22,    45,    56,    22,    25,
      22,    22,   -37,   127,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,    42,    44,    60,    61,   -19,   144,   -37,    50,    48,
      52,    76,    78,    67,    68,   313,    71,    97,    -4,    72,
      59,    80,   144,   144,    93,   -37,   -37,   -37,    87,   -37,
      75,    81,    99,   -37,    89,   -37,   -37,   313,   179,   158,
     326,   326,   326,     0,   -37,   -37,   -37,   114,   -37,   -37,
     -37,   -37,   210,   313,    97,    94,   137,   313,     5,   115,
     -37,   -37,   -37,   -37,   100,   117,   -37,   -37,   -37,   104,
     112,   116,   118,   119,     7,   -37,   -37,   -37,   -37,   -37,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   123,   -37,   -37,   124,
     125,   143,   -37,   128,   138,   126,   156,   131,    31,   -37,
     205,   160,   161,   -37,   -37,   259,   -37,   -37,   304,   344,
     344,   344,   344,    21,   -37,   304,   235,    21,   283,    79,
      79,   205,   -37,   -37,   313,   -37,   -37,   313,   115,   -37,
     -37,   135,   173,   -37,   -37,   -37,   143,   145,   -37,   117,
     205,   -37,   152,   -37,   -37,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     5,     2,     3,     4,    12,    14,
      13,     0,     0,     0,     0,    11,     0,     7,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,     0,    17,
       0,     0,    11,    18,     0,     8,    38,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,     0,    78,    57,
      79,    41,    56,     0,     0,     0,     0,     0,     0,    29,
      23,    25,    24,    35,     0,    22,    16,    10,    15,     0,
       0,     0,     0,     0,    81,    74,    75,    76,    80,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    30,     0,
       0,    52,    53,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,    85,    77,    58,    61,    62,    68,    70,
      71,    72,    73,    67,    63,    69,    59,    66,    60,    64,
      65,     0,    48,    47,     0,    49,    55,     0,    29,    27,
      20,     0,    31,    36,    37,    33,    52,     0,    28,    22,
       0,    51,     0,    21,    32,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,    57,   -37,   -37,   140,    -6,   -37,   164,    28,
     -37,   -34,   -37,    40,   -36,   129,   -37,   -37,   -26,   -37,
      33,   -24,   -22,   -31,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    31,    40,    23,    51,   129,
      27,    41,    42,   126,    43,    75,    67,    44,    68,   120,
     155,    69,    70,    71,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    74,    46,    29,    47,    98,   123,    22,    81,    82,
      30,    45,    98,    46,     1,    47,    45,    45,    46,    46,
      47,    47,    50,     6,    50,    76,    89,    91,    93,    76,
      95,    96,    97,     7,    18,     3,    76,    19,    74,     8,
      20,   101,   116,     4,   102,   121,   122,    77,    45,   124,
      46,    77,    47,    18,   109,    18,    19,     5,    19,    20,
      -6,    20,    12,    15,    48,    14,    48,    16,    17,    13,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    24,    26,    25,    49,
      28,    53,    52,    55,   162,    56,    57,    58,    32,   101,
      73,    78,   102,    79,    45,    33,    46,    34,    47,    35,
      83,   108,   109,    36,   -46,   165,   112,    84,    80,    85,
      86,    29,   161,   166,    37,    45,   167,    46,    88,    47,
      18,    99,   118,    19,   174,   -40,    20,   125,   119,   128,
     127,    38,    21,   130,    45,    32,    46,    18,    47,    39,
      19,   131,    33,    20,    34,   132,    35,   133,   134,    92,
      36,   -46,   151,   152,   153,   154,    59,   156,   157,    60,
     158,    37,    61,   159,    62,   160,   -50,   163,   164,   169,
     170,    63,   -26,    64,    65,   172,    66,    59,    38,    39,
      60,   175,    87,    61,    54,    62,    39,   173,   168,   171,
       0,     0,    63,   117,    64,    65,    32,    66,    59,     0,
      39,    60,     0,    33,    61,    34,    62,    35,     0,     0,
       0,    36,   -46,    63,     0,    64,    65,    90,    66,   100,
     101,    39,    37,   102,   103,   104,   105,     0,   106,     0,
       0,   107,   108,   109,   110,     0,   111,   112,     0,    38,
       0,   113,   114,   115,   100,   101,     0,    39,   102,   103,
     104,   105,     0,   106,     0,     0,   107,   108,   109,   110,
       0,     0,   112,     0,     0,     0,   113,   114,   115,   101,
       0,     0,   102,   103,   104,   105,     0,   106,     0,     0,
     107,   108,   109,   110,     0,     0,   112,     0,     0,     0,
     113,   114,   115,   101,     0,     0,   102,   103,   104,   105,
       0,   106,     0,     0,   107,   108,   109,   110,     0,     0,
     112,     0,     0,     0,   101,   114,   115,   102,     0,   104,
     105,     0,   106,     0,     0,   107,   108,   109,     0,     0,
       0,   112,    59,     0,     0,    60,   114,   115,    61,     0,
      62,     0,     0,     0,     0,    59,     0,    63,    60,    64,
      65,    61,    66,    62,   101,    39,     0,   102,     0,     0,
      94,     0,    64,    65,     0,    66,   108,   109,    39,     0,
       0,   112,     0,     0,     0,     0,   114,   115
};

static const yytype_int16 yycheck[] =
{
      26,    37,    26,    22,    26,     5,     1,    13,    42,    43,
      29,    37,     5,    37,     4,    37,    42,    43,    42,    43,
      42,    43,    28,     1,    30,    29,    57,    58,    59,    29,
      60,    61,    62,    11,     3,    44,    29,     6,    74,    17,
       9,    20,    73,     0,    23,    76,    77,    51,    74,    44,
      74,    51,    74,     3,    33,     3,     6,    27,     6,     9,
      38,     9,    17,    38,    14,     8,    14,    10,    11,    13,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    44,    27,    44,    39,
      29,    39,    44,    17,   130,    17,    29,    29,     1,    20,
      29,    29,    23,    44,   130,     8,   130,    10,   130,    12,
      17,    32,    33,    16,    17,   151,    37,    30,    38,    44,
      39,    22,   128,   154,    27,   151,   157,   151,    39,   151,
       3,    17,    38,     6,   170,    38,     9,    22,     1,    22,
      40,    44,    15,    39,   170,     1,   170,     3,   170,    52,
       6,    39,     8,     9,    10,    39,    12,    39,    39,     1,
      16,    17,    39,    39,    39,    22,    29,    39,    30,    32,
      44,    27,    35,    17,    37,    44,    39,    17,    17,    44,
       7,    44,    38,    46,    47,    40,    49,    29,    44,    52,
      32,    39,    52,    35,    30,    37,    52,   169,   158,   166,
      -1,    -1,    44,    74,    46,    47,     1,    49,    29,    -1,
      52,    32,    -1,     8,    35,    10,    37,    12,    -1,    -1,
      -1,    16,    17,    44,    -1,    46,    47,    48,    49,    19,
      20,    52,    27,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    44,
      -1,    41,    42,    43,    19,    20,    -1,    52,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    20,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    20,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    -1,    20,    42,    43,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    31,    32,    33,    -1,    -1,
      -1,    37,    29,    -1,    -1,    32,    42,    43,    35,    -1,
      37,    -1,    -1,    -1,    -1,    29,    -1,    44,    32,    46,
      47,    35,    49,    37,    20,    52,    -1,    23,    -1,    -1,
      44,    -1,    46,    47,    -1,    49,    32,    33,    52,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    54,    44,     0,    27,     1,    11,    17,    55,
      56,    57,    17,    13,    55,    38,    55,    55,     3,     6,
       9,    15,    59,    60,    44,    44,    27,    63,    29,    22,
      29,    58,     1,     8,    10,    12,    16,    27,    44,    52,
      59,    64,    65,    67,    70,    71,    74,    75,    14,    39,
      59,    61,    44,    39,    61,    17,    17,    29,    29,    29,
      32,    35,    37,    44,    46,    47,    49,    69,    71,    74,
      75,    76,    77,    29,    67,    68,    29,    51,    29,    44,
      38,    64,    64,    17,    30,    44,    39,    58,    39,    76,
      48,    76,     1,    76,    44,    77,    77,    77,     5,    17,
      19,    20,    23,    24,    25,    26,    28,    31,    32,    33,
      34,    36,    37,    41,    42,    43,    76,    68,    38,     1,
      72,    76,    76,     1,    44,    22,    66,    40,    22,    62,
      39,    39,    39,    39,    39,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    39,    39,    39,    22,    73,    39,    30,    44,    17,
      44,    59,    67,    17,    17,    67,    76,    76,    66,    44,
       7,    73,    40,    62,    67,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    61,
      61,    62,    62,    63,    64,    64,    64,    65,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    70,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     4,     6,     2,
       3,     0,     1,     1,     1,     5,     5,     4,     4,     3,
       4,     4,     0,     3,     2,     2,     0,     4,     3,     0,
       3,     5,     7,     5,     3,     2,     5,     5,     2,     2,
       0,     1,     0,     1,     1,     1,     0,     4,     4,     2,
       0,     3,     0,     3,     7,     4,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     1,     1,
       2,     1,     1,     1,     1,     3
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
#line 74 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","Program",lineCounter,(int)(columnCounter-yyleng));temp = initNode((yyvsp[-3].loki)->id,"Id",lineCounter,(yyvsp[-3].loki)->column);addChild((yyval.newNode),temp);addChild((yyval.newNode),(yyvsp[-1].newNode));root = (yyval.newNode);};}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","MethodDecl",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-1].newNode));addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 78 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","FieldDeclTop",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),(yyvsp[-1].newNode));addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 79 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","SEMICOLON",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 80 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","MethodHeader",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-1].newNode));addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","FieldDecl",lineCounter,(int)(columnCounter-yyleng));temp = (yyvsp[-3].newNode);addChild((yyval.newNode),temp);temp2 = initNode((yyvsp[-2].loki)->id,"Id",lineCounter,(yyvsp[-2].loki)->column);addSibling(temp,temp2);addSibling((yyval.newNode),(yyvsp[-1].newNode));};}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","FieldDecl",lineCounter,(int)(columnCounter-yyleng));temp3=initNode("NULL",typeAssign,lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp3);temp4 = initNode((yyvsp[-1].loki)->id,"Id",lineCounter,(yyvsp[-1].loki)->column);addSibling(temp3,temp4);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = initNode("NULL","Bool",lineCounter,(int)(columnCounter-yyleng));typeAssign=strdup("Bool");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = initNode("NULL","Int",lineCounter,(int)(columnCounter-yyleng));typeAssign=strdup("Int");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = initNode("NULL","Double",lineCounter,(int)(columnCounter-yyleng));typeAssign=strdup("Double");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 100 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = (yyvsp[-4].newNode);temp = initNode((yyvsp[-3].loki)->id,"Id",lineCounter,(yyvsp[-3].loki)->column);addSibling((yyval.newNode),temp);temp2 = initNode("NULL","MethodParams",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),temp2);addChild(temp2,(yyvsp[-1].newNode));};}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 101 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","Void",lineCounter,(int)(columnCounter-yyleng));temp = initNode((yyvsp[-3].loki)->id,"Id",lineCounter,(yyvsp[-3].loki)->column);addSibling((yyval.newNode),temp);temp2 = initNode("NULL","MethodParams",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),temp2);addChild(temp2,(yyvsp[-1].newNode));};}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","Void",lineCounter,(int)(columnCounter-yyleng));temp = initNode((yyvsp[-2].loki)->id,"Id",lineCounter,(yyvsp[-2].loki)->column);addSibling((yyval.newNode),temp);temp2 = initNode("NULL","MethodParams",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),temp2);};}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 103 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = (yyvsp[-3].newNode);temp = initNode((yyvsp[-2].loki)->id,"Id",lineCounter,(yyvsp[-2].loki)->column);addSibling((yyval.newNode),temp);temp2 = initNode("NULL","MethodParams",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),temp2);};}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","ParamDecl",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));temp = initNode((yyvsp[-1].loki)->id,"Id",lineCounter,(yyvsp[-1].loki)->column);addChild((yyval.newNode),temp);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","ParamDecl",lineCounter,(int)(columnCounter-yyleng));temp2 = initNode("NULL","StringArray",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp2);temp = initNode((yyvsp[0].loki)->id,"Id",lineCounter,(yyvsp[0].loki)->column);addChild((yyval.newNode),temp);};}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 110 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","ParamDecl",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));temp = initNode((yyvsp[-1].loki)->id,"Id",lineCounter,(yyvsp[-1].loki)->column);addChild((yyval.newNode),temp);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 111 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 115 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","MethodBody",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-1].newNode));}}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){topNode = NULL;(yyval.newNode) = initNode("NULL","MethodAuxTop",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),(yyvsp[-1].newNode));addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){topNode = NULL;(yyval.newNode) = initNode("NULL","VarDeclTop",lineCounter,(int)(columnCounter-yyleng));addSibling((yyval.newNode),(yyvsp[-1].newNode));addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 120 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 123 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","VarDecl",lineCounter,(int)(columnCounter-yyleng));temp = (yyvsp[-3].newNode);addChild((yyval.newNode),temp);temp2 = initNode((yyvsp[-2].loki)->id,"Id",lineCounter,(yyvsp[-2].loki)->column);addSibling(temp,temp2);addSibling((yyval.newNode),(yyvsp[-1].newNode));};}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 126 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode("NULL","VarDecl",lineCounter,(int)(columnCounter-yyleng));temp3=initNode("NULL",typeAssign,lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp3);temp4 = initNode((yyvsp[-1].loki)->id,"Id",lineCounter,(yyvsp[-1].loki)->column);addSibling(temp3,temp4);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 127 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 131 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){if((yyvsp[-1].newNode) != NULL && (yyvsp[-1].newNode)->sibling != NULL){(yyval.newNode)=initNode("NULL","Block",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-1].newNode));}else{(yyval.newNode)=(yyvsp[-1].newNode);}};}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","If",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode), (yyvsp[-2].newNode));if((yyvsp[0].newNode) != NULL){addChild((yyval.newNode), (yyvsp[0].newNode));}else{temp2=initNode("NULL","Block",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp2);};temp = initNode("NULL", "Block",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode), temp);};}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 133 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","If",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode), (yyvsp[-4].newNode));if((yyvsp[-2].newNode) != NULL){addChild((yyval.newNode), (yyvsp[-2].newNode));}else{temp2=initNode("NULL","Block",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp2);};if((yyvsp[0].newNode) != NULL){addChild((yyval.newNode),(yyvsp[0].newNode));}else{temp3=initNode("NULL","Block",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp3);};};}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 134 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","While",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));if((yyvsp[0].newNode)==NULL){temp=initNode("NULL","Block",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),temp);}else{addChild((yyval.newNode),(yyvsp[0].newNode));};};}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Return",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-1].newNode));};}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 136 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=(yyvsp[-1].newNode);};}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 137 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Print",lineCounter,(int)(columnCounter-yyleng));temp=initNode((yyvsp[-2].loki)->id,"StrLit",lineCounter,(yyvsp[-2].loki)->column);addChild((yyval.newNode),temp);};}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 138 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Print",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));};}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 139 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 142 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){if((yyvsp[-1].newNode) != NULL && (yyvsp[0].newNode) != NULL){(yyval.newNode) = (yyvsp[-1].newNode);addSibling((yyval.newNode), (yyvsp[0].newNode));}else if((yyvsp[-1].newNode) == NULL){(yyval.newNode) = (yyvsp[0].newNode);}else if((yyvsp[0].newNode) == NULL){(yyval.newNode) = (yyvsp[-1].newNode);};};}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 143 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode)=NULL;}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=(yyvsp[0].newNode);};}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode)=NULL;}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 150 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Call",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));(yyval.newNode)->column=1;};}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 151 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Assign",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 152 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","ParseArgs",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 153 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode)=NULL;}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 156 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode((yyvsp[-3].loki)->id,"Id",lineCounter,(yyvsp[-3].loki)->column);addSibling((yyval.newNode),(yyvsp[-1].newNode));};}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 157 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 160 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=(yyvsp[-1].newNode);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 161 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 164 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=(yyvsp[-1].newNode);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 165 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 168 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode((yyvsp[-2].loki)->id,"Id",lineCounter,(yyvsp[-2].loki)->column);(yyval.newNode)->column = (yyvsp[-1].col);addSibling((yyval.newNode),(yyvsp[0].newNode));};}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 171 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode) = initNode((yyvsp[-4].loki)->id,"Id",lineCounter,(yyvsp[-4].loki)->column);(yyval.newNode)->column = (yyvsp[-6].col);addSibling((yyval.newNode),(yyvsp[-2].newNode));};}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 172 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 175 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=(yyvsp[0].newNode);};}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 176 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Assign",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 179 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","And",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Or",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Xor",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Mul",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 183 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Div",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 184 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Mod",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 185 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Lshift",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 186 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Rshift",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 187 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Add",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 188 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Sub",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 189 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Eq",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 190 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Ne",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 191 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Ge",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 192 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Gt",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 193 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Le",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Lt",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[-2].newNode));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 195 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL", "Minus",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 196 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL", "Not",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 197 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL", "Plus",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 198 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=(yyvsp[-1].newNode);};}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 199 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Call",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 200 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","ParseArgs",lineCounter,(int)(columnCounter-yyleng));addChild((yyval.newNode),(yyvsp[0].newNode));};}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 201 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode("NULL","Length",lineCounter,(int)(columnCounter-yyleng));temp=initNode((yyvsp[-1].loki)->id,"Id",lineCounter,(yyvsp[-1].loki)->column);addChild((yyval.newNode),temp);};}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 202 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode((yyvsp[0].loki)->id,"Id",lineCounter,(yyvsp[0].loki)->column);};}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 203 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode((yyvsp[0].loki)->id,"DecLit",lineCounter,(yyvsp[0].loki)->column);};}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 204 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode((yyvsp[0].loki)->id,"RealLit",lineCounter,(yyvsp[0].loki)->column);};}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 205 "jucompiler.y" /* yacc.c:1646  */
    {if(fatalities==0){(yyval.newNode)=initNode((yyvsp[0].loki)->id,"BoolLit",lineCounter,(yyvsp[0].loki)->column);};}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 206 "jucompiler.y" /* yacc.c:1646  */
    {(yyval.newNode) = NULL;}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2008 "y.tab.c" /* yacc.c:1646  */
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
#line 209 "jucompiler.y" /* yacc.c:1906  */


void yyerror(char *s)
{
    printf("Line %d, col %d: %s: %s\n", lineCounter, (int)(columnCounter-strlen(yytext)) , s, yytext);
    fatalities = 1;
}
