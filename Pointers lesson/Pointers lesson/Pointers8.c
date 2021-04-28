//Character Arrays and Pointers II

#include <stdio.h>
#include <string.h> 

//void myprint(char* C); //placing the function above main(), means you can avoid function prototype

void myprint(const char* C) //adding a const before the parameter, means the function can only read the argument and not write
{
	printf("size of C: %ld\n", sizeof(C));
	//C[1] = 'A'; // cannot be modified anymore
	while (*C != '\0')
	{
		printf("%c", *C);
		C++;
	}
	printf("\n");
}


int main()
{
	char C[20] = "Hello"; // string gets stored in the space for array and can be modified
	//C[0] = 'A';
	
	//However, if we create string like this,
	char *c1 = "Hello Me 2"; // string gets stored as a compile time constant, and therefore cannot be modified
	//c1[2] = 'A'; // causes seg fault

	//myprint(C);
	myprint(c1);
}