#include <stdio.h>
#include <string.h>

int main(void)
{
	const char* a = "bacon\n";
	const char* b = "eggs\n";
	const char* c = "ham\n";
	const char* d = "cheese\n";
	const char* e = "bread\n";
	for (int i=0; a[i] != '\0'; i++)
		printf("%c", a[i]);
	for (int i=0; b[i] != '\0'; i++)
		printf("%c", b[i]);
	for (int i=0; c[i] != '\0'; i++)
		printf("%c", c[i]);
	for (int i=0; d[i] != '\0'; i++)
		printf("%c", d[i]);
	for (int i=0; e[i] != '\0'; i++)
		printf("%c", e[i]);

	return 0;
}

