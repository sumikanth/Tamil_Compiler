# Tamil_Compiler
 Three address code generation with novel syntax features

Project Features: 

Language and Syntax Description:

Booleans
unmai - true
poi - false

Conditional Statements

If...else
enral( condition ){
....
}
illati{
}
If
eppo (condition) {

}
IF CURLY BRACKET IS NOT USED, ONLY THE FIRST STATEMENT WILL BE CONSIDERED FOR THE STATEMENTS, JUST LIKE IN C, FOR BOTH CONDITIONS AND LOOPS.
Loops
eppothume{ } => while(1) {....}
eppovarilum( condition ){ } => while(condition){ }
num * {.......} => Repeat statements enclosed in {....} num times.
E.g.
5 * { x=x+y; } means that the statement 'x=x+y' must be executed five times.

Relational Operators
!= (not equals)
!! (not)
|| (or)
< (less than)
> (greater than)
&& (and)
irruku na - it means "not equals null"

Supported expression formats:
id = E + E;
id = E * E;


How to Run:
Converts high level code written in Tamil to three address form.
1. Run using the commands :
lex errorreport.l
yacc errorreport.y
gcc y.tab.c -w
./a.out
To see output, open the file outp.c
Input is given by inp1.txt
2. If you modify the inp1 file in an erroneous way, it will display the error in command prompt with line number. You can also view the error file errfile.c if you want to see which part of the code you need to change (will be given a version of code with comments at the part that needs to be changed).