#include <stdio.h>
#include <stdlib.h>

// Definition of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    // Dynamically allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data and set next pointer to NULL
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtHead(struct Node** head, int data) {
    // Create a new node
    struct Node* newNode = createNode(data);
    
    // Point the new node's next to the current head
    newNode->next = *head;
    
    // Move the head pointer to the new node
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    // Create a new node
    struct Node* newNode = createNode(data);

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    // Traverse to the end of the list
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Change the last node's next to point to the new node
    temp->next = newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    
    printf("NULL\n");
}

// Function to delete the list and free the memory
void deleteList(struct Node** head) {
    struct Node* temp = *head;
    struct Node* nextNode;

    while (temp != NULL) {
        nextNode = temp->next;
        free(temp); // Free the memory of the current node
        temp = nextNode;
    }
    
    *head = NULL; // Set the head pointer to NULL
}

int main() {
    struct Node* head = NULL;

    // Insert elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtHead(&head, 5);
    
    // Print the list
    printf("Linked List: ");
    printList(head);

    // Delete the list
    deleteList(&head);
    
    return 0;
}
