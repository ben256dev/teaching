#include <stdio.h>

/*
 * -[x] 0. declare an int
 * -[x] 1. initialize the int
 * -[x] 2. print the int
 *
 * -[x] 3. declare a string
 * -[x] 4. initialize the string
 * -[x] 5. print the string
 *
 * -[x] 6. write an if statement
 * -[x] 7. write a for loop to do something 5 times
 * -[x] 8. write a while loop to do something 5 times
 *
 * -[x] 9. write a for loop inside a for loop to do something 25 times
*/

int main(void)
{
	int a = 3;
	if (a< 3)
		printf("perfect\n");
	for (int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("i : %d, j : %d\n", i, j);
		}
	}
	
	int smoothie = 100001;
	const char* lemon = "ice";
	printf("%d\n%s\n", smoothie, lemon);

	int w = 0;
	while (w < 5)
	{ 
		printf("this is a while loop\n");
		w++;
	}

	return 0;
}

