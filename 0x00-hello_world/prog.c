#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;

	printf("Enter a single character to be printed out: \n");


	c = getchar();
	printf("The entered character is: \n");
	putchar(c);
	putchar('\n');
	
	return (0);
}
