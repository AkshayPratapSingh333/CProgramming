#include<stdio.h>
#include<stdlib.h>

// Definition of the Node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to traverse and print the linked list
void traverseList(struct Node *ptr) {
    // Print this once before the loop
    while (ptr != NULL) {    
        printf("%d\n", ptr->data);  // Correctly print the data of each node
        ptr = ptr->next;  // Move to the next node
    }
}

struct Node * deleteAtIndex(struct Node * head,int index){
    // If we need to delete the head (index 0)
    if (index == 0) {
        struct Node *temp = head;
        head = head->next;  // Move head to the next node
        free(temp);         // Free the old head
        return head;
    }

    struct Node *p = head; // p points to the head
    struct Node *q = head->next; // q points to the second node

    // Traverse to the node just before the one we want to delete
    for (int i = 0; i < index - 1; i++) {
        if (p == NULL || p->next == NULL) {
            // Index is out of range, return the head unchanged
            return head;
        }
        p = p->next;  // Move p to the next node
        q = q->next;  // Move q to the next node (q follows p)
    }

    if (q != NULL) {  // q is the node we want to delete
        p->next = q->next;  // p's next points to the node after q
        free(q);            // Free the memory of q
    }

    return head;
}

int main() {
    // Creation of pointers
    struct Node *head;
    struct Node *first;
    struct Node *second;

    // Memory allocation for nodes in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    // Linking head and first node 
    head->data = 2;
    head->next = first;

    // Linking first and second node 
    first->data = 4;
    first->next = second;

    // Terminating list at second node 
    second->data = 6;
    second->next = NULL;

    // Traverse and print elements of the linked list
    printf("Linked list elements before deletion: \n"); 
    traverseList(head); 
    head = deleteAtIndex(head,0);
    printf("List after deletion of element at Index \n");// 6 will be removed 
    traverseList(head); 

    return 0;
}
