#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next ;
};

struct ListNode* createList(){
    struct ListNode *Temp = (struct ListNode *) malloc(sizeof(struct ListNode));
    Temp->data = 0;
    Temp->next = NULL;
    return Temp;
}

void addNode(struct ListNode *HEAD,int n){
    struct ListNode *Temp = HEAD;
    while(Temp->next!= NULL){
        Temp = Temp->next;
    }
    
    Temp->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    Temp->next->next = NULL;
    Temp->next->data = n;
    return ;

}

int main(){
    // Make a node
    struct ListNode *HEAD = createList();
    addNode(HEAD,10);
    printf("%d",HEAD->next->data);
    return 0;
}
