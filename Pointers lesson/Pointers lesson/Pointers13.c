// Pointers as Funtion Returns
/*
#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld()
{
	printf("Hello World\n");
}

int* Add (int* a, int* b)
{
	// a and b are pointers to integers local to Add
	/*printf("Address of a in Add = %d\n", &a);
	printf("Value in a of Add (address of a in main) = %d\n", a);
	printf("Value at address stored in a of Add = %d\n", *a);
	*
	int* c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}
int main()
{
	int a = 2, b = 4;
	//printf("Address of a in main = %d\n", &a);
	// Call by rrefrence
	int* ptr = Add(&a, &b); // a and b are local integers to main
	PrintHelloWorld();
	printf("Sum is: %d\n", *ptr);

}*/