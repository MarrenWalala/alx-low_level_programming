#include <unistd.h>
#include "main.h"
/**
 * print_sign - Entry point
 *@n: An integer n
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int num_return;

	if (n > 0)
	{
		num_return = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num_return = 0;
		_putchar('0');
	}
	else
	{
		num_return = -1
		_putchar('-');
	}

	return (num_return);
}
