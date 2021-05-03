//Character Arrays and Pointers I


#include <stdio.h>
#include <string.h> 

//void myprint(char* C); //placing the function above main(), means you cna avoid function prototype

void myprint(char* C)
{
	printf("size of C: %d\n", sizeof(C));
	while (*C != '\0')
	{
		printf("%c", *C);
		C++;
	}
	printf("\n");
}


int main()
{
	char c[5];
	c[0] = 'J';
	c[1] = 'O';
	c[2] = 'H';
	c[3] = 'N';
	c[4] = '\0';

	char c2[] = "Johnny";
	int len = strlen(c);
	int len2 = strlen(c2);
	int size = sizeof(c);
	int size1 = sizeof(c2);

	printf("%s\n", c);
	printf("%s\n", c2);
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("%d\n", size);
	printf("%d\n", size1);

	char* c3, *c4;
	c3 = c2;
	printf("size of c3: %d\n", sizeof(c3));
	printf("size of c4: %d\n", sizeof(c4));

	myprint(c3);
}
