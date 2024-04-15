#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int data ;
    struct ListNode * next;
};

void addNode(struct ListNode **t,int data){
    struct ListNode *temp;
    temp = *t;
    while(temp->next != NULL){
        temp = temp->next;
    }
    if(temp->next == NULL){
    temp->next = (struct ListNode *) malloc(sizeof(struct ListNode));
    temp->next->data = data;
    }
    printf("Added a Node\n");
}

void makeList(struct ListNode **t,int data){
    *t = (struct ListNode *)malloc(sizeof(struct ListNode));
    (*t)->data = data;
    (*t)->next = NULL;
}

int main(){
    struct ListNode *HEAD = NULL;
    makeList(&HEAD,100);
    printf("Check 1\n");
    printf("%d\n",HEAD->data);
    addNode(&HEAD,200);
    printf("Check 2\n");
    printf("%d\n",HEAD->next->data);
    // HEAD = (struct ListNode *)malloc(sizeof(struct ListNode));
    // HEAD->data = 1000;
    // HEAD->next = NULL;

    return 0;
}

