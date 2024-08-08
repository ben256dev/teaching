#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int small_numbers[] = { 4, 7, 8, 3 };
	int many_big_numbers[][4] = {
		{ 90, 67, 86, 18 },
		{ 48, 78, 29, 34 },
		{ 24, 84, 56, 38 },
	};

	for (int i = 0; i < 4; i++)
		printf(" %d", small_numbers[i]);
	printf("\n");
	
	return 0;
}

