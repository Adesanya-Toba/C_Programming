/*#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	Node* next; // Cpp style
};

Node* head; // head points to the Head node 

void Insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}

void Print()
{
	Node* temp = head; // copy the address of head here, so we don't modify the reference
	printf("List is: ");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("/n");
}

int main()
{
	head = NULL; // set to NULL for now i.e points nowhere now

	printf("How many numbers?\n");
	int n, x;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		scanf_s("%d", &x);
		Insert(x);
		Print();
	}

}*/