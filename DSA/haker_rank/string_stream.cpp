#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> result;
    stringstream ss(str);
    int count;
    for(int i = 0 ; i < str.size();i++){
        if(str[i]== ',') count++;
    }
    for(int i = 0 ; i < count + 1; i++ ){
        int x ;
        char ch;
        ss>>x;
        ss>>ch;
        result.push_back(x);
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}