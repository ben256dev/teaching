#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define GRID_SIZE 32

void print_grid(char grid[GRID_SIZE][GRID_SIZE])
{
	for (int i = 0; i < GRID_SIZE; i++)
	{
		for (int j = 0; j < GRID_SIZE; j++)
		{
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}
}

void randomize_grid(char grid[GRID_SIZE][GRID_SIZE])
{
	for (int i = 0; i < GRID_SIZE; i++)
	{
		for (int j = 0; j < GRID_SIZE; j++)
		{
			if (rand() % 2 == 0)
				grid[i][j] = '@';
			else
				grid[i][j] = '.';
		}
	}
}

int get_cell_wall_value(char grid[GRID_SIZE][GRID_SIZE], int x, int y)
{
	int value = 0;
	
	for (int i = -1; i < 2; i++)
		for (int j = -1; j < 2; j++)
			if (grid[(x + i) % GRID_SIZE][(y + j) % GRID_SIZE] == '@') value++;

	return value;
}

void smooth_grid(char grid[GRID_SIZE][GRID_SIZE])
{
	char temp_grid[GRID_SIZE][GRID_SIZE];
	for (int i = 0; i < GRID_SIZE; i++)
	{
		for (int j = 0; j < GRID_SIZE; j++)
		{
			if (get_cell_wall_value(grid, i, j) >= 5)
				temp_grid[i][j] = '@';
			else
				temp_grid[i][j] = '.';
		}
	}
	memcpy(grid, temp_grid, sizeof(char) * GRID_SIZE * GRID_SIZE);
}

int main(void)
{
	char grid[GRID_SIZE][GRID_SIZE];
	randomize_grid(grid);

	for (int i = 0; i < 6; i++)
		smooth_grid(grid);

	print_grid(grid);

	return 0;
}

