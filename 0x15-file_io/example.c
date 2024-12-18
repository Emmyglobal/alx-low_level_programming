#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fd;
	fd = fopen("myText.txt", "a");

	if (fd == NULL)
		printf("File was not created");
	else
		printf("Congratulation!!!\n File was successfully created\n");

	fprintf(fd, "You have just one line here");
	fclose(fd);
}
