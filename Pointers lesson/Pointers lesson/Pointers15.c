// Function Pointers and Callbacks. Bubble Sort

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 	
*	Typedef here essentially defines func_ptr as type, so we don't 
*	have to type in this long declaration whenever 
*	we pass it as an argument to other functions.
*
*	I know you'll get this!
*/
typedef void (*func_ptr)(char* txt);


void A(char* text)
{
	printf("Hello %s\n", text);
}

void C(char *text)
{
	printf("I love %s\n", text);
}

//void B(void (*func_ptr)()) //function pointer as argument
/* 	Or neater using typedef 
*	Now, B is neater and is more flexible 
*/
void B(func_ptr func, char* text)
{
	func(text); //call-back the function that func points to
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
			if ( AbsoluteCompare(A[j] , A[j + 1]) < 0)
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

	/* B is more flexible */
	B(A, "Toba"); //A is a callback function

	B(C, "Toba"); // C is also a callback function
	
	int A[] = { -31,2,0,-87,52,76,4 };
	int size = sizeof(A) / sizeof(int);
	BubbleSort(A, size,AbsoluteCompare);
	for (int i = 0; i < size; i++) printf("%d ", A[i]);
	printf("\n");
}
