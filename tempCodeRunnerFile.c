#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node *next;
};

void traverseList(struct Node *head) {
    struct Node *temp = head;  // temp initially points to head (the first node)

    printf("Linked list elements: ");
    while (temp != NULL) {     // Loop through the list until temp becomes NULL
        printf("%d -> ", temp->data);  // Print the data of the current node
        temp = temp->next;     // Move temp to the next node
    }
    printf("NULL\n");  // Indicate the end of the list
}


int main(){
    // creation of pointers
    struct Node *head;
    struct Node *first;
    struct Node *second;

    // Memory allocation for nodes in heap

    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    // Linking head and first node 
    head->data=2;
    head->next = first;
    // Linking first and second node 
    first->data=4;
    first->next = second;
    //Terminating list at second node 
    second->data=6;
    second->next = NULL;
    return 0;
}