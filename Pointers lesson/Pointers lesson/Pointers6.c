//Arrays as function arguments

/*
#include <stdio.h>

int SumOfElements(int A[], int size) //You have to pass the array address and size, otherwise your function won't know how 
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += A[i];
	}
	return sum;
}

int Double (int* A, int size)
{
	int doubleElements = 0;
	for (int i = 0; i<size; i++)
	{
		*(A + i) *=2;

		//or
		//A[i] *= 2;
	}
}
int main ()
{
	int A[] = { 1,2,3,4,5 };
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);
	printf("Sum of elements in array A = %d\n", total);
	Double(A, size);
	
	printf("The doubled elements of array A are: {%d, %d, %d, %d, %d}\n",
		A[0], A[1], A[2], A[3], A[4]);
}*/