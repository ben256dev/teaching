#include <stdio.h>
#include <string.h>

void print_str(char* str)
{
	for (int i=0; str[i] != '\0'; i++)
		printf("%c", str[i]);
}

int length_str(char* str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++) {};
	return i;
}

int main(void)
{
	print_str("Hello\n");
	print_str("World\n");
	print_str("ChatGPT\n");
	print_str("OpenAI\n");
	print_str("CStrings\n");

	printf("length_str : %d, strlen : %lu\n", length_str("Hello\n"), strlen("Hello\n"));

	return 0;
}

