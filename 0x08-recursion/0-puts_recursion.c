#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: An input character
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar("\n");
}
