#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int a;
	char bacon[64];
	
	printf("Hello World!\n");

	a = rand() % 10;
	scanf("%s", bacon);

	printf("%d\n", a);
	printf("%s\n", bacon);
 
	
	return 0;
}

