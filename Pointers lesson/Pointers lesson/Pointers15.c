// Function Pointers and Callbacks. Bubble Sort
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void A()
{
	printf("Hello\n");
}

void B(void (*ptr)()) //function pointer as argument
{
	ptr(); //call-back the function that ptr points to
}

// Call-back function should compare two integers, should return 1 if first argument is greater than the second
// -1 if second argument is higher
int compare(int a, int b)
{
	if (a > b) return 1; // Changing the return value alters the ranking mechanism, either to sort up or down
	return -1;
}

int AbsoluteCompare(int a, int b)
{
	if (abs(a) > abs(b)) return 1;
	return -1;
}

void BubbleSort(int* A, int n, int (*compare)(int ,int)) //decalring a function that recieves a call-back function as argument
{	
	int i, j, temp;
	for(i=0; i < n; i++)
	{
		for(j=0; j < n-1; j++)
		{
			if(compare(A[j], A[j+1]) > 0)
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}

int main()
{
	//void (*p)() = A;
	//B(p);
	//OR

	B(A); //A is a callback function


	
	int A[] = { -31,2,0,-87,52,76,4 };
	int size = sizeof(A) / sizeof(int);
	BubbleSort(A, size,AbsoluteCompare);
	for (int i = 0; i < size; i++) printf("%d ", A[i]);

}*/