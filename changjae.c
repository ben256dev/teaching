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
 * -[ ] 9. write a for loop inside a for loop to do something 25 times
*/

int main(void)
{
	//int is 4 bytes and 32 bits
	int i = 3;
	if (i< 3)
		printf("perfect\n");
	for (i=0; i<5; i++)
	{
	int smoothie = 100001;
	const char* lemon = "ice";
	printf("%d\n%s\n", smoothie, lemon);
	}
	while (i<10)
	{ 
		printf("this is a while loop\n");
		i++;
	}

	return 0;
}
