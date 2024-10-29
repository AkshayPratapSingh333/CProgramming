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

struct Node * insertAtIndex(struct Node *head, int data, int index) {
    
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));  // Allocate memory for the new node
    struct Node *p = head;
    int i = 0;

    // Traverse the list until reaching the node just before the desired index
    while(i != index - 1) {
        p = p->next;
        i++;
    }

    // Insert the new node at the specified index
    ptr->data = data;
    ptr->next = p->next;  // The new node points to the node after `p`
    p->next = ptr;        // The previous node (`p`) now points to the new node

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

    printf("Linked list before adding element at index: \n");
    traverseList(head); 
    head = insertAtIndex(head,12,2);
    printf("List after adding element at Index \n");
    traverseList(head); 

    return 0;
}
