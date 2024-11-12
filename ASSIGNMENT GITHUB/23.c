#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;


ListNode* kthNodeFromMiddle(ListNode* head, int k) {
    int length = 0;
    ListNode* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }

    k = length / 2 - k;

    if (k < 0 || k >= length) {
        return NULL;
    }

    temp = head;
    for (int i = 0; i < k; i++) {
        temp = temp->next;
    }

    return temp;
}

void printNode(ListNode* node) {
    if (node != NULL) {
        printf("%d\n", node->val);
    } else {
        printf("Node does not exist\n");
    }
}

int main() {
    ListNode* head = NULL;

    head = (ListNode*)malloc(sizeof(ListNode));
    head->val = 1;
    head->next = (ListNode*)malloc(sizeof(ListNode));
    head->next->val = 2;
    head->next->next = (ListNode*)malloc(sizeof(ListNode));
    head->next->next->val = 3;
    head->next->next->next = (ListNode*)malloc(sizeof(ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = (ListNode*)malloc(sizeof(ListNode));
    head->next->next->next->next->val = 5;
    head->next->next->next->next->next = NULL;

    int k = 1;   
    ListNode* kthNode = kthNodeFromMiddle(head, k);

    printNode(kthNode);  

    return 0;
}
