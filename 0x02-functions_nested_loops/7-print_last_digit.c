#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: An integer a
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)
{
	int n;

	if (a > 0)
		n = -1 * (a % 10);
	else
		n = a % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
