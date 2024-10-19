%{
#include <stdio.h>
%}

%%
"int" {printf ("Keyword: %s\n",yytext); }
[0-9]+ {printf ("Number: %s\n",yytext); }
[ \t\n]+ { /* Skip Whitespace */ }
. {printf("Unkown: %s\n",yytext); }
%% 


int main(int argc , char** argv){

    yylex();
    return 0;
}



