//Function Pointers
/*
#include <stdio.h>
#include <stdlib.h>

void PrintHello(char* name)
{
	printf("Hello %s!\n", name);
}

int Add(int a , int b)
{
	return a + b;
}

int main()
{
	int c;
	int (*p)(); //declaring a function pointer. Must have the same argument and return datatype.
	//Apparently I don't need to replicate the entire function structure, maybe it's VS? I'll try another IDE.
	
	//p = &Add;
	//c = (*p)(2, 3); //dereferencing and executing the function
	
	//OR

	p = Add;
	c = p(2, 3);
	printf("%d\n", c);


	//void (*ptr)(char*) = PrintHello;
	//OR
	void (*ptr)() = PrintHello; //Another way, decalration and initialization
	ptr("Bruce");
}*/