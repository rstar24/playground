#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1("489959 through 759,964");

    regex regexp(R"(^(?<=\d{3})\[0-9][0-9][0-9])");


    smatch m;

    if(regex_search(s1,m,regexp)){
        cout << "" <<endl;
    }
    else{
        cout << "regex failed" <<endl;
    }
    string s2;
    for(int i = 0; i < m.size(); i++){
        s2=m[0];
    }
    int z = stoi(s2);
    cout << "" <<endl;
    cout<< s2 << endl;
    cout << "Converted to integer successfully" <<endl;
    cout << z <<endl;
    cout << "It worked" <<endl;

    return 0;
}