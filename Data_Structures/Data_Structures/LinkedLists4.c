/* Reverse a Linked list (Iterative method) */

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
    printf("List is: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

Node* Reverse(Node* head)
{
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    Print(head);
    head = Reverse(head);
    Print(head);
}
