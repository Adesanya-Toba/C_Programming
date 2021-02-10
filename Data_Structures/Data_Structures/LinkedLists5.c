/* Printing elements of a Linked list using Recursion */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
} Node;

Node *Insert(Node *head, int x)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    if (head == NULL) head = temp; // List is empty and this is the first element
    else
    {
        Node* temp1 = head;
        while (temp1->next != NULL) // While loop to run through the list
        {
            temp1 = temp1->next;
        }
        temp1->next = temp; // adding the new node at the end
    }
    return head;
}

void Print(Node* head)
{
    if (head == NULL) { // Exit condition
        printf("\n");
        return;
    }
    printf("%d ", head->data);
    Print(head->next);
}

void ReversePrint(Node* head)
{
    if (head == NULL) { // Exit condition
        printf("Reversed list is: ");;
        return;
    }
    ReversePrint(head->next);
    printf("%d ", head->data);
}

int main()
{
    Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    printf("List is: ");
    Print(head);
    ReversePrint(head);
    printf("\n");
}