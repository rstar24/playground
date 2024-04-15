#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    struct ListNode *next;
};

struct ListNode createList(){
    struct ListNode Temp;
    return Temp;
}

int main(int argc, char *argv[]){

    ListNode *HEAD;
    *HEAD = createList();
    HEAD->data = 100;
    cout << "HEAD.data = " << HEAD->data << endl;
    
    return 0;
}