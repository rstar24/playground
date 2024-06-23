#include <bits/stdc++.h>
using namespace std;

// For checking if the
// given string contains any uppercase
// character or not 
bool islowercase(string str);

// For making sure all the number 
// are in the start or prefix of the password
bool isdigitrulefollowed(string str);


// To check if all the digits are in
// non decreasing order
bool isdigitsorted(string str);

// To check if all the characters in 
// the password are in a non deacreasing
// order
bool islettersorted(string str);

void answerfunc(string str);

int main(int argc, char *argv[]){

    // Input processing 
    int a ;
    cin >> a;
    vector<string> inputstrings;
    for (int i = 0 ; i< a ;i++){
        int temp;
        string str;
        cin >> temp;
        cin >> str;
        inputstrings.push_back(str);
    }

    for (int i = 0 ; i< a ;i++){
        answerfunc(inputstrings[i]);
    }


//     5
// 4
// 12ac
// 5
// 123wa
// 9
// allllmost
// 5
// ac123
// 6
// 011679


    // Here
    // string s1("Test");
    // string s2("test");
    // string s3("testThismy bitch ");
    // string s4("1234");
    // string s5("1234Test");
    // string s6("1234test");
    // string s7("1a1a");
    // string s8("1a1a218");
    // string s9("abcde");
    // string s10("aabbcc");
    // string s11("bad");
    // string s12("abdcad");
    

    // Testing the islowercase 
    // cout << islowercase(s1)<<endl;
    // cout << islowercase(s2)<<endl;
    // cout << islowercase(s3)<<endl;
    // cout << islowercase(s4)<<endl;
    // cout << islowercase(s5)<<endl;
    // cout << islowercase(s6)<<endl;

    // cout << endl;
    // cout << "digit rule main "<< endl;
    // // output should be 1 
    // cout << s6 <<endl;
    // cout << isdigitrulefollowed(s6) <<endl;
    // // output should be 0
    // cout<< s8 <<endl;
    // cout << isdigitrulefollowed(s8) <<endl;
    // cout<< s9 <<endl;
    // cout
    // cout << isdigitrulefollowed(s9) <<endl;
    // cout << endl;

    
    
    
    // cout << "digit rule non decreasing order "<< endl;
    // cout<< s6 << endl;
    // // output should be 1 
    // cout << isdigitsorted(s6) <<endl;
    // // output should be 0
    // cout << s7 <<endl;
    // cout << isdigitsorted(s7) <<endl;
    // cout << isdigitsorted(s8) <<endl;

    // // lETTER tESING cASES
    // cout << endl;
    // cout << "letter rule non decreasing order "<< endl;
    // cout << s7 <<endl;
    // cout << islettersorted(s7) <<endl;
    // // out put 1
    // cout << s8 <<endl;
    // cout << islettersorted(s8) <<endl;
    // // out out 1
    // cout << s9 <<endl;
    // cout << islettersorted(s9) <<endl;
    // // out put 1
    // cout << s10 <<endl;
    // cout << islettersorted(s10) <<endl;
    // //output 0
    // cout << s11 <<endl;
    // cout << islettersorted(s11) <<endl;


    return 0;
}

// Working fine
bool islowercase(string str){
    for (int i = 0 ; i < str.size() ; i++){
        char x = (char) str[i];
        if ( x >= 65 && x <= 90){
            return false;
        }
    }
    return true;
}

// Made to work 
bool isdigitrulefollowed(string str){
    for(int i = 0 ; i< str.size() -1;i++){
        if(isalpha(str[i])){
            if(isdigit(str[i+1])){
                return false;
            }
        }
    }
    return true;
}

// Working Fine
bool isdigitsorted(string str){
    vector<int> temp;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i])){
            int x = (int) str[i];
            temp.push_back(x);
        }
    }

    if (temp.size() == 0 ){
        return true;
    }

    for (int i = 0 ; i < temp.size() - 1; i++){
        if( temp[i] > temp[i+1]){
            return false;
        }
    }
    
    return true;
}


// Working Fine
bool islettersorted(string str){
    vector<char> temp;
    for (int i = 0; i < str.size(); i++){
        if (isalpha(str[i])){
            char x = str[i];
            temp.push_back(x);
        }
    }

    if (temp.size() == 0){
        return true;
    }
    for (int i = 0 ; i < temp.size()-1 ;i++){
        // char x = (char) temp[i];
        if ( temp[i] > temp[i+1] ){
            return false;
        }
    }

    return true;
}

void answerfunc(string str){

    // Debug area
    // cout << "Is lower" <<endl;
    // cout << islowercase(str)<< endl;
    // cout << "Is digitrule followed" <<endl;
    // cout<< isdigitrulefollowed(str) <<endl;
    // cout<< "Is digit sorted "<<endl;
    // cout<<isdigitsorted(str) <<endl;
    // cout<< "Is letter sorted "<<endl;
    // cout<< islettersorted(str)<<endl;



    if ( islowercase(str) && isdigitrulefollowed(str) &&
        isdigitsorted(str) && islettersorted(str))
        {
            cout<< "YES"<< endl;
        }
    else {
        cout << "NO" <<endl;
    }
}