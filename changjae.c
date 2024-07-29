#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	
	int random_number = rand() % 10;

	printf("Guess the random number:\n");

	int input = -1;
	while (input != random_number)
	{
		if (input != -1)
			printf("wrong number dumbass!\n");

		scanf("%d", &input);
	}
	printf("\nyou win!\n");

	return 0;
}

