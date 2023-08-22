#include "main.h"

/**
 * _strcat - Function to concatenate two strings
 * @dest: 1st String
 * @src: 2nd string
 *
 * Return: Always dest.
 */

char *_strcat(char *dest, char *src)
{
	char result[1000]; /* Initializing an array for the concatenated strings */
	int i = 0;
	int y = 0;

	while (dest[i] != '\0') /* Putting the 1st string in result. */
	{
		result[y] = dest[i];
		i++;
		y++;
	}
	i = 0;
	while (src[i] != '\0') /* Joining the 2nd string with the first in result. */
	{
		result[y] = src[i];
		i++;
		y++;
	}
	result[y] = '\0';

	i = 0;
	y = 0;
	while (result[y] != '\0') /* Putting the result into dest. */
	{
		dest[i] = result[y];
		y++;
		i++;
	}
	dest[i] = '\0'; /* Adding the null terminator */

	return (dest); /* returns the concatenated string*/
}
