#include <stdio.h>

/*
 * -[x] 0. declare an int and initialize(=) it with a value
 * -[x] 1. declare another int and initialize(=) it with a value
 * -[x] 2. add the two ints and print their sum with printf. what format specifier should you use?
 * -[x] 3. declare a string
 * -[x] 4. print the string using printf and the string format specifier
 * -[x] 5. write a for loop to do these steps 0-4 10 times
*/

int main(void)
{
	// 'for int i equals zero while i is less than ten i plus plus'
	for (int i = 0; i < 10; i++)
	{
		int x = 20;
		int c = 10;
		const char* poop = "stinky";
		printf("%d%s,hello world!\n", x + c, poop);
	}

	return 0;
}
