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

struct Node * insertAtBegin(struct Node *head, int data){ // This function inserts a new node at the beginning of the linked list.
    
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;   // Set the next of new node to the current head
    ptr->data = data;   // Assign the data to the new node
    return ptr;         // Return the new node which becomes the new head
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
    printf("Linked list before adding of elements: \n"); 
    traverseList(head); 
    head = insertAtBegin(head,11);
    printf("Linked List after adding element at begining \n");
    traverseList(head); 

    return 0;
}
