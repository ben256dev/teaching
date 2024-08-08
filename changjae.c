#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
	{
	printf("%d\n", num[i]);
	}

	int numbers[3][4] =
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
		printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}


	return 0;
}

