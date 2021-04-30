%{
#include<stdio.h>
#include<string.h>
#include "y.tab.h"
int countnl=1;
int problem=0;
%}
%%
"puthutype" {return puthutype;}
"wholenum" {return whnum;}
"fraction" {return frac;}
"bigfraction" {return bigfrac;}
"irruku na" {return irrukuna;}
"word" {return word;}
"eppothume" {return eppothume;} 
"if" {return eppo;}
"enral" {return enral;}
"appo" {return appo;}
"eppovarilum" {return eppovarilum;}
"illati" {return illati;}
"unmai" {return unmai;}
"poi" {return poi;}
"matrum" {return matrum;}
"allathu" {return allathu;}
[\t]+ {return sp;}
[0-9]+ {return num;}
[%] {return perc;}
[&][&] {return andop;}
[\n] {countnl++;}
[!][!] {return not;}
[!][=] {return relop;}
[=][=] {return relop;}
[{] {return opcbr;}
[}] {return clcbr;}
[(] {return opbr;}
[)] {return clbr;}
[|][|] {return orop;}
[+] {return pl;}
[*] {return mul;}
[=] {return eq;}
[<=|>=|>|<] {return relop;}
[;] {return term;}
[a-zA-Z][0-9a-zA-Z]* {return id;}
[.] {printf("ERROR LEXICAL");exit(0);}
%%
int yywrap()
{
return 1;
}





