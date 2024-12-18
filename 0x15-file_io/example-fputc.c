#include <stdio.h>
#include <string.h>


int main()
{
	FILE *fd;
	char txt[70] = "The Lord has not given me the spirit of fear.";
	size_t len = strlen(txt);
	size_t i;

	fd = fopen("example2.txt", "w");

	if (fd == NULL)
		printf("File was not created");
	else
	{
		for (i = 0; i < len; i++)
		{
			printf("Writing the letter %c\n", txt[i]);
			fputc(txt[i], fd);
		}
		printf("Congratulations\n");
	}
	fclose(fd);
	return (0);
}
