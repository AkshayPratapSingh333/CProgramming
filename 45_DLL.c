#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;             // The data to store in the node
    struct Node* prev;    // Pointer to the previous node
    struct Node* next;    // Pointer to the next node
};

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginning(struct Node** head, int newData) {
    // Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->prev = NULL;
    newNode->next = *head; // Make the new node point to the current head

    // If the list is not empty, update the previous head's previous pointer
    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    // Move the head to point to the new node
    *head = newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int newData) {
    // Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head; // Temporary variable to traverse the list

    newNode->data = newData;
    newNode->next = NULL; // New node will be the last node, so next is NULL

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    // Traverse to the end of the list
    while (last->next != NULL) {
        last = last->next;
    }

    // Update the next of the last node and the previous of the new node
    last->next = newNode;
    newNode->prev = last;
}

// Function to insert a node at a specific index in the doubly linked list
void insertAtIndex(struct Node** head, int newData, int index) {
    // Allocate memory for the new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = newData;

    // If index is 0, insert at the beginning
    if (index == 0) {
        newNode->prev = NULL;
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }

    // Traverse to the node just before the desired position
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If the index is out of bounds
    if (temp == NULL) {
        printf("Index out of bounds\n");
        free(newNode); // Free the allocated memory since it's not used
        return;
    }

    // Insert the new node at the specified index
    newNode->next = temp->next;
    newNode->prev = temp;

    // Update the previous node's next pointer
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

// Function to print the contents of the list
void printList(struct Node* node) {
    printf("Doubly linked list: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Main function to test the insertion functions
int main() {
    struct Node* head = NULL;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printf("After inserting at the beginning:\n");
    printList(head);

    // Insert nodes at the end
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    printf("After inserting at the end:\n");
    printList(head);

    // Insert nodes at specific indices
    insertAtIndex(&head, 25, 2); // Insert 25 at index 2
    insertAtIndex(&head, 5, 0);  // Insert 5 at index 0
    insertAtIndex(&head, 60, 10); // Attempt to insert at an out-of-bounds index

    printf("After inserting at specific indices:\n");
    printList(head);

    return 0;
}
