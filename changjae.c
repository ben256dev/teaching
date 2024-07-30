#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int my_int;
	char my_string[64];

	printf("hello world!\n");

	my_int = rand() % 10;
	scanf("%s", my_string);

	printf("%d\n", my_int);

	return 0;
}

