#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next; 
    node(int val){
        data=val;
        next=NULL; 
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){

    node* n =new node(val);

    if (head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deletion(node* head,int val) {
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
    
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
      cout<<temp->data<<" -> " ;
      temp=temp->next;
    }
    cout<<"Null";
}

void delteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    cout<<""<<endl;
    insertAtHead(head,4);
    display(head);
    cout<<""<<endl;
    cout<<search(head,4)<<endl;
    delteAtHead(head);
    cout<<""<<endl;
    display(head);

    return 0 ;
}