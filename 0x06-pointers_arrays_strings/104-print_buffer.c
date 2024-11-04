#include "main.h"
#include <ctype.h>

/**
 * print_buffer -> prints a buffer
 * @b: the pointer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf(" ");
			if (j % 2 == 1)
				printf(" ");
		}
	}
	for (j = 0; j < 10 && i + j < size; j++)
	{
		char ch = b[i + j];
		if (isprint((unsigned char)ch))
			printf("%c", ch);
		else
			printf(".");
	}
	printf("\n");
}
