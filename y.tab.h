/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 27 "errorreport.y" /* yacc.c:1909  */

struct s1{char* code;int nextlist[40];} statement;
struct s2{char* code; char* addr;}expression ;
struct s3{int truelist[40]; int falselist[40];}boole ;
struct s4{int truelist[40]; int falselist[40]; char* tempval;}numb ;
struct s5{int instr;}inst;
struct s6{char* op;}rel;
struct s7{char* nulltype;}type;
char* chary;

#line 133 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
