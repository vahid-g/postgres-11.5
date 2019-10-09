/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_BASE_YY_PREPROC_H_INCLUDED
# define YY_BASE_YY_PREPROC_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SQL_ALLOCATE = 258,
     SQL_AUTOCOMMIT = 259,
     SQL_BOOL = 260,
     SQL_BREAK = 261,
     SQL_CARDINALITY = 262,
     SQL_CONNECT = 263,
     SQL_COUNT = 264,
     SQL_DATETIME_INTERVAL_CODE = 265,
     SQL_DATETIME_INTERVAL_PRECISION = 266,
     SQL_DESCRIBE = 267,
     SQL_DESCRIPTOR = 268,
     SQL_DISCONNECT = 269,
     SQL_FOUND = 270,
     SQL_FREE = 271,
     SQL_GET = 272,
     SQL_GO = 273,
     SQL_GOTO = 274,
     SQL_IDENTIFIED = 275,
     SQL_INDICATOR = 276,
     SQL_KEY_MEMBER = 277,
     SQL_LENGTH = 278,
     SQL_LONG = 279,
     SQL_NULLABLE = 280,
     SQL_OCTET_LENGTH = 281,
     SQL_OPEN = 282,
     SQL_OUTPUT = 283,
     SQL_REFERENCE = 284,
     SQL_RETURNED_LENGTH = 285,
     SQL_RETURNED_OCTET_LENGTH = 286,
     SQL_SCALE = 287,
     SQL_SECTION = 288,
     SQL_SHORT = 289,
     SQL_SIGNED = 290,
     SQL_SQLERROR = 291,
     SQL_SQLPRINT = 292,
     SQL_SQLWARNING = 293,
     SQL_START = 294,
     SQL_STOP = 295,
     SQL_STRUCT = 296,
     SQL_UNSIGNED = 297,
     SQL_VAR = 298,
     SQL_WHENEVER = 299,
     S_ADD = 300,
     S_AND = 301,
     S_ANYTHING = 302,
     S_AUTO = 303,
     S_CONST = 304,
     S_DEC = 305,
     S_DIV = 306,
     S_DOTPOINT = 307,
     S_EQUAL = 308,
     S_EXTERN = 309,
     S_INC = 310,
     S_LSHIFT = 311,
     S_MEMPOINT = 312,
     S_MEMBER = 313,
     S_MOD = 314,
     S_MUL = 315,
     S_NEQUAL = 316,
     S_OR = 317,
     S_REGISTER = 318,
     S_RSHIFT = 319,
     S_STATIC = 320,
     S_SUB = 321,
     S_VOLATILE = 322,
     S_TYPEDEF = 323,
     CSTRING = 324,
     CVARIABLE = 325,
     CPP_LINE = 326,
     IP = 327,
     DOLCONST = 328,
     ECONST = 329,
     NCONST = 330,
     UCONST = 331,
     UIDENT = 332,
     IDENT = 333,
     FCONST = 334,
     SCONST = 335,
     BCONST = 336,
     XCONST = 337,
     Op = 338,
     ICONST = 339,
     PARAM = 340,
     TYPECAST = 341,
     DOT_DOT = 342,
     COLON_EQUALS = 343,
     EQUALS_GREATER = 344,
     LESS_EQUALS = 345,
     GREATER_EQUALS = 346,
     NOT_EQUALS = 347,
     ABORT_P = 348,
     ABSOLUTE_P = 349,
     ACCESS = 350,
     ACTION = 351,
     ADD_P = 352,
     ADMIN = 353,
     AFTER = 354,
     AGGREGATE = 355,
     ALL = 356,
     ALSO = 357,
     ALTER = 358,
     ALWAYS = 359,
     ANALYSE = 360,
     ANALYZE = 361,
     AND = 362,
     ANY = 363,
     ARRAY = 364,
     AS = 365,
     ASC = 366,
     ASSERTION = 367,
     ASSIGNMENT = 368,
     ASYMMETRIC = 369,
     AT = 370,
     ATTACH = 371,
     ATTRIBUTE = 372,
     AUTHORIZATION = 373,
     BACKWARD = 374,
     BEFORE = 375,
     BEGIN_P = 376,
     BETWEEN = 377,
     BIGINT = 378,
     BINARY = 379,
     BIT = 380,
     BOOLEAN_P = 381,
     BOTH = 382,
     BY = 383,
     CACHE = 384,
     CALL = 385,
     CALLED = 386,
     CASCADE = 387,
     CASCADED = 388,
     CASE = 389,
     CAST = 390,
     CATALOG_P = 391,
     CHAIN = 392,
     CHAR_P = 393,
     CHARACTER = 394,
     CHARACTERISTICS = 395,
     CHECK = 396,
     CHECKPOINT = 397,
     CLASS = 398,
     CLOSE = 399,
     CLUSTER = 400,
     COALESCE = 401,
     COLLATE = 402,
     COLLATION = 403,
     COLUMN = 404,
     COLUMNS = 405,
     COMMENT = 406,
     COMMENTS = 407,
     COMMIT = 408,
     COMMITTED = 409,
     CONCURRENTLY = 410,
     CONFIGURATION = 411,
     CONFLICT = 412,
     CONNECTION = 413,
     CONSTRAINT = 414,
     CONSTRAINTS = 415,
     CONTENT_P = 416,
     CONTINUE_P = 417,
     CONVERSION_P = 418,
     COPY = 419,
     COST = 420,
     CREATE = 421,
     CROSS = 422,
     CSV = 423,
     CUBE = 424,
     CURRENT_P = 425,
     CURRENT_CATALOG = 426,
     CURRENT_DATE = 427,
     CURRENT_ROLE = 428,
     CURRENT_SCHEMA = 429,
     CURRENT_TIME = 430,
     CURRENT_TIMESTAMP = 431,
     CURRENT_USER = 432,
     CURSOR = 433,
     CYCLE = 434,
     DATA_P = 435,
     DATABASE = 436,
     DAY_P = 437,
     DEALLOCATE = 438,
     DEC = 439,
     DECIMAL_P = 440,
     DECLARE = 441,
     DEFAULT = 442,
     DEFAULTS = 443,
     DEFERRABLE = 444,
     DEFERRED = 445,
     DEFINER = 446,
     DELETE_P = 447,
     DELIMITER = 448,
     DELIMITERS = 449,
     DEPENDS = 450,
     DESC = 451,
     DETACH = 452,
     DICTIONARY = 453,
     DISABLE_P = 454,
     DISCARD = 455,
     DISTINCT = 456,
     DO = 457,
     DOCUMENT_P = 458,
     DOMAIN_P = 459,
     DOUBLE_P = 460,
     DROP = 461,
     EACH = 462,
     ELSE = 463,
     ENABLE_P = 464,
     ENCODING = 465,
     ENCRYPTED = 466,
     END_P = 467,
     ENUM_P = 468,
     ESCAPE = 469,
     EVENT = 470,
     EXCEPT = 471,
     EXCLUDE = 472,
     EXCLUDING = 473,
     EXCLUSIVE = 474,
     EXECUTE = 475,
     EXISTS = 476,
     EXPLAIN = 477,
     EXTENSION = 478,
     EXTERNAL = 479,
     EXTRACT = 480,
     FALSE_P = 481,
     FAMILY = 482,
     FETCH = 483,
     FILTER = 484,
     FIRST_P = 485,
     FLOAT_P = 486,
     FOLLOWING = 487,
     FOR = 488,
     FORCE = 489,
     FOREIGN = 490,
     FORWARD = 491,
     FREEZE = 492,
     FROM = 493,
     FULL = 494,
     FUNCTION = 495,
     FUNCTIONS = 496,
     GENERATED = 497,
     GLOBAL = 498,
     GRANT = 499,
     GRANTED = 500,
     GREATEST = 501,
     GROUP_P = 502,
     GROUPING = 503,
     GROUPS = 504,
     HANDLER = 505,
     HAVING = 506,
     HEADER_P = 507,
     HOLD = 508,
     HOUR_P = 509,
     IDENTITY_P = 510,
     IF_P = 511,
     ILIKE = 512,
     IMMEDIATE = 513,
     IMMUTABLE = 514,
     IMPLICIT_P = 515,
     IMPORT_P = 516,
     IN_P = 517,
     INCLUDE = 518,
     INCLUDING = 519,
     INCREMENT = 520,
     INDEX = 521,
     INDEXES = 522,
     INHERIT = 523,
     INHERITS = 524,
     INITIALLY = 525,
     INLINE_P = 526,
     INNER_P = 527,
     INOUT = 528,
     INPUT_P = 529,
     INSENSITIVE = 530,
     INSERT = 531,
     INSTEAD = 532,
     INT_P = 533,
     INTEGER = 534,
     INTERSECT = 535,
     INTERVAL = 536,
     INTO = 537,
     INVOKER = 538,
     IS = 539,
     ISNULL = 540,
     ISOLATION = 541,
     JOIN = 542,
     KEY = 543,
     LABEL = 544,
     LANGUAGE = 545,
     LARGE_P = 546,
     LAST_P = 547,
     LATERAL_P = 548,
     LEADING = 549,
     LEAKPROOF = 550,
     LEAST = 551,
     LEFT = 552,
     LEVEL = 553,
     LIKE = 554,
     LIMIT = 555,
     LISTEN = 556,
     LOAD = 557,
     LOCAL = 558,
     LOCALTIME = 559,
     LOCALTIMESTAMP = 560,
     LOCATION = 561,
     LOCK_P = 562,
     LOCKED = 563,
     LOGGED = 564,
     MAPPING = 565,
     MATCH = 566,
     MATERIALIZED = 567,
     MAXVALUE = 568,
     METHOD = 569,
     MINUTE_P = 570,
     MINVALUE = 571,
     MODE = 572,
     MONTH_P = 573,
     MOVE = 574,
     NAME_P = 575,
     NAMES = 576,
     NATIONAL = 577,
     NATURAL = 578,
     NCHAR = 579,
     NEW = 580,
     NEXT = 581,
     NO = 582,
     NONE = 583,
     NOT = 584,
     NOTHING = 585,
     NOTIFY = 586,
     NOTNULL = 587,
     NOWAIT = 588,
     NULL_P = 589,
     NULLIF = 590,
     NULLS_P = 591,
     NUMERIC = 592,
     OBJECT_P = 593,
     OF = 594,
     OFF = 595,
     OFFSET = 596,
     OIDS = 597,
     OLD = 598,
     ON = 599,
     ONLY = 600,
     OPERATOR = 601,
     OPTION = 602,
     OPTIONS = 603,
     OR = 604,
     ORDER = 605,
     ORDINALITY = 606,
     OTHERS = 607,
     OUT_P = 608,
     OUTER_P = 609,
     OVER = 610,
     OVERLAPS = 611,
     OVERLAY = 612,
     OVERRIDING = 613,
     OWNED = 614,
     OWNER = 615,
     PARALLEL = 616,
     PARSER = 617,
     PARTIAL = 618,
     PARTITION = 619,
     PASSING = 620,
     PASSWORD = 621,
     PLACING = 622,
     PLANS = 623,
     POLICY = 624,
     POSITION = 625,
     PRECEDING = 626,
     PRECISION = 627,
     PRESERVE = 628,
     PREPARE = 629,
     PREPARED = 630,
     PRIMARY = 631,
     PRIOR = 632,
     PRIVILEGES = 633,
     PROCEDURAL = 634,
     PROCEDURE = 635,
     PROCEDURES = 636,
     PROGRAM = 637,
     PUBLICATION = 638,
     QUOTE = 639,
     RANGE = 640,
     READ = 641,
     REAL = 642,
     REASSIGN = 643,
     RECHECK = 644,
     RECURSIVE = 645,
     REF = 646,
     REFERENCES = 647,
     REFERENCING = 648,
     REFRESH = 649,
     REINDEX = 650,
     RELATIVE_P = 651,
     RELEASE = 652,
     RENAME = 653,
     REPEATABLE = 654,
     REPLACE = 655,
     REPLICA = 656,
     RESET = 657,
     RESTART = 658,
     RESTRICT = 659,
     RETURNING = 660,
     RETURNS = 661,
     REVOKE = 662,
     RIGHT = 663,
     ROLE = 664,
     ROLLBACK = 665,
     ROLLUP = 666,
     ROUTINE = 667,
     ROUTINES = 668,
     ROW = 669,
     ROWS = 670,
     RULE = 671,
     SAVEPOINT = 672,
     SCHEMA = 673,
     SCHEMAS = 674,
     SCROLL = 675,
     SEARCH = 676,
     SECOND_P = 677,
     SECURITY = 678,
     SELECT = 679,
     SEQUENCE = 680,
     SEQUENCES = 681,
     SERIALIZABLE = 682,
     SERVER = 683,
     SESSION = 684,
     SESSION_USER = 685,
     SET = 686,
     SETS = 687,
     SETOF = 688,
     SHARE = 689,
     SHOW = 690,
     SIMILAR = 691,
     SIMPLE = 692,
     SKIP = 693,
     SMALLINT = 694,
     SNAPSHOT = 695,
     SOME = 696,
     SQL_P = 697,
     STABLE = 698,
     STANDALONE_P = 699,
     START = 700,
     STATEMENT = 701,
     STATISTICS = 702,
     STDIN = 703,
     STDOUT = 704,
     STORAGE = 705,
     STRICT_P = 706,
     STRIP_P = 707,
     SUBSCRIPTION = 708,
     SUBSTRING = 709,
     SYMMETRIC = 710,
     SYSID = 711,
     SYSTEM_P = 712,
     TABLE = 713,
     TABLES = 714,
     TABLESAMPLE = 715,
     TABLESPACE = 716,
     TEMP = 717,
     TEMPLATE = 718,
     TEMPORARY = 719,
     TEXT_P = 720,
     THEN = 721,
     TIES = 722,
     TIME = 723,
     TIMESTAMP = 724,
     TO = 725,
     TRAILING = 726,
     TRANSACTION = 727,
     TRANSFORM = 728,
     TREAT = 729,
     TRIGGER = 730,
     TRIM = 731,
     TRUE_P = 732,
     TRUNCATE = 733,
     TRUSTED = 734,
     TYPE_P = 735,
     TYPES_P = 736,
     UNBOUNDED = 737,
     UNCOMMITTED = 738,
     UNENCRYPTED = 739,
     UNION = 740,
     UNIQUE = 741,
     UNKNOWN = 742,
     UNLISTEN = 743,
     UNLOGGED = 744,
     UNTIL = 745,
     UPDATE = 746,
     USER = 747,
     USING = 748,
     VACUUM = 749,
     VALID = 750,
     VALIDATE = 751,
     VALIDATOR = 752,
     VALUE_P = 753,
     VALUES = 754,
     VARCHAR = 755,
     VARIADIC = 756,
     VARYING = 757,
     VERBOSE = 758,
     VERSION_P = 759,
     VIEW = 760,
     VIEWS = 761,
     VOLATILE = 762,
     WHEN = 763,
     WHERE = 764,
     WHITESPACE_P = 765,
     WINDOW = 766,
     WITH = 767,
     WITHIN = 768,
     WITHOUT = 769,
     WORK = 770,
     WRAPPER = 771,
     WRITE = 772,
     XML_P = 773,
     XMLATTRIBUTES = 774,
     XMLCONCAT = 775,
     XMLELEMENT = 776,
     XMLEXISTS = 777,
     XMLFOREST = 778,
     XMLNAMESPACES = 779,
     XMLPARSE = 780,
     XMLPI = 781,
     XMLROOT = 782,
     XMLSERIALIZE = 783,
     XMLTABLE = 784,
     YEAR_P = 785,
     YES_P = 786,
     ZONE = 787,
     NOT_LA = 788,
     NULLS_LA = 789,
     WITH_LA = 790,
     POSTFIXOP = 791,
     UMINUS = 792
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 581 "preproc.y"

	double	dval;
	char	*str;
	int		ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
	struct	prep		prep;


/* Line 2058 of yacc.c  */
#line 610 "preproc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE base_yylval;
extern YYLTYPE base_yylloc;
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int base_yyparse (void *YYPARSE_PARAM);
#else
int base_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int base_yyparse (void);
#else
int base_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_BASE_YY_PREPROC_H_INCLUDED  */
