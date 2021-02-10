//Dynamic Memory Allocation

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf_s("%d", &n);

	//int* A = (int*) malloc(n * sizeof(int)); //dynamically allocated array using malloc

	int* A = (int*)calloc(n, sizeof(int)); //dynamically allocated array using calloc
	for (int i = 0; i<n; i++)
	{
		A[i] = i + 1; //without initializer, calloc sets all values to 0

		//free(A); //clear or make available this memory space for allocation

		//A = NULL; //after free(), adjust pointer to NULL
		printf("%d ", A[i]);
		
	}
	printf("\n");

	//int* B = (int*)realloc(NULL, n * sizeof(int)); //equivalent to malloc, creates a new block and does not copy any previous block
	
	//A = (int*)realloc(A, 0); //equivalent to free(A)

	int* B = (int*)realloc(A, (n*2) * sizeof(int));
	printf("Old block address = %d, New block address = %d\n", A, B);

	for (int i = 0; i < (n*2); i++)
	{
		printf("%d\n", B[i]);
	}
}*/