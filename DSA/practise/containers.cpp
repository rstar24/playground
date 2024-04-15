#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){

    // This is an example of map
    cout << "Example of a map container" << endl;
    map<string, int> m ;
    m["ID"] = 1;
    m["AC_no"] = 2;

    for(auto x : m){
        cout << x.first << " " << x.second << endl;
    }

    // Lets make a set
    cout << "Example of a set container" << endl;
    set<int> s  = {10,20,30,40,50};
    for(auto x : s){
        cout<< "I am an elemet from set s " << x << endl;
    }
    s.insert(60);
    s.insert(70);
    cout << "After inserting " << endl;
    // for(auto x : s){
    //     cout<< "I am an elemet from set s " << x << endl;
    // }
    
    for(auto it = s.begin(); it != s.end() ; it++){
        cout << *it << endl;
    }

    // auto it = s.find(80);
    // if ( it == s.end()){
    //     cout << "80 was not found in the set" << endl;
    // }

    // Followinig code will find the element nearest to x
    int x = 66;
    auto it = s.lower_bound(x);
    if ( it == s.begin()){
        cout << *it << endl;
    }
    else if ( it == s.end()){
        it--;
        cout << *it << endl;
    }
    else {
        int a = *it ; it--;
        int b = *it ;
        if (x-b < a-x ) cout << b << endl;
        else cout << a << endl;
    }

    // Some examples of the bit set
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << "(a & b) " <<(a & b ) << endl;
    cout << "(a | b) " <<(a | b ) << endl;
    cout << "(a ^ b) " <<(a ^ b ) << endl;

    // SOme examples of the deque container 
    deque<int> d;
    d.push_back(5);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    for(auto x: d){
        cout << x << " ";
    }
    d.pop_back();
    d.pop_front();
    cout << endl;
    for(auto x: d){
        cout << x << " ";
    }
    cout<<"\nThis is the example of queue" <<endl;
    // Example of the priority queue 
    
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(100);
    q.push(10);
    q.push(20);
    cout<< "The size of q.size() = " << q.size()<< endl;
    for(int i = 0 ; q.size() ; i++){
        cout << q.top() << endl;
        q.pop();
    }
    q.pop();
    q.pop();
    cout<< "The size of q.size() = " << q.size()<< endl;
    
    return 0;
}