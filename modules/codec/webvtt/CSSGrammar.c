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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         CSSSTYPE
/* Substitute the variable and function names.  */
#define yyparse         cssparse
#define yylex           csslex
#define yyerror         csserror
#define yydebug         cssdebug
#define yynerrs         cssnerrs

/* First part of user prologue.  */
#line 36 "codec/webvtt/CSSGrammar.y"

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif
#include <vlc_common.h>
#include "css_parser.h"

#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

#if YYBISON < 30800
# define YYNOMEM YYABORT
#endif

#line 94 "codec/webvtt/CSSGrammar.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_CSS_CODEC_WEBVTT_CSSGRAMMAR_H_INCLUDED
# define YY_CSS_CODEC_WEBVTT_CSSGRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef CSSDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define CSSDEBUG 1
#  else
#   define CSSDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define CSSDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined CSSDEBUG */
#if CSSDEBUG
extern int cssdebug;
#endif

/* Token kinds.  */
#ifndef CSSTOKENTYPE
# define CSSTOKENTYPE
  enum csstokentype
  {
    CSSEMPTY = -2,
    TOKEN_EOF = 0,                 /* TOKEN_EOF  */
    CSSerror = 256,                /* error  */
    CSSUNDEF = 257,                /* "invalid token"  */
    LOWEST_PREC = 258,             /* LOWEST_PREC  */
    UNIMPORTANT_TOK = 259,         /* UNIMPORTANT_TOK  */
    WHITESPACE = 260,              /* WHITESPACE  */
    SGML_CD = 261,                 /* SGML_CD  */
    MEMERROR = 262,                /* MEMERROR  */
    INCLUDES = 263,                /* INCLUDES  */
    DASHMATCH = 264,               /* DASHMATCH  */
    BEGINSWITH = 265,              /* BEGINSWITH  */
    ENDSWITH = 266,                /* ENDSWITH  */
    CONTAINS = 267,                /* CONTAINS  */
    STRING = 268,                  /* STRING  */
    IDENT = 269,                   /* IDENT  */
    IDSEL = 270,                   /* IDSEL  */
    HASH = 271,                    /* HASH  */
    FONT_FACE_SYM = 272,           /* FONT_FACE_SYM  */
    CHARSET_SYM = 273,             /* CHARSET_SYM  */
    IMPORTANT_SYM = 274,           /* IMPORTANT_SYM  */
    CDO = 275,                     /* CDO  */
    CDC = 276,                     /* CDC  */
    LENGTH = 277,                  /* LENGTH  */
    ANGLE = 278,                   /* ANGLE  */
    TIME = 279,                    /* TIME  */
    FREQ = 280,                    /* FREQ  */
    DIMEN = 281,                   /* DIMEN  */
    PERCENTAGE = 282,              /* PERCENTAGE  */
    NUMBER = 283,                  /* NUMBER  */
    URI = 284,                     /* URI  */
    FUNCTION = 285,                /* FUNCTION  */
    UNICODERANGE = 286             /* UNICODERANGE  */
  };
  typedef enum csstokentype csstoken_kind_t;
#endif
/* Token kinds.  */
#define CSSEMPTY -2
#define TOKEN_EOF 0
#define CSSerror 256
#define CSSUNDEF 257
#define LOWEST_PREC 258
#define UNIMPORTANT_TOK 259
#define WHITESPACE 260
#define SGML_CD 261
#define MEMERROR 262
#define INCLUDES 263
#define DASHMATCH 264
#define BEGINSWITH 265
#define ENDSWITH 266
#define CONTAINS 267
#define STRING 268
#define IDENT 269
#define IDSEL 270
#define HASH 271
#define FONT_FACE_SYM 272
#define CHARSET_SYM 273
#define IMPORTANT_SYM 274
#define CDO 275
#define CDC 276
#define LENGTH 277
#define ANGLE 278
#define TIME 279
#define FREQ 280
#define DIMEN 281
#define PERCENTAGE 282
#define NUMBER 283
#define URI 284
#define FUNCTION 285
#define UNICODERANGE 286

/* Value type.  */
#if ! defined CSSSTYPE && ! defined CSSSTYPE_IS_DECLARED
union CSSSTYPE
{
#line 53 "codec/webvtt/CSSGrammar.y"

    bool boolean;
    char character;
    int integer;
    char *string;
    enum vlc_css_relation_e relation;

    vlc_css_term_t term;
    vlc_css_expr_t *expr;
    vlc_css_rule_t  *rule;
    vlc_css_declaration_t *declaration;
    vlc_css_declaration_t *declarationList;
    vlc_css_selector_t *selector;
    vlc_css_selector_t *selectorList;

#line 233 "codec/webvtt/CSSGrammar.c"

};
typedef union CSSSTYPE CSSSTYPE;
# define CSSSTYPE_IS_TRIVIAL 1
# define CSSSTYPE_IS_DECLARED 1
#endif




int cssparse (yyscan_t scanner, vlc_css_parser_t *css_parser);


#endif /* !YY_CSS_CODEC_WEBVTT_CSSGRAMMAR_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* TOKEN_EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LOWEST_PREC = 3,                /* LOWEST_PREC  */
  YYSYMBOL_UNIMPORTANT_TOK = 4,            /* UNIMPORTANT_TOK  */
  YYSYMBOL_WHITESPACE = 5,                 /* WHITESPACE  */
  YYSYMBOL_SGML_CD = 6,                    /* SGML_CD  */
  YYSYMBOL_MEMERROR = 7,                   /* MEMERROR  */
  YYSYMBOL_INCLUDES = 8,                   /* INCLUDES  */
  YYSYMBOL_DASHMATCH = 9,                  /* DASHMATCH  */
  YYSYMBOL_BEGINSWITH = 10,                /* BEGINSWITH  */
  YYSYMBOL_ENDSWITH = 11,                  /* ENDSWITH  */
  YYSYMBOL_CONTAINS = 12,                  /* CONTAINS  */
  YYSYMBOL_STRING = 13,                    /* STRING  */
  YYSYMBOL_IDENT = 14,                     /* IDENT  */
  YYSYMBOL_IDSEL = 15,                     /* IDSEL  */
  YYSYMBOL_HASH = 16,                      /* HASH  */
  YYSYMBOL_17_ = 17,                       /* ':'  */
  YYSYMBOL_18_ = 18,                       /* '.'  */
  YYSYMBOL_19_ = 19,                       /* '['  */
  YYSYMBOL_20_ = 20,                       /* '*'  */
  YYSYMBOL_21_ = 21,                       /* '|'  */
  YYSYMBOL_FONT_FACE_SYM = 22,             /* FONT_FACE_SYM  */
  YYSYMBOL_CHARSET_SYM = 23,               /* CHARSET_SYM  */
  YYSYMBOL_IMPORTANT_SYM = 24,             /* IMPORTANT_SYM  */
  YYSYMBOL_CDO = 25,                       /* CDO  */
  YYSYMBOL_CDC = 26,                       /* CDC  */
  YYSYMBOL_LENGTH = 27,                    /* LENGTH  */
  YYSYMBOL_ANGLE = 28,                     /* ANGLE  */
  YYSYMBOL_TIME = 29,                      /* TIME  */
  YYSYMBOL_FREQ = 30,                      /* FREQ  */
  YYSYMBOL_DIMEN = 31,                     /* DIMEN  */
  YYSYMBOL_PERCENTAGE = 32,                /* PERCENTAGE  */
  YYSYMBOL_NUMBER = 33,                    /* NUMBER  */
  YYSYMBOL_URI = 34,                       /* URI  */
  YYSYMBOL_FUNCTION = 35,                  /* FUNCTION  */
  YYSYMBOL_UNICODERANGE = 36,              /* UNICODERANGE  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* '{'  */
  YYSYMBOL_40_ = 40,                       /* '+'  */
  YYSYMBOL_41_ = 41,                       /* '~'  */
  YYSYMBOL_42_ = 42,                       /* '>'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* '='  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_49_ = 49,                       /* '#'  */
  YYSYMBOL_50_ = 50,                       /* '%'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_stylesheet = 52,                /* stylesheet  */
  YYSYMBOL_maybe_space = 53,               /* maybe_space  */
  YYSYMBOL_maybe_sgml = 54,                /* maybe_sgml  */
  YYSYMBOL_maybe_charset = 55,             /* maybe_charset  */
  YYSYMBOL_closing_brace = 56,             /* closing_brace  */
  YYSYMBOL_charset = 57,                   /* charset  */
  YYSYMBOL_ignored_charset = 58,           /* ignored_charset  */
  YYSYMBOL_rule_list = 59,                 /* rule_list  */
  YYSYMBOL_valid_rule = 60,                /* valid_rule  */
  YYSYMBOL_rule = 61,                      /* rule  */
  YYSYMBOL_font_face = 62,                 /* font_face  */
  YYSYMBOL_combinator = 63,                /* combinator  */
  YYSYMBOL_maybe_unary_operator = 64,      /* maybe_unary_operator  */
  YYSYMBOL_unary_operator = 65,            /* unary_operator  */
  YYSYMBOL_ruleset = 66,                   /* ruleset  */
  YYSYMBOL_selector_list = 67,             /* selector_list  */
  YYSYMBOL_selector_with_trailing_whitespace = 68, /* selector_with_trailing_whitespace  */
  YYSYMBOL_selector = 69,                  /* selector  */
  YYSYMBOL_simple_selector = 70,           /* simple_selector  */
  YYSYMBOL_element_name = 71,              /* element_name  */
  YYSYMBOL_specifier_list = 72,            /* specifier_list  */
  YYSYMBOL_specifier = 73,                 /* specifier  */
  YYSYMBOL_class = 74,                     /* class  */
  YYSYMBOL_attr_name = 75,                 /* attr_name  */
  YYSYMBOL_attrib = 76,                    /* attrib  */
  YYSYMBOL_match = 77,                     /* match  */
  YYSYMBOL_ident_or_string = 78,           /* ident_or_string  */
  YYSYMBOL_pseudo = 79,                    /* pseudo  */
  YYSYMBOL_declaration_list = 80,          /* declaration_list  */
  YYSYMBOL_decl_list = 81,                 /* decl_list  */
  YYSYMBOL_declaration = 82,               /* declaration  */
  YYSYMBOL_property = 83,                  /* property  */
  YYSYMBOL_prio = 84,                      /* prio  */
  YYSYMBOL_expr = 85,                      /* expr  */
  YYSYMBOL_operator = 86,                  /* operator  */
  YYSYMBOL_term = 87,                      /* term  */
  YYSYMBOL_unary_term = 88,                /* unary_term  */
  YYSYMBOL_function = 89,                  /* function  */
  YYSYMBOL_invalid_rule = 90,              /* invalid_rule  */
  YYSYMBOL_invalid_block = 91,             /* invalid_block  */
  YYSYMBOL_invalid_block_list = 92         /* invalid_block_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 69 "codec/webvtt/CSSGrammar.y"

/* See bison pure calling */
#define YY_DECL int yylex(union YYSTYPE *, yyscan_t)
YY_DECL;

static void yyerror(yyscan_t scanner, vlc_css_parser_t *p, const char *msg)
{
    VLC_UNUSED(scanner);VLC_UNUSED(p);VLC_UNUSED(msg);
}


#line 362 "codec/webvtt/CSSGrammar.c"


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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined CSSSTYPE_IS_TRIVIAL && CSSSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   447

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
       2,     2,     2,     2,     2,    49,     2,    50,     2,     2,
       2,    47,    20,    40,    44,    43,    18,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,    38,
       2,    46,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,    21,    37,    41,     2,     2,     2,
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
      15,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36
};

#if CSSDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   181,   181,   182,   188,   189,   192,   194,   195,   198,
     200,   204,   205,   209,   213,   216,   222,   227,   232,   234,
     241,   242,   246,   251,   252,   256,   261,   264,   270,   271,
     272,   276,   277,   281,   282,   286,   296,   299,   312,   319,
     325,   328,   332,   347,   361,   368,   379,   392,   398,   399,
     403,   406,   417,   424,   436,   448,   449,   450,   454,   468,
     474,   483,   505,   508,   511,   514,   517,   520,   526,   527,
     531,   542,   554,   572,   594,   613,   616,   621,   624,   627,
     630,   633,   639,   642,   646,   650,   653,   656,   664,   667,
     673,   685,   691,   696,   701,   706,   710,   717,   723,   724,
     728,   733,   743,   756,   759,   765,   766,   770,   771,   773,
     774,   775,   776,   777,   778,   779,   781,   784,   790,   791,
     792,   793,   794,   795,   799,   805,   810,   815,   825,   843,
     844,   848,   849
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if CSSDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "\"invalid token\"", "LOWEST_PREC",
  "UNIMPORTANT_TOK", "WHITESPACE", "SGML_CD", "MEMERROR", "INCLUDES",
  "DASHMATCH", "BEGINSWITH", "ENDSWITH", "CONTAINS", "STRING", "IDENT",
  "IDSEL", "HASH", "':'", "'.'", "'['", "'*'", "'|'", "FONT_FACE_SYM",
  "CHARSET_SYM", "IMPORTANT_SYM", "CDO", "CDC", "LENGTH", "ANGLE", "TIME",
  "FREQ", "DIMEN", "PERCENTAGE", "NUMBER", "URI", "FUNCTION",
  "UNICODERANGE", "'}'", "';'", "'{'", "'+'", "'~'", "'>'", "'-'", "','",
  "']'", "'='", "')'", "'/'", "'#'", "'%'", "$accept", "stylesheet",
  "maybe_space", "maybe_sgml", "maybe_charset", "closing_brace", "charset",
  "ignored_charset", "rule_list", "valid_rule", "rule", "font_face",
  "combinator", "maybe_unary_operator", "unary_operator", "ruleset",
  "selector_list", "selector_with_trailing_whitespace", "selector",
  "simple_selector", "element_name", "specifier_list", "specifier",
  "class", "attr_name", "attrib", "match", "ident_or_string", "pseudo",
  "declaration_list", "decl_list", "declaration", "property", "prio",
  "expr", "operator", "term", "unary_term", "function", "invalid_rule",
  "invalid_block", "invalid_block_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -156,    25,    10,  -156,  -156,   132,  -156,  -156,   -26,
      76,    80,  -156,    40,  -156,  -156,  -156,  -156,   424,    34,
       5,    27,  -156,  -156,  -156,     3,    77,  -156,  -156,   138,
    -156,  -156,  -156,  -156,  -156,  -156,     0,   176,   110,  -156,
     270,    13,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,    93,  -156,  -156,  -156,    -9,  -156,  -156,    -3,   119,
      17,   143,    80,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,   176,    83,  -156,  -156,    34,  -156,  -156,    78,
    -156,   294,  -156,  -156,  -156,  -156,  -156,   183,   328,   101,
     101,   101,  -156,  -156,  -156,   328,  -156,  -156,  -156,   147,
    -156,   101,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
     183,    88,   170,  -156,  -156,     8,    95,   179,    96,   220,
      35,    -1,  -156,   173,     8,  -156,  -156,   175,   101,   101,
    -156,   184,   145,    68,  -156,   398,  -156,  -156,  -156,     1,
    -156,    14,  -156,  -156,  -156,  -156,   101,   213,  -156,   197,
    -156,    27,   101,  -156,   101,   241,  -156,  -156,     2,  -156,
     101,   227,   101,   101,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,   351,   200,  -156,  -156,  -156,  -156,   101,  -156,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   322,   101,   101,   101,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,   101,  -156,  -156,   282,   101,   101,
     101,   101,   361,   101,  -156,  -156,  -156,   101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     3,     0,     9,     1,     5,     0,     6,    10,     0,
       0,    18,    15,     0,    14,     4,     8,     7,     0,     0,
       0,     0,    48,    53,    54,     0,     0,     4,    49,     0,
       4,    23,    22,     6,    21,    20,     0,    41,     0,    40,
      45,     0,    50,    55,    56,    57,    24,    12,    11,   130,
     131,     0,    13,   128,    70,     0,     4,    58,     0,     0,
       0,     0,    19,    38,     4,     4,    42,    44,    39,     4,
       4,     4,     0,     0,    52,    51,     0,    71,     4,    32,
       4,     0,    27,    26,     4,     4,    17,     0,     0,    28,
      29,    30,    43,   129,   132,     0,     4,    34,    33,     0,
      31,    59,    63,    64,    65,    66,    67,    60,    62,     4,
       0,     0,    79,     4,     4,     0,     0,    75,     0,     0,
       0,     0,     4,     0,     0,    16,     4,     0,    97,    96,
      35,    80,    76,     0,     4,     0,    93,     4,    95,     0,
      74,     0,    69,    68,     4,    25,    85,    78,     4,     0,
       4,     0,    82,     4,    83,     0,    73,    72,     0,     4,
      88,     0,    87,    84,    92,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     0,   100,   105,   116,    61,    86,     4,   107,
     108,   113,   114,   120,   121,   122,   123,   109,   119,   118,
     111,     0,   112,   115,   117,     4,   106,    91,     4,     4,
       4,    90,     4,   101,    89,   127,     4,     0,   110,    98,
     104,   103,     0,   126,   125,     4,   102,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,    -6,   152,  -156,   -73,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,   126,  -156,  -156,  -156,    22,    -2,
    -156,   171,    39,  -156,  -156,  -156,  -156,  -156,  -156,   102,
    -156,   104,  -156,  -156,    44,  -156,  -155,    45,  -156,  -156,
      28,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    11,     7,    49,     8,    31,    18,    32,
      33,    34,    72,    99,   181,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    81,    44,   109,   144,    45,   115,
     116,   117,   118,   211,   182,   212,   183,   184,   185,    46,
      50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    63,     5,    93,     5,    77,     5,     5,    47,    20,
       5,    80,    12,    13,    74,     5,     1,    54,   -47,     5,
      55,    58,     5,    60,    61,     4,    78,   213,    23,    24,
      25,    26,    27,     6,    47,    66,    67,    14,    56,    64,
      68,    19,   130,    52,    65,    48,   140,   186,   156,    53,
      79,   145,   -47,   -47,   -47,   -47,    84,   -47,    87,    88,
     -47,   157,   213,    89,    90,    91,    13,   226,   -81,   151,
      92,    48,    95,    13,   101,    69,    70,    71,   110,   111,
      75,     5,    -4,     5,    74,    16,    17,    83,   -46,    15,
     121,    57,    96,     5,    76,   -77,   131,   136,    23,    24,
      25,    26,    27,   123,    94,   -81,     5,   128,   129,   113,
     119,    67,    75,   137,   139,    68,   141,   120,    97,   114,
     146,    98,   -46,   -46,   -46,   -46,   125,   -46,   152,   154,
     -46,   155,   -77,     9,    13,    13,   127,    -4,   158,    59,
     133,   135,   160,    -4,   162,    -4,   138,   163,     5,   -36,
      69,    70,    71,   187,   -36,   149,    85,    82,    13,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    94,   147,    -4,     5,    94,
     122,    86,   214,   150,   112,    62,   142,   143,     5,    94,
      22,    23,    24,    25,    26,    27,    28,   113,   161,   218,
     -99,   207,   219,   220,   221,   100,   222,   114,   126,    13,
     223,    73,   124,   165,   166,   167,   168,   134,    13,   227,
     132,    67,   148,    13,   208,    68,   206,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   -99,   -99,   -99,
      97,   -94,   164,    98,   209,   217,     5,     0,   210,   179,
     180,   159,    13,     0,   165,   166,   167,   168,     0,   -37,
      69,    70,    71,     0,   -37,   188,    13,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   -94,   -94,
     -94,    97,   224,     0,    98,    23,    24,    25,    26,    27,
     179,   180,     0,     0,     0,   165,   166,   167,   168,     0,
       0,     0,   102,   103,   104,   105,   106,     0,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,     0,    97,   215,     0,    98,   209,     5,     0,   225,
     210,   179,   180,     5,     0,   165,   166,   167,   168,   107,
     108,     0,    22,    23,    24,    25,    26,    27,    28,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,     0,    97,     0,     0,    98,     5,     0,     0,   216,
       0,   179,   180,     0,   165,   166,   167,   168,   169,   170,
     171,   172,   205,   174,   175,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,    -4,   151,
       0,    97,     0,    -4,    98,     0,     0,     0,     0,     0,
     179,   180,    -4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -4,     0,    -2,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -4,   153,    -4,    22,    23,
      24,    25,    26,    27,    28,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       6,     1,     5,    76,     5,    14,     5,     5,     0,    15,
       5,    14,    38,    39,     1,     5,     7,    14,     5,     5,
      17,    27,     5,    29,    30,     0,    35,   182,    15,    16,
      17,    18,    19,    23,     0,    37,     1,     9,    35,    39,
       5,     1,   115,    38,    44,    37,    47,    45,    47,    21,
      56,   124,    39,    40,    41,    42,    39,    44,    64,    65,
      47,    47,   217,    69,    70,    71,    39,   222,     0,     1,
      72,    37,    78,    39,    80,    40,    41,    42,    84,    85,
      41,     5,    47,     5,     1,     5,     6,    59,     5,    13,
      96,    14,    14,     5,     1,     0,     1,     1,    15,    16,
      17,    18,    19,   109,    76,    37,     5,   113,   114,    14,
      88,     1,    73,    17,   120,     5,   122,    95,    40,    24,
     126,    43,    39,    40,    41,    42,    38,    44,   134,   135,
      47,   137,    37,     1,    39,    39,   112,     5,   144,     1,
     116,   117,   148,     5,   150,    13,   118,   153,     5,    39,
      40,    41,    42,   159,    44,   131,    13,    38,    39,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   147,     1,    39,     5,   151,
      33,    38,   188,    38,     1,    33,    13,    14,     5,   161,
      14,    15,    16,    17,    18,    19,    20,    14,     1,   205,
       0,     1,   208,   209,   210,    79,   212,    24,    38,    39,
     216,    40,   110,    13,    14,    15,    16,    38,    39,   225,
     116,     1,    38,    39,    24,     5,   181,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     1,    43,    44,   201,     5,    -1,    48,    49,
      50,    38,    39,    -1,    13,    14,    15,    16,    -1,    39,
      40,    41,    42,    -1,    44,    38,    39,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    -1,    43,    15,    16,    17,    18,    19,
      49,    50,    -1,    -1,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,     1,    -1,    43,    44,     5,    -1,    47,
      48,    49,    50,     5,    -1,    13,    14,    15,    16,    45,
      46,    -1,    14,    15,    16,    17,    18,    19,    20,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    40,    -1,    -1,    43,     5,    -1,    -1,    47,
      -1,    49,    50,    -1,    13,    14,    15,    16,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     1,
      -1,    40,    -1,     5,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    52,    53,     0,     5,    23,    55,    57,     1,
      53,    54,    38,    39,    91,    13,     5,     6,    59,     1,
      53,     1,    14,    15,    16,    17,    18,    19,    20,    22,
      23,    58,    60,    61,    62,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    76,    79,    90,     0,    37,    56,
      91,    92,    38,    91,    14,    17,    35,    14,    53,     1,
      53,    53,    54,     1,    39,    44,    70,     1,     5,    40,
      41,    42,    63,    72,     1,    73,     1,    14,    35,    53,
      14,    75,    38,    91,    39,    13,    38,    53,    53,    53,
      53,    53,    70,    56,    91,    53,    14,    40,    43,    64,
      65,    53,     8,     9,    10,    11,    12,    45,    46,    77,
      53,    53,     1,    14,    24,    80,    81,    82,    83,    69,
      69,    53,    33,    53,    80,    38,    38,    92,    53,    53,
      56,     1,    82,    92,    38,    92,     1,    17,    91,    53,
      47,    53,    13,    14,    78,    56,    53,     1,    38,    92,
      38,     1,    53,    38,    53,    53,    47,    47,    53,    38,
      53,     1,    53,    53,     1,    13,    14,    15,    16,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    49,
      50,    65,    85,    87,    88,    89,    45,    53,    38,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    31,    88,     1,    24,    44,
      48,    84,    86,    87,    53,     1,    47,    85,    53,    53,
      53,    53,    53,    53,     0,    47,    87,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    54,    55,
      55,    56,    56,    57,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    62,    63,    63,
      63,    64,    64,    65,    65,    66,    67,    67,    67,    68,
      69,    69,    69,    69,    69,    70,    70,    70,    71,    71,
      72,    72,    72,    73,    73,    73,    73,    73,    74,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    82,    82,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    90,    91,
      91,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     0,     2,     0,     2,     2,     0,
       1,     1,     1,     5,     3,     3,     5,     3,     0,     3,
       1,     1,     1,     1,     1,     6,     3,     3,     2,     2,
       2,     1,     0,     1,     1,     5,     1,     4,     2,     2,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       4,     8,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     7,     7,     6,     1,     2,     1,     3,     1,
       2,     2,     3,     3,     4,     3,     5,     4,     4,     6,
       5,     5,     4,     2,     3,     2,     2,     2,     2,     0,
       1,     2,     4,     2,     2,     1,     2,     2,     2,     2,
       3,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     5,     4,     4,     3,     2,     5,
       3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = CSSEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == CSSEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (scanner, css_parser, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use CSSerror or CSSUNDEF. */
#define YYERRCODE CSSUNDEF


/* Enable debugging if requested.  */
#if CSSDEBUG

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
                  Kind, Value, scanner, css_parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, yyscan_t scanner, vlc_css_parser_t *css_parser)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (scanner);
  YY_USE (css_parser);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, yyscan_t scanner, vlc_css_parser_t *css_parser)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, scanner, css_parser);
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
                 int yyrule, yyscan_t scanner, vlc_css_parser_t *css_parser)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], scanner, css_parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, scanner, css_parser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !CSSDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !CSSDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, yyscan_t scanner, vlc_css_parser_t *css_parser)
{
  YY_USE (yyvaluep);
  YY_USE (scanner);
  YY_USE (css_parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_STRING: /* STRING  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1266 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_IDENT: /* IDENT  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1272 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_IDSEL: /* IDSEL  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1278 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_HASH: /* HASH  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1284 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_LENGTH: /* LENGTH  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1290 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_ANGLE: /* ANGLE  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1296 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_TIME: /* TIME  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1302 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_FREQ: /* FREQ  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1308 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_DIMEN: /* DIMEN  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1314 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_PERCENTAGE: /* PERCENTAGE  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1320 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_NUMBER: /* NUMBER  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1326 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_URI: /* URI  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1332 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_FUNCTION: /* FUNCTION  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1338 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_UNICODERANGE: /* UNICODERANGE  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1344 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_charset: /* charset  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1350 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_ignored_charset: /* ignored_charset  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1356 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_valid_rule: /* valid_rule  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1362 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_rule: /* rule  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1368 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_font_face: /* font_face  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1374 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_ruleset: /* ruleset  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1380 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_selector_list: /* selector_list  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selectorList)); }
#line 1386 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_selector_with_trailing_whitespace: /* selector_with_trailing_whitespace  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1392 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_selector: /* selector  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1398 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_simple_selector: /* simple_selector  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1404 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_element_name: /* element_name  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1410 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_specifier_list: /* specifier_list  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1416 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_specifier: /* specifier  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1422 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_class: /* class  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1428 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_attr_name: /* attr_name  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1434 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_attrib: /* attrib  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1440 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_ident_or_string: /* ident_or_string  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1446 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_pseudo: /* pseudo  */
#line 153 "codec/webvtt/CSSGrammar.y"
            { vlc_css_selectors_Delete(((*yyvaluep).selector)); }
#line 1452 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_declaration_list: /* declaration_list  */
#line 158 "codec/webvtt/CSSGrammar.y"
            { vlc_css_declarations_Delete(((*yyvaluep).declarationList)); }
#line 1458 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_decl_list: /* decl_list  */
#line 158 "codec/webvtt/CSSGrammar.y"
            { vlc_css_declarations_Delete(((*yyvaluep).declarationList)); }
#line 1464 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_declaration: /* declaration  */
#line 158 "codec/webvtt/CSSGrammar.y"
            { vlc_css_declarations_Delete(((*yyvaluep).declaration)); }
#line 1470 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_property: /* property  */
#line 176 "codec/webvtt/CSSGrammar.y"
            { free(((*yyvaluep).string)); }
#line 1476 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 171 "codec/webvtt/CSSGrammar.y"
            { vlc_css_expression_Delete(((*yyvaluep).expr)); }
#line 1482 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_term: /* term  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1488 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_unary_term: /* unary_term  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1494 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_function: /* function  */
#line 124 "codec/webvtt/CSSGrammar.y"
            { vlc_css_term_Clean(((*yyvaluep).term)); }
#line 1500 "codec/webvtt/CSSGrammar.c"
        break;

    case YYSYMBOL_invalid_rule: /* invalid_rule  */
#line 139 "codec/webvtt/CSSGrammar.y"
            { vlc_css_rules_Delete(((*yyvaluep).rule)); }
#line 1506 "codec/webvtt/CSSGrammar.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, vlc_css_parser_t *css_parser)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = CSSEMPTY; /* Cause a token to be read.  */

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
  if (yychar == CSSEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= TOKEN_EOF)
    {
      yychar = TOKEN_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == CSSerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = CSSUNDEF;
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
  yychar = CSSEMPTY;
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
  case 3: /* stylesheet: MEMERROR  */
#line 182 "codec/webvtt/CSSGrammar.y"
               { // catch alloc failures from lexer
        YYNOMEM;
    }
#line 1784 "codec/webvtt/CSSGrammar.c"
    break;

  case 13: /* charset: CHARSET_SYM maybe_space STRING maybe_space ';'  */
#line 209 "codec/webvtt/CSSGrammar.y"
                                                 {
      free( (yyvsp[-2].string) );
      (yyval.rule) = NULL;
  }
#line 1793 "codec/webvtt/CSSGrammar.c"
    break;

  case 14: /* charset: CHARSET_SYM error invalid_block  */
#line 213 "codec/webvtt/CSSGrammar.y"
                                    {
      (yyval.rule) = NULL;
  }
#line 1801 "codec/webvtt/CSSGrammar.c"
    break;

  case 15: /* charset: CHARSET_SYM error ';'  */
#line 216 "codec/webvtt/CSSGrammar.y"
                          {
      (yyval.rule) = NULL;
  }
#line 1809 "codec/webvtt/CSSGrammar.c"
    break;

  case 16: /* ignored_charset: CHARSET_SYM maybe_space STRING maybe_space ';'  */
#line 222 "codec/webvtt/CSSGrammar.y"
                                                   {
        // Ignore any @charset rule not at the beginning of the style sheet.
        free( (yyvsp[-2].string) );
        (yyval.rule) = NULL;
    }
#line 1819 "codec/webvtt/CSSGrammar.c"
    break;

  case 17: /* ignored_charset: CHARSET_SYM maybe_space ';'  */
#line 227 "codec/webvtt/CSSGrammar.y"
                                  {
        (yyval.rule) = NULL;
    }
#line 1827 "codec/webvtt/CSSGrammar.c"
    break;

  case 19: /* rule_list: rule_list rule maybe_sgml  */
#line 234 "codec/webvtt/CSSGrammar.y"
                             {
     if( (yyvsp[-1].rule) )
         vlc_css_parser_AddRule( css_parser, (yyvsp[-1].rule) );
 }
#line 1836 "codec/webvtt/CSSGrammar.c"
    break;

  case 22: /* rule: valid_rule  */
#line 246 "codec/webvtt/CSSGrammar.y"
               {
        (yyval.rule) = (yyvsp[0].rule);
        if((yyval.rule))
            (yyval.rule)->b_valid = true;
    }
#line 1846 "codec/webvtt/CSSGrammar.c"
    break;

  case 25: /* font_face: FONT_FACE_SYM maybe_space '{' maybe_space declaration_list closing_brace  */
#line 257 "codec/webvtt/CSSGrammar.y"
                                                   {
        vlc_css_declarations_Delete( (yyvsp[-1].declarationList) );
        (yyval.rule) = NULL;
    }
#line 1855 "codec/webvtt/CSSGrammar.c"
    break;

  case 26: /* font_face: FONT_FACE_SYM error invalid_block  */
#line 261 "codec/webvtt/CSSGrammar.y"
                                        {
        (yyval.rule) = NULL;
    }
#line 1863 "codec/webvtt/CSSGrammar.c"
    break;

  case 27: /* font_face: FONT_FACE_SYM error ';'  */
#line 264 "codec/webvtt/CSSGrammar.y"
                              {
        (yyval.rule) = NULL;
    }
#line 1871 "codec/webvtt/CSSGrammar.c"
    break;

  case 28: /* combinator: '+' maybe_space  */
#line 270 "codec/webvtt/CSSGrammar.y"
                    { (yyval.relation) = RELATION_DIRECTADJACENT; }
#line 1877 "codec/webvtt/CSSGrammar.c"
    break;

  case 29: /* combinator: '~' maybe_space  */
#line 271 "codec/webvtt/CSSGrammar.y"
                    { (yyval.relation) = RELATION_INDIRECTADJACENT; }
#line 1883 "codec/webvtt/CSSGrammar.c"
    break;

  case 30: /* combinator: '>' maybe_space  */
#line 272 "codec/webvtt/CSSGrammar.y"
                    { (yyval.relation) = RELATION_CHILD; }
#line 1889 "codec/webvtt/CSSGrammar.c"
    break;

  case 31: /* maybe_unary_operator: unary_operator  */
#line 276 "codec/webvtt/CSSGrammar.y"
                   { (yyval.integer) = (yyvsp[0].integer); }
#line 1895 "codec/webvtt/CSSGrammar.c"
    break;

  case 32: /* maybe_unary_operator: %empty  */
#line 277 "codec/webvtt/CSSGrammar.y"
      { (yyval.integer) = 1; }
#line 1901 "codec/webvtt/CSSGrammar.c"
    break;

  case 33: /* unary_operator: '-'  */
#line 281 "codec/webvtt/CSSGrammar.y"
        { (yyval.integer) = -1; }
#line 1907 "codec/webvtt/CSSGrammar.c"
    break;

  case 34: /* unary_operator: '+'  */
#line 282 "codec/webvtt/CSSGrammar.y"
        { (yyval.integer) = 1; }
#line 1913 "codec/webvtt/CSSGrammar.c"
    break;

  case 35: /* ruleset: selector_list '{' maybe_space declaration_list closing_brace  */
#line 286 "codec/webvtt/CSSGrammar.y"
                                                                 {
        (yyval.rule) = vlc_css_rule_New();
        if( !(yyval.rule) )
            YYNOMEM;
        (yyval.rule)->p_selectors = (yyvsp[-4].selectorList);
        (yyval.rule)->p_declarations = (yyvsp[-1].declarationList);
    }
#line 1925 "codec/webvtt/CSSGrammar.c"
    break;

  case 36: /* selector_list: selector  */
#line 296 "codec/webvtt/CSSGrammar.y"
                                   {
        (yyval.selectorList) = (yyvsp[0].selector);
    }
#line 1933 "codec/webvtt/CSSGrammar.c"
    break;

  case 37: /* selector_list: selector_list ',' maybe_space selector  */
#line 299 "codec/webvtt/CSSGrammar.y"
                                                                   {
        if ((yyvsp[-3].selectorList) && (yyvsp[0].selector) )
        {
            (yyval.selectorList) = (yyvsp[-3].selectorList);
            vlc_css_selector_Append( (yyval.selectorList), (yyvsp[0].selector) );
        }
        else
        {
            vlc_css_selectors_Delete( (yyvsp[-3].selectorList) );
            vlc_css_selectors_Delete( (yyvsp[0].selector) );
            (yyval.selectorList) = NULL;
        }
    }
#line 1951 "codec/webvtt/CSSGrammar.c"
    break;

  case 38: /* selector_list: selector_list error  */
#line 312 "codec/webvtt/CSSGrammar.y"
                        {
        vlc_css_selectors_Delete( (yyvsp[-1].selectorList) );
        (yyval.selectorList) = NULL;
    }
#line 1960 "codec/webvtt/CSSGrammar.c"
    break;

  case 39: /* selector_with_trailing_whitespace: selector WHITESPACE  */
#line 319 "codec/webvtt/CSSGrammar.y"
                        {
        (yyval.selector) = (yyvsp[-1].selector);
    }
#line 1968 "codec/webvtt/CSSGrammar.c"
    break;

  case 40: /* selector: simple_selector  */
#line 325 "codec/webvtt/CSSGrammar.y"
                    {
        (yyval.selector) = (yyvsp[0].selector);
    }
#line 1976 "codec/webvtt/CSSGrammar.c"
    break;

  case 41: /* selector: selector_with_trailing_whitespace  */
#line 329 "codec/webvtt/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[0].selector);
    }
#line 1984 "codec/webvtt/CSSGrammar.c"
    break;

  case 42: /* selector: selector_with_trailing_whitespace simple_selector  */
#line 333 "codec/webvtt/CSSGrammar.y"
    {
        if( (yyvsp[-1].selector) && (yyvsp[0].selector) )
        {
            vlc_css_selector_AddSpecifier( (yyvsp[-1].selector), (yyvsp[0].selector) );
            (yyvsp[0].selector)->combinator = RELATION_DESCENDENT;
            (yyval.selector) = (yyvsp[-1].selector);
        }
        else
        {
            vlc_css_selectors_Delete( (yyvsp[-1].selector) );
            vlc_css_selectors_Delete( (yyvsp[0].selector) );
            (yyval.selector) = NULL;
        }
    }
#line 2003 "codec/webvtt/CSSGrammar.c"
    break;

  case 43: /* selector: selector combinator simple_selector  */
#line 347 "codec/webvtt/CSSGrammar.y"
                                          {
        if( (yyvsp[-2].selector) && (yyvsp[0].selector) )
        {
            vlc_css_selector_AddSpecifier( (yyvsp[-2].selector), (yyvsp[0].selector) );
            (yyvsp[0].selector)->combinator = (yyvsp[-1].relation);
            (yyval.selector) = (yyvsp[-2].selector);
        }
        else
        {
            vlc_css_selectors_Delete( (yyvsp[-2].selector) );
            vlc_css_selectors_Delete( (yyvsp[0].selector) );
            (yyval.selector) = NULL;
        }
    }
#line 2022 "codec/webvtt/CSSGrammar.c"
    break;

  case 44: /* selector: selector error  */
#line 361 "codec/webvtt/CSSGrammar.y"
                     {
        vlc_css_selectors_Delete( (yyvsp[-1].selector) );
        (yyval.selector) = NULL;
    }
#line 2031 "codec/webvtt/CSSGrammar.c"
    break;

  case 45: /* simple_selector: element_name  */
#line 368 "codec/webvtt/CSSGrammar.y"
                 {
        if( !(yyvsp[0].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SELECTOR_SIMPLE, (yyvsp[0].string) );
        if( !(yyval.selector) )
            YYNOMEM; // destructors called
        free( (yyvsp[0].string) );
    }
#line 2047 "codec/webvtt/CSSGrammar.c"
    break;

  case 46: /* simple_selector: element_name specifier_list  */
#line 379 "codec/webvtt/CSSGrammar.y"
                                  {
        if( !(yyvsp[-1].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SELECTOR_SIMPLE, (yyvsp[-1].string) );
        if( !(yyval.selector) )
            YYNOMEM; // destructors called
        if( (yyvsp[0].selector) )
            vlc_css_selector_AddSpecifier( (yyval.selector), (yyvsp[0].selector) );
        free( (yyvsp[-1].string) );
    }
#line 2065 "codec/webvtt/CSSGrammar.c"
    break;

  case 47: /* simple_selector: specifier_list  */
#line 392 "codec/webvtt/CSSGrammar.y"
                     {
        (yyval.selector) = (yyvsp[0].selector);
    }
#line 2073 "codec/webvtt/CSSGrammar.c"
    break;

  case 49: /* element_name: '*'  */
#line 399 "codec/webvtt/CSSGrammar.y"
          { (yyval.string) = strdup("*"); }
#line 2079 "codec/webvtt/CSSGrammar.c"
    break;

  case 50: /* specifier_list: specifier  */
#line 403 "codec/webvtt/CSSGrammar.y"
              {
        (yyval.selector) = (yyvsp[0].selector);
    }
#line 2087 "codec/webvtt/CSSGrammar.c"
    break;

  case 51: /* specifier_list: specifier_list specifier  */
#line 406 "codec/webvtt/CSSGrammar.y"
                               {
        if( (yyvsp[-1].selector) )
        {
            (yyval.selector) = (yyvsp[-1].selector);
            while( (yyvsp[-1].selector)->specifiers.p_first )
                (yyvsp[-1].selector) = (yyvsp[-1].selector)->specifiers.p_first;
            if( (yyvsp[0].selector) )
                vlc_css_selector_AddSpecifier( (yyvsp[-1].selector), (yyvsp[0].selector) );
        }
        else (yyval.selector) = (yyvsp[0].selector);
    }
#line 2103 "codec/webvtt/CSSGrammar.c"
    break;

  case 52: /* specifier_list: specifier_list error  */
#line 417 "codec/webvtt/CSSGrammar.y"
                           {
        vlc_css_selectors_Delete( (yyvsp[-1].selector) );
        (yyval.selector) = NULL;
    }
#line 2112 "codec/webvtt/CSSGrammar.c"
    break;

  case 53: /* specifier: IDSEL  */
#line 424 "codec/webvtt/CSSGrammar.y"
          {
        if( !(yyvsp[0].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SPECIFIER_ID, (yyvsp[0].string) );
        if( !(yyval.selector) )
            YYNOMEM; // $1 destructor called
        free( (yyvsp[0].string) );
    }
#line 2128 "codec/webvtt/CSSGrammar.c"
    break;

  case 54: /* specifier: HASH  */
#line 436 "codec/webvtt/CSSGrammar.y"
         {
        if ( !(yyvsp[0].string) || ((yyvsp[0].string)[0] >= '0' && (yyvsp[0].string)[0] <= '9') )
        {
            (yyval.selector) = NULL;
            YYERROR; // $1 destructor called
        } else {
            (yyval.selector) = vlc_css_selector_New( SPECIFIER_ID, (yyvsp[0].string) );
            if( !(yyval.selector) )
                YYNOMEM;  // $1 destructor called
            free( (yyvsp[0].string) );
        }
    }
#line 2145 "codec/webvtt/CSSGrammar.c"
    break;

  case 58: /* class: '.' IDENT  */
#line 454 "codec/webvtt/CSSGrammar.y"
              {
        if( !(yyvsp[0].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SPECIFIER_CLASS, (yyvsp[0].string) );
        if( !(yyval.selector) )
            YYNOMEM; // $2 destructor called
        free( (yyvsp[0].string) );
    }
#line 2161 "codec/webvtt/CSSGrammar.c"
    break;

  case 59: /* attr_name: IDENT maybe_space  */
#line 468 "codec/webvtt/CSSGrammar.y"
                      {
        (yyval.string) = (yyvsp[-1].string);
    }
#line 2169 "codec/webvtt/CSSGrammar.c"
    break;

  case 60: /* attrib: '[' maybe_space attr_name ']'  */
#line 474 "codec/webvtt/CSSGrammar.y"
                                  {
        if( !(yyvsp[-1].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SPECIFIER_ATTRIB, (yyvsp[-1].string) );
        free( (yyvsp[-1].string) );
    }
#line 2183 "codec/webvtt/CSSGrammar.c"
    break;

  case 61: /* attrib: '[' maybe_space attr_name match maybe_space ident_or_string maybe_space ']'  */
#line 483 "codec/webvtt/CSSGrammar.y"
                                                                                  {
        if( !(yyvsp[-2].string) || !(yyvsp[-5].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SPECIFIER_ATTRIB, (yyvsp[-5].string) );
        if( !(yyval.selector) )
            YYNOMEM;
        (yyval.selector)->match = (yyvsp[-4].integer);
        (yyval.selector)->p_matchsel = vlc_css_selector_New( SPECIFIER_ID, (yyvsp[-2].string) );
        if ( !(yyval.selector)->p_matchsel )
        {
            vlc_css_selectors_Delete( (yyval.selector) );
            YYNOMEM;
        }
        free( (yyvsp[-5].string) );
        free( (yyvsp[-2].string) );
    }
#line 2207 "codec/webvtt/CSSGrammar.c"
    break;

  case 62: /* match: '='  */
#line 505 "codec/webvtt/CSSGrammar.y"
        {
        (yyval.integer) = MATCH_EQUALS;
    }
#line 2215 "codec/webvtt/CSSGrammar.c"
    break;

  case 63: /* match: INCLUDES  */
#line 508 "codec/webvtt/CSSGrammar.y"
               {
        (yyval.integer) = MATCH_INCLUDES;
    }
#line 2223 "codec/webvtt/CSSGrammar.c"
    break;

  case 64: /* match: DASHMATCH  */
#line 511 "codec/webvtt/CSSGrammar.y"
                {
        (yyval.integer) = MATCH_DASHMATCH;
    }
#line 2231 "codec/webvtt/CSSGrammar.c"
    break;

  case 65: /* match: BEGINSWITH  */
#line 514 "codec/webvtt/CSSGrammar.y"
                 {
        (yyval.integer) = MATCH_BEGINSWITH;
    }
#line 2239 "codec/webvtt/CSSGrammar.c"
    break;

  case 66: /* match: ENDSWITH  */
#line 517 "codec/webvtt/CSSGrammar.y"
               {
        (yyval.integer) = MATCH_ENDSWITH;
    }
#line 2247 "codec/webvtt/CSSGrammar.c"
    break;

  case 67: /* match: CONTAINS  */
#line 520 "codec/webvtt/CSSGrammar.y"
               {
        (yyval.integer) = MATCH_CONTAINS;
    }
#line 2255 "codec/webvtt/CSSGrammar.c"
    break;

  case 70: /* pseudo: ':' IDENT  */
#line 531 "codec/webvtt/CSSGrammar.y"
              {
        if( !(yyvsp[0].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SELECTOR_PSEUDOCLASS, (yyvsp[0].string) );
        if( !(yyval.selector) )
            YYNOMEM;
        free( (yyvsp[0].string) );
    }
#line 2271 "codec/webvtt/CSSGrammar.c"
    break;

  case 71: /* pseudo: ':' ':' IDENT  */
#line 542 "codec/webvtt/CSSGrammar.y"
                    {
        if( !(yyvsp[0].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }
        (yyval.selector) = vlc_css_selector_New( SELECTOR_PSEUDOELEMENT, (yyvsp[0].string) );
        if( !(yyval.selector) )
            YYNOMEM;
        free( (yyvsp[0].string) );
    }
#line 2287 "codec/webvtt/CSSGrammar.c"
    break;

  case 72: /* pseudo: ':' FUNCTION maybe_space maybe_unary_operator NUMBER maybe_space ')'  */
#line 554 "codec/webvtt/CSSGrammar.y"
                                                                           {
        if( !(yyvsp[-5].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }

        if(*(yyvsp[-5].string) != 0)
            (yyvsp[-5].string)[strlen((yyvsp[-5].string)) - 1] = 0;
        (yyval.selector) = vlc_css_selector_New( SELECTOR_PSEUDOCLASS, (yyvsp[-5].string) );
        if( !(yyval.selector) )
            YYNOMEM;
        (yyvsp[-2].term).val *= (yyvsp[-3].integer);

        free( (yyvsp[-5].string) );
        vlc_css_term_Clean( (yyvsp[-2].term) );
    }
#line 2309 "codec/webvtt/CSSGrammar.c"
    break;

  case 73: /* pseudo: ':' ':' FUNCTION maybe_space selector maybe_space ')'  */
#line 572 "codec/webvtt/CSSGrammar.y"
                                                            {
        if( !(yyvsp[-4].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }

        if(*(yyvsp[-4].string) != 0)
            (yyvsp[-4].string)[strlen((yyvsp[-4].string)) - 1] = 0;
        (yyval.selector) = vlc_css_selector_New( SELECTOR_PSEUDOELEMENT, (yyvsp[-4].string) );
        if( !(yyval.selector) )
            YYNOMEM;

        if( (yyvsp[-2].selector) )
        {
            vlc_css_selector_AddSpecifier( (yyval.selector), (yyvsp[-2].selector) );
            (yyvsp[-2].selector)->combinator = RELATION_SELF;
        }

        free( (yyvsp[-4].string) );
    }
#line 2335 "codec/webvtt/CSSGrammar.c"
    break;

  case 74: /* pseudo: ':' FUNCTION maybe_space IDENT maybe_space ')'  */
#line 594 "codec/webvtt/CSSGrammar.y"
                                                     {
        if( !(yyvsp[-4].string) )
        {
            (yyval.selector) = NULL;
            YYERROR;
        }

        if(*(yyvsp[-4].string) != 0)
            (yyvsp[-4].string)[strlen((yyvsp[-4].string)) - 1] = 0;
        (yyval.selector) = vlc_css_selector_New( SELECTOR_PSEUDOCLASS, (yyvsp[-4].string) );
        if( !(yyval.selector) )
            YYNOMEM;

        free( (yyvsp[-4].string) );
        free( (yyvsp[-2].string) );
    }
#line 2356 "codec/webvtt/CSSGrammar.c"
    break;

  case 75: /* declaration_list: declaration  */
#line 613 "codec/webvtt/CSSGrammar.y"
                {
        (yyval.declarationList) = (yyvsp[0].declaration);
    }
#line 2364 "codec/webvtt/CSSGrammar.c"
    break;

  case 76: /* declaration_list: decl_list declaration  */
#line 616 "codec/webvtt/CSSGrammar.y"
                            {
        (yyval.declarationList) = (yyvsp[-1].declarationList);
        if( (yyval.declarationList) )
            vlc_css_declarations_Append( (yyval.declarationList), (yyvsp[0].declaration) );
    }
#line 2374 "codec/webvtt/CSSGrammar.c"
    break;

  case 77: /* declaration_list: decl_list  */
#line 621 "codec/webvtt/CSSGrammar.y"
                {
        (yyval.declarationList) = (yyvsp[0].declarationList);
    }
#line 2382 "codec/webvtt/CSSGrammar.c"
    break;

  case 78: /* declaration_list: error invalid_block_list error  */
#line 624 "codec/webvtt/CSSGrammar.y"
                                     {
        (yyval.declarationList) = NULL;
    }
#line 2390 "codec/webvtt/CSSGrammar.c"
    break;

  case 79: /* declaration_list: error  */
#line 627 "codec/webvtt/CSSGrammar.y"
            {
        (yyval.declarationList) = NULL;
    }
#line 2398 "codec/webvtt/CSSGrammar.c"
    break;

  case 80: /* declaration_list: decl_list error  */
#line 630 "codec/webvtt/CSSGrammar.y"
                      {
        (yyval.declarationList) = (yyvsp[-1].declarationList);
    }
#line 2406 "codec/webvtt/CSSGrammar.c"
    break;

  case 81: /* declaration_list: decl_list invalid_block_list  */
#line 633 "codec/webvtt/CSSGrammar.y"
                                   {
        (yyval.declarationList) = (yyvsp[-1].declarationList);
    }
#line 2414 "codec/webvtt/CSSGrammar.c"
    break;

  case 82: /* decl_list: declaration ';' maybe_space  */
#line 639 "codec/webvtt/CSSGrammar.y"
                                {
        (yyval.declarationList) = (yyvsp[-2].declaration);
    }
#line 2422 "codec/webvtt/CSSGrammar.c"
    break;

  case 83: /* decl_list: declaration invalid_block_list maybe_space  */
#line 642 "codec/webvtt/CSSGrammar.y"
                                                 {
        vlc_css_declarations_Delete( (yyvsp[-2].declaration) );
        (yyval.declarationList) = NULL;
    }
#line 2431 "codec/webvtt/CSSGrammar.c"
    break;

  case 84: /* decl_list: declaration invalid_block_list ';' maybe_space  */
#line 646 "codec/webvtt/CSSGrammar.y"
                                                     {
        vlc_css_declarations_Delete( (yyvsp[-3].declaration) );
        (yyval.declarationList) = NULL;
    }
#line 2440 "codec/webvtt/CSSGrammar.c"
    break;

  case 85: /* decl_list: error ';' maybe_space  */
#line 650 "codec/webvtt/CSSGrammar.y"
                            {
        (yyval.declarationList) = NULL;
    }
#line 2448 "codec/webvtt/CSSGrammar.c"
    break;

  case 86: /* decl_list: error invalid_block_list error ';' maybe_space  */
#line 653 "codec/webvtt/CSSGrammar.y"
                                                     {
        (yyval.declarationList) = NULL;
    }
#line 2456 "codec/webvtt/CSSGrammar.c"
    break;

  case 87: /* decl_list: decl_list declaration ';' maybe_space  */
#line 656 "codec/webvtt/CSSGrammar.y"
                                            {
        if( (yyvsp[-3].declarationList) )
        {
            (yyval.declarationList) = (yyvsp[-3].declarationList);
            vlc_css_declarations_Append( (yyval.declarationList), (yyvsp[-2].declaration) );
        }
        else (yyval.declarationList) = (yyvsp[-2].declaration);
    }
#line 2469 "codec/webvtt/CSSGrammar.c"
    break;

  case 88: /* decl_list: decl_list error ';' maybe_space  */
#line 664 "codec/webvtt/CSSGrammar.y"
                                      {
        (yyval.declarationList) = (yyvsp[-3].declarationList);
    }
#line 2477 "codec/webvtt/CSSGrammar.c"
    break;

  case 89: /* decl_list: decl_list error invalid_block_list error ';' maybe_space  */
#line 667 "codec/webvtt/CSSGrammar.y"
                                                               {
        (yyval.declarationList) = (yyvsp[-5].declarationList);
    }
#line 2485 "codec/webvtt/CSSGrammar.c"
    break;

  case 90: /* declaration: property ':' maybe_space expr prio  */
#line 673 "codec/webvtt/CSSGrammar.y"
                                       {
        if( !(yyvsp[-4].string) || !(yyvsp[-1].expr) )
        {
            (yyval.declaration) = NULL;
            YYERROR;
        }
        (yyval.declaration) = vlc_css_declaration_New( (yyvsp[-4].string) );
        if( !(yyval.declaration) )
            YYNOMEM;
        (yyval.declaration)->expr = (yyvsp[-1].expr);
        free( (yyvsp[-4].string) );
    }
#line 2502 "codec/webvtt/CSSGrammar.c"
    break;

  case 91: /* declaration: property ':' maybe_space expr error  */
#line 685 "codec/webvtt/CSSGrammar.y"
                                          {
        /* e.g. color: red !important fail;  or color: red; garbage */
        free( (yyvsp[-4].string) );
        vlc_css_expression_Delete( (yyvsp[-1].expr) );
        (yyval.declaration) = NULL;
    }
#line 2513 "codec/webvtt/CSSGrammar.c"
    break;

  case 92: /* declaration: property ':' maybe_space error  */
#line 691 "codec/webvtt/CSSGrammar.y"
                                     {
        /* color: garbage */
        free( (yyvsp[-3].string) );
        (yyval.declaration) = NULL;
    }
#line 2523 "codec/webvtt/CSSGrammar.c"
    break;

  case 93: /* declaration: property error  */
#line 696 "codec/webvtt/CSSGrammar.y"
                     {
        /* color garbage */
        free( (yyvsp[-1].string) );
        (yyval.declaration) = NULL;
    }
#line 2533 "codec/webvtt/CSSGrammar.c"
    break;

  case 94: /* declaration: property ':' maybe_space  */
#line 701 "codec/webvtt/CSSGrammar.y"
                               {
        /* color: ; */
        free( (yyvsp[-2].string) );
        (yyval.declaration) = NULL;
    }
#line 2543 "codec/webvtt/CSSGrammar.c"
    break;

  case 95: /* declaration: property invalid_block  */
#line 706 "codec/webvtt/CSSGrammar.y"
                             {
        free( (yyvsp[-1].string) );
        (yyval.declaration) = NULL;
    }
#line 2552 "codec/webvtt/CSSGrammar.c"
    break;

  case 96: /* declaration: IMPORTANT_SYM maybe_space  */
#line 710 "codec/webvtt/CSSGrammar.y"
                                {
        /* stray !important */
        (yyval.declaration) = NULL;
    }
#line 2561 "codec/webvtt/CSSGrammar.c"
    break;

  case 97: /* property: IDENT maybe_space  */
#line 717 "codec/webvtt/CSSGrammar.y"
                      {
        (yyval.string) = (yyvsp[-1].string);
    }
#line 2569 "codec/webvtt/CSSGrammar.c"
    break;

  case 98: /* prio: IMPORTANT_SYM maybe_space  */
#line 723 "codec/webvtt/CSSGrammar.y"
                              { (yyval.boolean) = true; }
#line 2575 "codec/webvtt/CSSGrammar.c"
    break;

  case 99: /* prio: %empty  */
#line 724 "codec/webvtt/CSSGrammar.y"
                  { (yyval.boolean) = false; }
#line 2581 "codec/webvtt/CSSGrammar.c"
    break;

  case 100: /* expr: term  */
#line 728 "codec/webvtt/CSSGrammar.y"
         {
        (yyval.expr) = vlc_css_expression_New( (yyvsp[0].term) );
        if( !(yyval.expr) )
            YYNOMEM;
    }
#line 2591 "codec/webvtt/CSSGrammar.c"
    break;

  case 101: /* expr: expr term  */
#line 733 "codec/webvtt/CSSGrammar.y"
                {
        if( !(yyvsp[-1].expr) )
        {
            (yyval.expr) = NULL;
            YYERROR;
        }
        (yyval.expr) = (yyvsp[-1].expr);
        if( !vlc_css_expression_AddTerm( (yyvsp[-1].expr), ' ', (yyvsp[0].term) ) )
            YYNOMEM;
    }
#line 2606 "codec/webvtt/CSSGrammar.c"
    break;

  case 102: /* expr: expr operator maybe_space term  */
#line 743 "codec/webvtt/CSSGrammar.y"
                                     {
        if( !(yyvsp[-3].expr) )
        {
            (yyval.expr) = NULL;
            YYERROR;
        }
        (yyval.expr) = (yyvsp[-3].expr);
        if( !vlc_css_expression_AddTerm( (yyvsp[-3].expr), '/', (yyvsp[0].term) ) )
            YYNOMEM;
    }
#line 2621 "codec/webvtt/CSSGrammar.c"
    break;

  case 103: /* operator: '/' maybe_space  */
#line 756 "codec/webvtt/CSSGrammar.y"
                      {
          (yyval.character) = '/';
      }
#line 2629 "codec/webvtt/CSSGrammar.c"
    break;

  case 104: /* operator: ',' maybe_space  */
#line 759 "codec/webvtt/CSSGrammar.y"
                      {
          (yyval.character) = ',';
      }
#line 2637 "codec/webvtt/CSSGrammar.c"
    break;

  case 105: /* term: unary_term  */
#line 765 "codec/webvtt/CSSGrammar.y"
             { (yyval.term) = (yyvsp[0].term); }
#line 2643 "codec/webvtt/CSSGrammar.c"
    break;

  case 106: /* term: unary_operator unary_term  */
#line 766 "codec/webvtt/CSSGrammar.y"
                              {
      (yyval.term) = (yyvsp[0].term);
      (yyval.term).val *= (yyvsp[-1].integer);
  }
#line 2652 "codec/webvtt/CSSGrammar.c"
    break;

  case 107: /* term: STRING maybe_space  */
#line 770 "codec/webvtt/CSSGrammar.y"
                       { (yyval.term).type = TYPE_STRING; (yyval.term).psz = (yyvsp[-1].string); }
#line 2658 "codec/webvtt/CSSGrammar.c"
    break;

  case 108: /* term: IDENT maybe_space  */
#line 771 "codec/webvtt/CSSGrammar.y"
                      { (yyval.term).type = TYPE_IDENTIFIER; (yyval.term).psz = (yyvsp[-1].string); }
#line 2664 "codec/webvtt/CSSGrammar.c"
    break;

  case 109: /* term: DIMEN maybe_space  */
#line 773 "codec/webvtt/CSSGrammar.y"
                      { (yyval.term) = (yyvsp[-1].term); }
#line 2670 "codec/webvtt/CSSGrammar.c"
    break;

  case 110: /* term: unary_operator DIMEN maybe_space  */
#line 774 "codec/webvtt/CSSGrammar.y"
                                     { (yyval.term) = (yyvsp[-1].term); }
#line 2676 "codec/webvtt/CSSGrammar.c"
    break;

  case 111: /* term: URI maybe_space  */
#line 775 "codec/webvtt/CSSGrammar.y"
                    { (yyval.term).type = TYPE_URI; (yyval.term).psz = (yyvsp[-1].string); }
#line 2682 "codec/webvtt/CSSGrammar.c"
    break;

  case 112: /* term: UNICODERANGE maybe_space  */
#line 776 "codec/webvtt/CSSGrammar.y"
                             { (yyval.term).type = TYPE_UNICODERANGE; (yyval.term).psz = (yyvsp[-1].string); }
#line 2688 "codec/webvtt/CSSGrammar.c"
    break;

  case 113: /* term: IDSEL maybe_space  */
#line 777 "codec/webvtt/CSSGrammar.y"
                      { (yyval.term).type = TYPE_HEXCOLOR; (yyval.term).psz = (yyvsp[-1].string); }
#line 2694 "codec/webvtt/CSSGrammar.c"
    break;

  case 114: /* term: HASH maybe_space  */
#line 778 "codec/webvtt/CSSGrammar.y"
                     { (yyval.term).type = TYPE_HEXCOLOR; (yyval.term).psz = (yyvsp[-1].string); }
#line 2700 "codec/webvtt/CSSGrammar.c"
    break;

  case 115: /* term: '#' maybe_space  */
#line 779 "codec/webvtt/CSSGrammar.y"
                    { (yyval.term).type = TYPE_INVALID; }
#line 2706 "codec/webvtt/CSSGrammar.c"
    break;

  case 116: /* term: function  */
#line 781 "codec/webvtt/CSSGrammar.y"
             {
      (yyval.term) = (yyvsp[0].term);
  }
#line 2714 "codec/webvtt/CSSGrammar.c"
    break;

  case 117: /* term: '%' maybe_space  */
#line 784 "codec/webvtt/CSSGrammar.y"
                    { /* Handle width: %; */
      (yyval.term).type = TYPE_PERCENT; (yyval.term).val = 0;
  }
#line 2722 "codec/webvtt/CSSGrammar.c"
    break;

  case 124: /* function: FUNCTION maybe_space expr ')' maybe_space  */
#line 799 "codec/webvtt/CSSGrammar.y"
                                              {
        (yyval.term).type = TYPE_FUNCTION; (yyval.term).function = (yyvsp[-2].expr);
        (yyval.term).psz = (yyvsp[-4].string);
        if((yyvsp[-4].string) && *(yyval.term).psz != 0)
            (yyval.term).psz[strlen((yyval.term).psz) - 1] = 0;
    }
#line 2733 "codec/webvtt/CSSGrammar.c"
    break;

  case 125: /* function: FUNCTION maybe_space expr TOKEN_EOF  */
#line 805 "codec/webvtt/CSSGrammar.y"
                                        {
        (yyval.term).type = TYPE_FUNCTION; (yyval.term).function = (yyvsp[-1].expr); (yyval.term).psz = (yyvsp[-3].string);
        if((yyvsp[-3].string) && *(yyval.term).psz != 0)
            (yyval.term).psz[strlen((yyval.term).psz) - 1] = 0;
    }
#line 2743 "codec/webvtt/CSSGrammar.c"
    break;

  case 126: /* function: FUNCTION maybe_space ')' maybe_space  */
#line 810 "codec/webvtt/CSSGrammar.y"
                                         {
        (yyval.term).type = TYPE_FUNCTION; (yyval.term).function = NULL; (yyval.term).psz = (yyvsp[-3].string);
        if((yyvsp[-3].string) && *(yyval.term).psz != 0)
            (yyval.term).psz[strlen((yyval.term).psz) - 1] = 0;
    }
#line 2753 "codec/webvtt/CSSGrammar.c"
    break;

  case 127: /* function: FUNCTION maybe_space error  */
#line 815 "codec/webvtt/CSSGrammar.y"
                               {
        (yyval.term).type = TYPE_FUNCTION; (yyval.term).function = NULL; (yyval.term).psz = (yyvsp[-2].string);
        if((yyvsp[-2].string) && *(yyval.term).psz != 0)
            (yyval.term).psz[strlen((yyval.term).psz) - 1] = 0;
  }
#line 2763 "codec/webvtt/CSSGrammar.c"
    break;

  case 128: /* invalid_rule: error invalid_block  */
#line 825 "codec/webvtt/CSSGrammar.y"
                        {
        (yyval.rule) = NULL;
    }
#line 2771 "codec/webvtt/CSSGrammar.c"
    break;


#line 2775 "codec/webvtt/CSSGrammar.c"

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
  yytoken = yychar == CSSEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (scanner, css_parser, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= TOKEN_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == TOKEN_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, scanner, css_parser);
          yychar = CSSEMPTY;
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, scanner, css_parser);
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
  yyerror (scanner, css_parser, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != CSSEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, scanner, css_parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, scanner, css_parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 852 "codec/webvtt/CSSGrammar.y"


#ifdef YYDEBUG
    int yydebug=1;
#else
    int yydebug=0;
#endif
