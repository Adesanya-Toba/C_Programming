// qsort (quick sort) can sort any type of array or structure, you just have to provide the comparison logic
// It also takes void ponters for the sake of being generic, so you would have to cast to the type
// you want in the comparison logic.
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int compare(const void* a, const void* b)
{
	int A = *((int*)a); // typecasting to int* and getting the value
	int B = *((int*)b); 
	return A - B; // qsort requires a positive integer if A is ranked higher (ascending), negative if B is ranked higher (decending), 0 if same
}

int main()
{
	int i, A[] = { -31,22,-1,50,-6,4,1,50 };
	int numOfElements = sizeof(A) / sizeof(int);

	qsort(A, numOfElements, sizeof(int), compare);
	for (i = 0; i < numOfElements; i++) printf("%d ", A[i]);
}*/