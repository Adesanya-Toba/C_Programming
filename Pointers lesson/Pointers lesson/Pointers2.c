/*
 * Pointer2.c
 *
 *  Created on: Sep 9, 2020
 *      Author: ADESANYA TOBA
 */

#include <stdio.h>

int main() {
	int a = 2089;
	int *p;
	p = &a;

	printf("size of integer is: %d\n", sizeof(int));
	printf("Address: %d, Value: %d\n", p, *p);
	printf("\n");

	char *p0;
	p0 = (char*) p; //typecasting
	printf("size of char is: %d\n", sizeof(char));
	printf("Address: %d, Value: %d\n", p0, *p0);
	printf("Address: %d, Value: %d\n", (p0 + 1), *(p0 + 1));
	printf("\n");
	void *p1;
	p1 = p;
	printf("Address: %d, Value: %d\n", p1);

}

