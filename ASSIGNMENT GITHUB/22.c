#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


void insertNode(Node** head, int newData) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* lastNode = *head;
    while (lastNode->next) {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
}

void findMiddle(Node* head) {
    Node* slowPtr = head;
    Node* fastPtr = head;

    if (head != NULL) {
        while (fastPtr != NULL && fastPtr->next != NULL) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }
        printf("Middle element: %d\n", slowPtr->data);
    }
}

int main() {
    Node* head = NULL;


    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);

    
    findMiddle(head);

    return 0;
}
