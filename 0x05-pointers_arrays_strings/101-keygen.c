#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[100];
	int i = 0;
	int rands = 0;
	int total = 0;

	srand((unsigned int)(time(NULL)));

	for (i = 0; total <= 2644; i++)
	{
		rands = (rand() % 25) + 65;
		password[i] = rands;
		total = total + rands;
	}

	password[i++] = 2772 - total;
	password[i++] = '\0';
	printf("%s\n", password);

	return (0);
}
