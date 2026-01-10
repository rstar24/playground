#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int data;
  struct ListNode *next;
};

void addNode(struct ListNode **t, int data) {
  struct ListNode *temp;
  temp = *t;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  if (temp->next == NULL) {
    temp->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->next->data = data;
    temp->next->next = NULL;
  }
  printf("Added a Node\n");
}

void makeList(struct ListNode **t, int data) {
  *t = (struct ListNode *)malloc(sizeof(struct ListNode));
  (*t)->data = data;
  (*t)->next = NULL;
}

void displayList(struct ListNode **t) {
  struct ListNode *temp;
  temp = *t;

  while (temp->next != NULL) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("%d ->NULL\n", temp->data);

  return;
}

// a function to reverse  the linked list
// using the while loop
struct ListNode *reverseList(struct ListNode **t) {

  struct ListNode *prev = NULL;
  struct ListNode *curr = *t;
  struct ListNode *next;

  while (curr != NULL) {

    next = curr->next;
    curr->next = prev;

    prev = curr;
    curr = next;
  }

  return prev;
}

// FIXED: Use a single pointer for cleaner recursion
struct ListNode *recReverseList(struct ListNode *head) {
  // Base case: empty list or single node
  if (head == NULL || head->next == NULL)
    return head;

  // Recursive call: pass the next node pointer directly
  struct ListNode *newHead = recReverseList(head->next);

  // Make the current node the child of its next node
  head->next->next = head;
  head->next = NULL;

  return newHead;
}

int main() {
  struct ListNode *HEAD = NULL;
  makeList(&HEAD, 100);
  printf("Check 1\n");
  printf("%d\n", HEAD->data);
  addNode(&HEAD, 200);
  printf("Check 2\n");
  printf("%d\n", HEAD->next->data);
  addNode(&HEAD, 300);
  // printf("Check 3\n");
  printf("%d\n", HEAD->next->next->data);

  // Reverse a linked list
  printf("The linked list before reversal\n");
  displayList(&HEAD);

  HEAD = reverseList(&HEAD);
  printf("The linked list after reversal  \n");
  displayList(&HEAD);

  HEAD = recReverseList(HEAD);
  printf("The linked list after reversal with recursion \n");
  displayList(&HEAD);

  return 0;
}
