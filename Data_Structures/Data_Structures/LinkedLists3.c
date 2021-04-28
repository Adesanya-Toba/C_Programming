/* Deleting a node at nth position */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int data;
	struct Node* next;
}Node;

Node* head;

void Insert(int x)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

void Delete(int n)
{
	Node* temp1 = head; // temporary variable that points to head
	if (n==1)
	{
		head = temp1->next; // head now points to second node
		free(temp1);
		return; 
	}

	for(int i = 0; i < n-2; i++) // 
	{
		temp1 = temp1->next;
		// temp1 now points to the (n-1)th node, bcos of for loop i.e. n-2
	}
	Node* temp2 = temp1->next; // nth node
	temp1->next = temp2->next; // (n+1)th node
	free(temp2); // delete temp2
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
	head = NULL;

	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	
	int n;
	printf("Enter a postion from 1...\n");
	scanf("%d", &n);
	Delete(n);
	Print();
}