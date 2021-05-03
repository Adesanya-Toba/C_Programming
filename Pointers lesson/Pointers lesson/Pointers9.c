//Pointers and Multi-Dimensional Arrays I

//Check this link if it's not so clear: https://www.youtube.com/watch?v=sHcnvZA2u88&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=10

/*
#include <stdio.h>

int main()
{
	int B[2][3] = { { 7,8,9 }, { 3,0,1 } };

	int(*p)[3] = B;

	printf("%d\n", B); //address of the first array, B[0]
	printf("%d\n", *B); //prints the value B[0], which is the address of the first element in B[0], i.e &B[0][0]
	printf("%d\n", p);
	printf("\n");

	printf("%d\n", B + 1); //prints the address of the next array, which is 12 bytes away, i.e. int is 4bytes x 3 = 12 bytes, i.e. B[1][0]
	printf("%d\n", &B[1]); //Same here
	printf("\n");

	//*(B+1) returns an integer pointer to the first integer in B[1]
	printf("%d\n", *(B + 1)); //prints the address of B[1][0], cos this is basically B[1], which is the address of the first element of B[1]
	printf("%d\n", B[1]);// Same here
	printf("%d\n", &(B[1][0])); //Same here
	printf("\n");

	printf("%d\n", *(B + 1) + 2); //
	printf("%d\n", B[1] + 2);
	printf("%d\n", &(B[1][2]));

	printf("gargbage: %d\n", *(*B + 1)); //Value at B[0][1]
	printf("gargbage2: %d\n", (B[0][1])); //Same here


	int C[3][2][2] = { {{ 9,0 }, { 7,5 }},
					{ { 8, 2 }, { 3,1 }},
					{ { 83, 90 }, { 76,55 }} };

	printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
	printf("%d\n",*(C[0][1] + 0)); //prints the element at C[0][1][0] = 7
	printf("%d\n", *(C[0][0] + 2)); //prints the same thing, even though C[0][0][2] doesn't exist, but because it is stored in a contiguous block of memory

}
*/
