#include "main.h"

/**
 * print_times_table - prints time table
 * @n : times table to use
 * Description: prints the times table
 * Return:void
 */

void print_times_table(int n)
{

int a = 0, rep, b;

if (n < 0 || n > 15)
 return;

while (a <= n)
{
 for (b = 0; b <= n; b++)
 {
  rep = a * b;
