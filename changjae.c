#include <stdio.h>
#include <time.h>

#define TIMES_TO_LOOP 1000000

int main(void)
{
	time_t seconds_taken;

	seconds_taken = time(NULL);
	for (int i = 0; i < TIMES_TO_LOOP; i += 100)
	{
		printf("%d : hello world!\n", i + 0);
		printf("%d : hello world!\n", i + 1);
		printf("%d : hello world!\n", i + 2);
		printf("%d : hello world!\n", i + 3);
		printf("%d : hello world!\n", i + 4);
		printf("%d : hello world!\n", i + 5);
		printf("%d : hello world!\n", i + 6);
		printf("%d : hello world!\n", i + 7);
		printf("%d : hello world!\n", i + 8);
		printf("%d : hello world!\n", i + 9);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 10);
		printf("%d : hello world!\n", i + 11);
		printf("%d : hello world!\n", i + 22);
		printf("%d : hello world!\n", i + 23);
		printf("%d : hello world!\n", i + 24);
		printf("%d : hello world!\n", i + 25);
		printf("%d : hello world!\n", i + 26);
		printf("%d : hello world!\n", i + 27);
		printf("%d : hello world!\n", i + 28);
		printf("%d : hello world!\n", i + 29);
		printf("%d : hello world!\n", i + 21);
		printf("%d : hello world!\n", i + 22);
		printf("%d : hello world!\n", i + 33);
		printf("%d : hello world!\n", i + 34);
		printf("%d : hello world!\n", i + 35);
		printf("%d : hello world!\n", i + 36);
		printf("%d : hello world!\n", i + 37);
		printf("%d : hello world!\n", i + 38);
		printf("%d : hello world!\n", i + 39);
		printf("%d : hello world!\n", i + 31);
		printf("%d : hello world!\n", i + 32);
		printf("%d : hello world!\n", i + 33);
		printf("%d : hello world!\n", i + 44);
		printf("%d : hello world!\n", i + 45);
		printf("%d : hello world!\n", i + 46);
		printf("%d : hello world!\n", i + 47);
		printf("%d : hello world!\n", i + 48);
		printf("%d : hello world!\n", i + 49);
		printf("%d : hello world!\n", i + 41);
		printf("%d : hello world!\n", i + 42);
		printf("%d : hello world!\n", i + 43);
		printf("%d : hello world!\n", i + 44);
		printf("%d : hello world!\n", i + 55);
		printf("%d : hello world!\n", i + 56);
		printf("%d : hello world!\n", i + 57);
		printf("%d : hello world!\n", i + 58);
		printf("%d : hello world!\n", i + 59);
		printf("%d : hello world!\n", i + 51);
		printf("%d : hello world!\n", i + 52);
		printf("%d : hello world!\n", i + 53);
		printf("%d : hello world!\n", i + 54);
		printf("%d : hello world!\n", i + 55);
		printf("%d : hello world!\n", i + 66);
		printf("%d : hello world!\n", i + 67);
		printf("%d : hello world!\n", i + 68);
		printf("%d : hello world!\n", i + 69);
		printf("%d : hello world!\n", i + 61);
		printf("%d : hello world!\n", i + 62);
		printf("%d : hello world!\n", i + 63);
		printf("%d : hello world!\n", i + 64);
		printf("%d : hello world!\n", i + 65);
		printf("%d : hello world!\n", i + 66);
		printf("%d : hello world!\n", i + 77);
		printf("%d : hello world!\n", i + 78);
		printf("%d : hello world!\n", i + 79);
		printf("%d : hello world!\n", i + 71);
		printf("%d : hello world!\n", i + 72);
		printf("%d : hello world!\n", i + 73);
		printf("%d : hello world!\n", i + 74);
		printf("%d : hello world!\n", i + 75);
		printf("%d : hello world!\n", i + 76);
		printf("%d : hello world!\n", i + 77);
		printf("%d : hello world!\n", i + 88);
		printf("%d : hello world!\n", i + 89);
		printf("%d : hello world!\n", i + 81);
		printf("%d : hello world!\n", i + 82);
		printf("%d : hello world!\n", i + 83);
		printf("%d : hello world!\n", i + 84);
		printf("%d : hello world!\n", i + 85);
		printf("%d : hello world!\n", i + 86);
		printf("%d : hello world!\n", i + 87);
		printf("%d : hello world!\n", i + 88);
		printf("%d : hello world!\n", i + 99);
		printf("%d : hello world!\n", i + 91);
		printf("%d : hello world!\n", i + 92);
		printf("%d : hello world!\n", i + 93);
		printf("%d : hello world!\n", i + 94);
		printf("%d : hello world!\n", i + 95);
		printf("%d : hello world!\n", i + 96);
		printf("%d : hello world!\n", i + 97);
		printf("%d : hello world!\n", i + 98);
		printf("%d : hello world!\n", i + 99);
	}
        int first_time_taken = time(NULL) - seconds_taken;

	seconds_taken = time(NULL);
	for (int i = 0; i < TIMES_TO_LOOP; i++)
	{
		printf("%d : hello world!\n", i);
	}
        int second_time_taken = time(NULL) - seconds_taken;

	printf("first  time taken in seconds: %ld\n", first_time_taken);
	printf("second time taken in seconds: %ld\n", second_time_taken);

	return 0;
}
