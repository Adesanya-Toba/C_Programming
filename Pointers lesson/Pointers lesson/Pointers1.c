/*
 * Pointers1.c
 *
 *  Created on: Sep 8, 2020
 *      Author: ADESANYA TOBA
 */

#include <stdio.h>
int main() {

	int a = 20;
	int *p;
	printf("Address of p itself is: %p\n", &p);
	p = &a; //address of a

	printf("Address of a is: %p\n", p); //address of a /Find the correct format specifier for pointers
	printf("Value of a is: %d\n", *p); // value of a, Dereferencing
	*p = 24;
	printf("Value of a is now: %d\n", *p); //Dereferencing

	

	//p = a;
	//printf("size of integer is: %d bytes\n", sizeof(int)); //4 bytes
	//printf("size of char is: %d bytes\n", sizeof(char)); // 1 byte
	printf("size of float is: %ld bytes\n", sizeof(float)); //4 bytes
	printf("size of double is: %ld bytes\n", sizeof(double)); //8 bytes


	printf("Address of p + 1 is: %p\n", p + 1); //this increments the address by 4 bytes
	printf("%d\n", (*p + 1));

	printf("Address of a + 2 is: %p\n", p + 2); //this increments the address by 8 bytes

return 0;

}
