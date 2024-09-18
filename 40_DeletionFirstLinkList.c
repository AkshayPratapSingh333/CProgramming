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

struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = ptr->next;
    free(ptr);
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
    head = deleteFirst(head);
    printf("List after deletion of element at begining \n");// 2 will be removed and if we write head then it will delete next linked node
    traverseList(head); 

    return 0;
}
