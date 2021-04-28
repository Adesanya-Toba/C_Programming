/*#include <stdio.h>

//Pointers and arrays


int main()
{
	int A[5] = { 3,6,8,2,5 };
	int* p;

	//p = &A[0];

	//We could actually just type p=A
	p = A;


	printf("size of A is: %d bytes\n", sizeof(A));
	printf("%d\n", p);
	printf("%d\n", ++p);
	printf("%d\n", &A[0]);
	printf("%d\n", A);// printing the array name without [], just gives you the address of the first array element.

	printf("%d\n", *A); //First element in the array:3
	printf("%d\n", *(A+1)); //second element in the array: 6

	for (int i = 0; i<5; i++)
	{
		printf("Address = %d\n", &A[i]);
		printf("Address = %d\n", A+i);
		printf("value = %d\n", A[i]);
		printf("value = %d\n", *(A+i));
	}
}*/