// Memory Leak. Last lesson yoooo!!

// Virtual Casino Game.

// Memory Leak occurs when there is an improper handling of memory within the heap. 
// Allocated bytes must be implicitly deallocated (freed) when the application ends,
// Otherwise, the application grows unneccessarily, because there are multiple allocated but unused
// bytes of memory within the heap.

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;


void Play(int bet)
{
	char* C = (char*)malloc(3 * sizeof(char));
	C[0] = 'J', C[1] = 'Q', C[2] = 'K';
	printf("Shuffling ...");
	srand(time(NULL)); //seeding the random number generator
	int i;
	for (i = 0; i < 5; i++)
	{
		int x = rand() % 3; // ensures we only get numbers 0,1 or 2.
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp; //swaps characters at position x and y
	}
	int playerGuess;
	printf("What's the position of Queen: 1,2 or 3? ");
	scanf_s("%d", &playerGuess);

	if (C[playerGuess - 1] == 'Q')
	{
		cash += 3 * bet;
		printf("You win! Result = %c%c%c. Total cash = $%d", C[0], C[1], C[2], cash);
	}
	else 
	{
		cash -= bet;
		printf("You loose! Result = %c%c%c. Total cash = $%d", C[0], C[1], C[2], cash);
	}
	free(C); //always remember to deallocate otherwise, you'd cause a memory leak 
}



int main ()
{
	int bet;
	printf("Welcome to the Virtual Casino\n");
	printf("Total cash = $%d\n", cash);
	while (cash > 0)
	{
		printf("What's your bet? $");
		scanf_s("%d", &bet);
		if (bet == 0 || bet > cash) break;
		Play(bet);
		printf("\n********************************\n");
	}
}*/