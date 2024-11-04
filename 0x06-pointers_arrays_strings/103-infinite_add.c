#include "main.h"

/**
 * infinite_add -> adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that stores the result
 * @size_r: size of the buffer
 * Return: 0 or r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry = 0, sum;
	int len1 = 0, len2 = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len1] != '\0')
		len1++;
	r[size_r - 1] = '\0';
	k = size_r - 2;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k--)
	{
		if (k < 0)
			return (0);
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	if (k > 0)
	{
		for (i = 0; r[k + 1 + i] != '\0'; i++)
			r[i] = r[k + 1 + i];
		r[i] = '\0';

	}
	else
		return (0);
	return (r);
}
