/* Inserting elements at the end of the linked list */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct Node* next;
}Node;

Node* head; // using head as a global variable is easier and removes the need to use ** to access head

void Insert(int x)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    if (head == NULL){
        head = temp; // update the head node only if the list is empty, otherwise don't touch it
        return;
    }

    // Get to the end of the list so I can link this new node with the first node
    Node* temp2 = head; // holds the address of the head node, so we don't modify the actual node
    while (temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void printList()
{
    Node* printTemp = head;
   
    while(printTemp != NULL){
        printf("%d ", printTemp->data);
        printTemp = printTemp->next;
    }
    printf("\n");
}

int main()
{
    int x = 1, y = 2;
    head = NULL;

    // Creating the first node
    // Node* temp = (Node*)malloc(sizeof(Node));
    // temp->data = x;
    // temp->next = NULL;
    // head = temp;

    // Creating a new node
    // Node* temp1 = (Node*)malloc(sizeof(Node));
    // temp1->data = y;
    // temp1->next = NULL;

    // // To get to the end of the list so I can link this new node with the first
    // Node* temp2 = head; // holds the address of the head node
    // while (temp2->next != NULL){
    //     temp2 = temp2->next;
    // }
    // temp2->next = temp1;

    Insert(x);
    Insert(y);

    printList();
}