#include <bits/stdc++.h>
using namespace std;
// TO make a string class of my own
//  using the herbert schiltz's book

class StrType
{
    char *p;
    int size;

public:
    StrType();
    StrType(char *str);
    StrType(const StrType &o);

    ~StrType() { delete[] p; }

    friend ostream &operator<<(ostream &stream, StrType &o);
    friend istream &operator>>(istream &stream, StrType &o);

    StrType operator=(StrType &o); // Assign a StrType Object
    StrType operator=(char *s);    // assign a quoted string

    StrType operator+(StrType &o);                 // concatenate the StrType Object
    StrType operator+(char *s);                    // concatenate a quoted string
    friend StrType operator+(char *s, StrType &o); // Concatenate the a quoted string

    StrType operator-(StrType &o); // Subract a string
    StrType operator-(char *s);    // Subract a quoted string

    // Relational Operations between StrType objects
    int operator==(StrType &o) { return !strcmp(p, o.p); }
    int operator!=(StrType &o) { return strcmp(p, o.p); }
    int operator>=(StrType &o) { return strcmp(p, o.p) >= 0; }
    int operator<=(StrType &o) { return strcmp(p, o.p) <= 0; }
    int operator<(StrType &o) { return strcmp(p, o.p) < 0; }
    int operator>(StrType &o) { return strcmp(p, o.p) > 0; }

    int strsize() { return strlen(p) ;} //return size of string
    void makestr(char *s) { strcpy(s,p);} // make quoted string

    operator char *() { return p; } // conversion to char*

};

StrType::StrType(){
    size = 1; // make room for null terminator
    try {
        p = new char[size];
    }
    catch (bad_alloc xa){
        cout<< "Allocation error" <<endl;
        exit(1);
    }
    strcpy(p,"");
}

// Initialize using a quoted string;
StrType::StrType(char *str){
    size = strlen(str) + 1; // making room for null terminator
    try{
        p = new char[size];
    }
    catch (bad_alloc xa){
        cout<< "Allocation error" << endl;
        exit(1);
    }
    strcpy(p,str);
}

//Initialize using a StrType Object
StrType::StrType(const StrType &o){
    size = o.size;
    try{
        p = new char[size];
    }
    catch (bad_alloc xa){
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(p,o.p);
}

//Output a string
ostream &operator<<(ostream &stream, StrType &o){
    stream << o.p;
    return stream;
}

//Input a string;
istream &operator>>(istream &stream, StrType &o){
    char t[255]; // arbitary size - change if necessary
    int len;

    stream.getline(t,255);
    len = strlen(t) + 1;

    if(len > o.size){
        delete [] o.p;
        try {
            o.p = new char[len];
        }
        catch (bad_alloc xa){
            cout<< "Allocation Error"<<endl;
            exit(1);
        }
        o.size = len;
    }
    strcpy(o.p,t);
    return stream;
}

// Assing a StrType object to a StrType Oject
StrType StrType::operator=(StrType &o){
    StrType temp(o.p);
    if(o.size> size) {
        delete [] p;
        try{
            p = new char[o.size];
        }
        catch (bad_alloc xa){
            cout<<"Allocation Error"<<endl;
            exit(1);
        }
    size = o.size;
    }
    strcpy(p,o.p);
    strcpy(temp.p,o.p);
    return temp;
}

//Assign a quoted string to a StrType Object
StrType StrType::operator=(char *s){
    int len = strlen(s)+1;
    if(size < len){
        delete [] p;
        try{
            p = new char[len];
        }
        catch (bad_alloc xa){
            cout<<"Allocation error"<<endl;
            exit(1);
        }
        size = len;
    }
    strcpy(p,s);
    return *this;
}

//Concatenate two StrType Objects
StrType StrType::operator+(StrType &o){
    int len;
    StrType temp;

    delete [] temp.p;
    len = strlen(o.p) + strlen(p) + 1;
    temp.size = len;
    try {
        temp.p = new char[len];
    }
    catch (bad_alloc xa){
        cout<< "Allocation error "<<endl;
        exit(1);
    }
    strcpy(temp.p,p);
    strcat(temp.p,o.p);
    return temp;
}

// Concatenate a StrType Object and a quoted string
StrType StrType::operator+(char *s){
    int len ;
    StrType temp;
    
    delete [] temp.p;
    len = strlen(s) + strlen(p) + 1;
    temp.size = len;
    try{
        temp.p = new char[len];
    }
    catch (bad_alloc xa){
        cout<<"Allocation Error"<<endl;
        exit(1);
    }
    strcpy(temp.p,p);
    strcat(temp.p,s);
    return temp;
}
 
// Conatenate a qouted strind and a StrType object
StrType operator+(char *s ,StrType &o){
    int len;
    StrType temp;

    delete [] temp.p;

    len=strlen(s) + strlen(o.p) + 1;
    temp.size = len;
    try{
        temp.p = new char[len];
    }
    catch (bad_alloc xa){
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    strcpy(temp.p,s);
    strcat(temp.p,o.p);
    return temp;
}

//Subract a substring from a string using StrType Object
StrType StrType::operator-(StrType &substr){
    StrType temp(p);
    char *s1;
    int i,j;
    s1 = p;
    for(i = 0 ; *s1 ; i++){
        if(*s1 != *substr.p){ //If not first letter of substring 
            temp.p[i] = *s1; // then copy into temp
            s1++;
        }
        else {
            for ( j = 0; substr.p[j] == s1[j] && substr.p[j]; j++);
            if(!substr.p[j]){
                s1 += j;
                i--;
            }
            else {
                temp.p[i] = *s1;
                s1++;
            }
        }
    }
    temp.p[i] = '\0';
    return temp;

}

//Subract Sqouted string froma strtype object
StrType StrType::operator-(char* substr){
    StrType temp(p);
    char *s1;
    int i,j;

    s1 = p;
    for(i = 0 ; *s1 ;i++){
        if(*s1 != *substr){
            temp.p[i] = *s1;
            s1++;
        }
        else{
            for(j = 0; substr[j]==s1[j] && substr[j] ; j++);
            if(!substr[j]){
                s1 += j;
                i--;
            }
            else{
                temp.p[i] = *s1;
                s1++;
            }
        }
    }
    temp.p[i] = '\0';
    return temp;
}

int main(int argc, char *argv[])
{
    StrType s1("A sample session using string object\n");
    StrType s2(s1);
    StrType s3;

    char s[80];
    cout<< s1 <<s2;
    s3 = s1;

    cout<<s1;

    s3.makestr(s);
    cout<<"Conver to string: "<<s;

    s2 = "I am a new string ";
    cout<<s2 << endl;

    StrType s4("So is this");
    s1 = s2 + s4;
    cout << s1 <<endl;

    if(s2 == s3) cout<< "Strings are equal" <<endl;
    if(s2!= s3) cout<<"Strings are not equal" <<endl;
    if(s1<s4) cout<< "s1 less than s4" <<endl;
    if(s1>s4) cout<<"s1 is greater than s4"<<endl;
    if(s1<=s4) cout<< "s1 less than or equal to s4" <<endl;
    if(s1>=s4) cout<<"s1 is greater than or equal to s4"<<endl;

    if(s2 > "ABC") cout<<"s2 is greater than ABC"<<endl;
    s1 = "one two three one two three\n";
    s2 = "two";
    cout<<"Initial Sring :"<< s1;
    cout <<"String after subtracting two:" ;
    s3 = s1 - s2;
    cout<< s3 <<endl;   

    cout<< endl;
    s4 = "Hi there !";
    s3 = s4 + "C++ strings are fun\n";
    cout<< s3;
    s3 = s3 - "Hi there !";
    s3 = "Aren't " + s3;
    cout<< s3;
    s1 = s3 - "are";
    cout<<s1;
    s3 = s1;

    cout<< "Enter a String: ";
    cin>> s1;
    cout<< s1 <<endl;
    cout<< "s1 is "<< s1.strsize()<<" charactes long\n";

    puts(s1);
    s1 = s2 = s3;
    cout<< s1 <<s2 <<s3<<endl;

    s1 = s2 = s3 = "Bye";
    cout<<s1 <<s2<<s3<<endl;

    return 0;
}