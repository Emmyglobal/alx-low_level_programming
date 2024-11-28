#include <stdio.h>

void add(int a, int b)
{
	printf("The value of addition is %d\n", a + b);
}

void sub(int a, int b)
{
	printf("The value of subtraction is %d\n", a - b);
}

void mult(int a, int b)
{
	OB
	printf("The value of multiplication is %d\n", a * b);
}

int main()
{
	void (*pta_fun_arr[])(int, int) = {add, sub, mult};
	unsigned int ch, a = 10, b = 5;

	printf("Enter your choice, 0 for Addition, 1 for subtraction, 2 for multiplication\n");
	scanf("%d", &ch);

	if (ch > 2)
		return (0);

	(*pta_fun_arr[ch])(a, b);
	return (0);
}
