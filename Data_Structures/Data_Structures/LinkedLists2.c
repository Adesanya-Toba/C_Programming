/* Inserting at nth position in the list */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	struct Node* next;
}Node;

Node* head;

void Insert(int data, int n)
{
	Node* temp1 = (Node*)malloc(sizeof(Node));
	temp1->data = data;
	// temp1->next = NULL;

	if (n == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	Node* temp2 = head; // temporary variable to hold the head value so we don't modify it
	for (int i = 0; i < n-2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
	
}

void Print()
{
	Node* temp = head;
	printf("List is: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


int main()
{
	head = NULL; // List is empty now 
	Insert(2, 1);
	Insert(3, 2);
	Insert(4, 1);
	Insert(5, 2);
	Print();
}