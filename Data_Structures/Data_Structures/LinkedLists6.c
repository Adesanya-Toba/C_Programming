/* Reverse a Linked List using Recursion */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
} Node;

Node* head = NULL;

void *Insert(int x)
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
}

void Print(Node* p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void Reverse(Node* p)
{
    if (p->next == NULL)
    {
        head = p;
        printf("Reverse list is: ");
        return;
    }
    Reverse(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

/* Just wanted to see if I could do this: Factorial using recursion */
int fact(int n)
{
    // int factorial;
    if (n == 0) return 1; // Exit condition
    return n * fact(n -1);

    //return factorial;
}


int main()
{
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    printf("List is: ");
    Print(head);
    Reverse(head);
    Print(head);

    int ans = fact(0);
    printf("%d\n", ans);
}