%{
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
%}
%union{
struct s1{char* code;int nextlist[40];} statement;
struct s2{char* code; char* addr;}expression ;
struct s3{int truelist[40]; int falselist[40];}boole ;
struct s4{int truelist[40]; int falselist[40]; char* tempval;}numb ;
struct s5{int instr;}inst;
struct s6{char* op;}rel;
struct s7{char* nulltype;}type;
char* chary;
}
%type<statement> S
%type<statement> N 
%type<statement> L
%type<expression> E
%type<boole> B
%type<numb> NUM P
%type<chari> id
%type<rel> REL 
%type<type> T
%type<inst> M
%left pl allathu orop
%left mul matrum andop clbr perc illati
%right not opbr
%token puthutype whnum frac bigfrac word eppo appo eppovarilum illati id pl term eq mul unmai poi matrum allathu relop sp andop orop opbr clbr not perc enral opcbr clcbr num eppothume irrukuna
%%
K: F {
int i=0;
while(i<in)
{
fprintf(yyout,"%d %s \n",i,instrlist[i]);
i++;
}
};
F: S
| F S; 
REL: relop {strcpy(ops[o].name,yytext);
$$.op=ops[o].name;
o++;};
T: whnum { $$.nulltype="0";}
| frac {$$.nulltype="0.0";}
| bigfrac {$$.nulltype="0.000";}
| word {$$.nulltype="NULL";}
;
P: T pl E {                
char tempo[60];
strcpy(tempo,"if ");
strcat(tempo,$3.addr);
strcat(tempo," !=");
strcat(tempo,$1.nulltype);
strcat(tempo," goto ");
$$.truelist[0]=in;
$$.truelist[1]=0;
strcpy(instrlist[in++],tempo);
char hempo[60];
strcpy(hempo,"goto ");
$$.falselist[0]=in;
$$.falselist[1]=0;
strcpy(instrlist[in++],hempo);
}
;
B: unmai {$$.truelist[0]=in; 
$$.truelist[1]=0;
char tempo[20]; 
strcpy(tempo,"goto");
strcpy(instrlist[in++],tempo);
}
|B andop M B {
backpatch($1.truelist,$3.instr);
merge($1.falselist,$4.falselist,$$.falselist);
copy($$.truelist,$4.truelist);
}
|B orop M B {
backpatch($1.falselist,$3.instr);
merge($1.truelist,$4.truelist,$$.truelist);
copy($$.falselist,$4.falselist);
}
|not B{
copy($$.truelist,$2.falselist);
copy($$.falselist,$2.truelist);
}
|opbr B clbr{
copy($$.truelist,$2.truelist);
copy($$.falselist,$2.falselist);
}
|poi {$$.falselist[0]=in;
$$.falselist[1]=0; 
char tempo[20]; 
strcpy(tempo,"goto");
strcpy(instrlist[in++],tempo);
}
|E REL E {$$.truelist[0]=in;
$$.truelist[1]=0;
$$.falselist[0]=in+1;
$$.falselist[1]=0;
char tempo[100];
strcpy(tempo, "if ");
strcat(tempo, $1.addr);
strcat(tempo, $2.op);
strcat(tempo, $3.addr);
strcat(tempo, " ");
strcat(tempo, "goto ");
strcpy(instrlist[in++],tempo);
strcpy(tempo, "goto ");
strcpy(instrlist[in++],tempo);
};
NUM: num {
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
$$.tempval=sym[y].name;
x++; 
strcat(temp,"=");
strcat(temp,sym[y-1].name); 
y++;
strcpy(instrlist[in++],temp);
char tempo[60];
strcpy(tempo,"if t");
strcat(tempo,$$.tempval);
strcat(tempo,">0 goto ");
$$.truelist[0]=in;
$$.truelist[1]=0;
strcpy(instrlist[in++],tempo);
char hempo[60];
strcpy(hempo,"goto ");
$$.falselist[0]=in;
$$.falselist[1]=0;
strcpy(instrlist[in++],hempo);
}
;
M:{$$.instr=in;};
S:eppo opbr B clbr M S{
backpatch($3.truelist,$5.instr);
merge($3.falselist,$6.nextlist,$$.nextlist);
}
|enral opbr B clbr M S N M S M{
backpatch($3.truelist,$5.instr);
backpatch($3.falselist,$8.instr);
int temp[100];
merge($6.nextlist,$7.nextlist,temp);
merge(temp,$9.nextlist,$$.nextlist);
backpatch($7.nextlist,$10.instr);
}
|eppovarilum M opbr B clbr M S M{
backpatch($7.nextlist,$2.instr);
backpatch($4.truelist,$6.instr);
backpatch($4.falselist,$8.instr+1);
char temp[20];
strcpy(temp,"goto ");
char inte[10];
snprintf(inte,10,"%d",$2.instr);
strcat(temp,inte);
strcpy(instrlist[in++],temp);
}
|eppothume M S{
char temp[20];
strcpy(temp,"goto ");
char inte[10];
snprintf(inte,10,"%d",$2.instr);
strcat(temp,inte);
strcpy(instrlist[in++],temp);
}
|M NUM mul M opcbr L clcbr M {
backpatch($2.truelist,$4.instr);
char tempo[30];
strcpy(tempo,"t");
strcat(tempo,$2.tempval);
strcat(tempo,"=");
strcat(tempo,"t");
strcat(tempo,$2.tempval);
strcat(tempo,"-1");
strcpy(instrlist[in++],tempo);
char hempo[30];
strcpy(hempo,"goto ");
char inte[10];
snprintf(inte,10,"%d",$1.instr+1);
strcat(hempo,inte);
strcpy(instrlist[in++],hempo);
backpatch($2.falselist,$8.instr+2);
}
|M opbr P pl irrukuna clbr M opcbr L clcbr M { //(wholenum+x+irruku na){f=f+g;}
backpatch($3.truelist,$7.instr);
char hempo[30];
strcpy(hempo,"goto ");
char inte[10];
snprintf(inte,10,"%d",$1.instr);
strcat(hempo,inte);
strcpy(instrlist[in++],hempo);
backpatch($3.falselist,$11.instr+1);
}
|opcbr L clcbr {
copy($$.nextlist,$2.nextlist);
} 
|E eq E term {
char tempo[20];
strcpy(tempo,$1.addr);
strcat(tempo,"=");
strcat(tempo,$3.addr);
strcpy(instrlist[in++],tempo);
x++;
$$.nextlist[0]=in;$$.nextlist[1]=0;};
N:illati{$$.nextlist[0]=in;
$$.nextlist[1]=0;
char gen[100];
strcpy(gen,"goto ");
strcpy(instrlist[in++],gen);
};
L: L M S {
//backpatch($1.nextlist,$2.instr);
copy($$.nextlist,$3.nextlist);
}
| S {
copy($$.nextlist,$1.nextlist);
}
;
E: E mul E {
$$.addr="t";
char temp[100];
strcpy(temp,$$.addr);
char inte[10];
snprintf(inte,10,"%d",x);
strcat(temp,inte);
$$.addr=temp;
char s[100];
strcpy(s,$1.code);
strcpy(s,$3.code);
char gen[100];
strcpy(gen,$$.addr);
strcat(gen,"=");
strcat(gen,$1.addr);
strcat(gen,"*");
strcat(gen,$3.addr);
strcat(s,gen);
$$.code=s;
strcpy(instrlist[in++],s);
}
|E pl E {
$$.addr="t";
char temp[100];
strcpy(temp,$$.addr);
char inte[10];
snprintf(inte,10,"%d",x);
strcat(temp,inte);
$$.addr=temp;
char s[100];
strcpy(s,$1.code);
strcpy(s,$3.code);
char gen[100];
strcpy(gen,$$.addr);
strcat(gen,"=");
strcat(gen,$1.addr);
strcat(gen,"+");
strcat(gen,$3.addr);
strcat(s,gen);
$$.code=s;
strcpy(instrlist[in++],s);
}
|id {
strcpy(sym[y].name,yytext);
$$.addr=sym[y].name;
$$.code="";
y++;
};
%%
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



