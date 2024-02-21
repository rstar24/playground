#include <bits/stdc++.h>
using namespace std;
//An expression Parser (Generic)
//Inspired from the Herbert Schildt


enum types { DELIMITER = 1 , VARIABLE , NUMBER};

const int NUMVARS = 26;

template <class Ptype> class parser {
    char *exp_ptr; // points to expresssion
    char token[80]; // holds current token
    char tok_type; // holds token's type
    Ptype vars[NUMVARS]; // holds variable's values
    
    void eval_exp1(Ptype &result);
    void eval_exp2(Ptype &result);
    void eval_exp3(Ptype &result);
    void eval_exp4(Ptype &result);
    void eval_exp5(Ptype &result);
    void eval_exp6(Ptype &result);

    void atom(Ptype &result);
    void get_token();
    void serror(int error);
    int isdelim(char c);
    Ptype find_var(char *s);

    public:
        parser();
        Ptype eval_exp(char *exp);
};

// Parser Constructor
template <class Ptype> parser<Ptype>::parser(){
    int i;
    exp_ptr = NULL;
    for(i = 0 ; i < NUMVARS ; i++) vars[i] = (Ptype) 0;
}

// Parser entry point
template <class Ptype>Ptype parser<Ptype>::eval_exp(char *exp){
    Ptype result;
    exp_ptr = exp;

    get_token();
    if(!*token){
        serror(2); // no expression present
        return 0.0;
    }
    eval_exp2(result);
    if(*token) serror(0); // last token must be null
    return result;
}

// Process an assigment 
template <class Ptype> void parser<Ptype>::eval_exp1(Ptype &reuslt){
    int slot;
    char ttok_type;
    char temp_token[80];

    if(tok_type == VARIABLE) {
        // save old token
        strcpy(temp_token,token);
        ttok_type = tok_type;
        //compute the index of the variable
        slot = toupper(*token) - 'A';

        get_token();
        if(*token != '='){
            putback(); // return current token
            // restore old token - not assignment 
            strcpy(token,temp_token);
            tok_type = ttok_type;
        }
        else {
            get_token(); // get next part of exp
            eval_exp2(result);
            vars[slot] = result;
            return;       
        }
    }

    eval_exp2(result);
}

// Add or subract two terms
template <class Ptype> void parser<Ptype>::eval_exp2(double &result){
    register char op;
    Ptype temp;

    eval_exp3(result);
    while((op = *token) == '+' || op == '-'){
        get_token();
        eval_exp3(temp);
        switch(op){
            case '-':
                result = result - temp;
            case '+':
                result = result + temp;
                break;
        }
    }
}

// Multiply or divide two factors
template <class Ptype>void parser<Ptype>::eval_exp3(double &result){
    register char op;
    Ptype temp;

    eval_exp4(result);
    while((op = *token ) == '*' || op =='/' || op == '%'){
        get_token();
        eval_exp4(temp);
        switch(op){
            case '*':
                result = result * temp;
                break;
            case '/':
                result = result / temp;
                break;
            case '%':
                result = (int) result % (int) temp;
                break;
        }
    }    
}

// Process and exponent 
template <class Ptype>void parser<Ptype>::eval_exp4(double &result){
    Ptype temp, ex;
    register int t;

    eval_exp5(result);
    if(*token=='^'){
        get_token();
        eval_exp4(temp);
        ex = result;
        if(temp == 0.0){
            result = 1.0;
            return;
        }
        for(t = (int) temp-1;t > 0 ; --t) result = result * (double) ex;
    }
}

// Evalute a unary + or -
template <class Ptype>void parser<Ptype>::eval_exp5(double &result){
    register char op;
    op = 0 ;
    if((tok_type == DELIMITER) && *token == '+' || *token =='-' ){
        op = *token;
        get_token();
    }
    eval_exp6(result);
    if(op == '-') result = -result;
}

// Process a parenthesized expression
template <class Ptype>void parser<Ptype>::eval_exp6(double &result){
    if((*token == '(')){
        get_token();
        eval_exp2(result);
        if(*token != ')') serror(1);
        get_token();
    }
    else atom(result);
}

// Get the value of a number
template <class Ptype>void parser::atom(double &result){

    switch(tok_type){
        case VARIABLE:
            result = find_var(token);
            get_token();
            return;
        case NUMBER:
            result = atof(token);
            get_token();
            return;
        default:
            serror(0);
    }
}

// Return a token to the input stream
template <class Ptype> void parser<Ptype>::putback()
{
    char *t;
    t = token;
    for(; *t;t++) exp_ptr--;
}

// Display a syntax error 
template <class Ptype>void parser<Ptype>::serror(int error){
    static char *e[] = {
        "Systax Error",
        "Unbalanced Paranthesis",
        "No expression Present"
    };
    cout << e[error] << endl;
}

// Obtain the next token
template <class Ptype> void parser<Ptype>::get_token(){
    register char *temp;

    tok_type = 0;
    temp = token;
    *temp = '\0';

    if(!exp_ptr) return; // at end of expression

    while(isspace(*exp_ptr)) ++exp_ptr; // skip over the space

    if(strchr("+-*/%^=()",*exp_ptr)){
        tok_type = DELIMITER;

        // advance to next char
        *temp++ = *exp_ptr++;
    }
    else if(isdigit(*exp_ptr)){
        while(!isdelim(*exp_ptr)) *temp++ = *exp_ptr++;
        tok_type = NUMBER;
    }
    *temp = '\0';
}

// Return true if c is a delimiter
template <class Ptype>int parser<Ptype>::isdelim(char c){
    if(strchr("+-/*%^()",c) || c==9 || c=='\r' || c==0)
        return 1;
    return 0;
}

//Return the value of variable 
template <class Ptype> Ptype parser<Ptype>::find_var(char *s){
    if(!isalpha(*s)){
        serror(1);
        return (Ptype) 0;
    }
    return vars[toupper(*token)-'A'];
}

int main(int argc, char *argv[]){
    char expstr[80];
    cout << "Enter the expression : ";
    // Floating point parser
    parser<double> ob;
    cout<< "Floating-point Parser";
    cout<< "Enter a period to stop\n";
    
    for(;;){
        cin.getline(expstr, 79);
        if (*expstr == '.')
            break;
        cout << "Anser is " << ob.eval_exp(expstr) <<"\n\n";
    }
    cout<<endl;

    // Integer parser
    parser<int> Iob;
    cout<< "Integer Parser";
    cout<< "Enter a period to stop\n";
    
    for(;;){
        cin.getline(expstr, 79);
        if (*expstr == '.')
            break;
        cout << "Anser is " << Iob.eval_exp(expstr) <<"\n\n";
    }
    cout<<endl;

    return 0;
}
