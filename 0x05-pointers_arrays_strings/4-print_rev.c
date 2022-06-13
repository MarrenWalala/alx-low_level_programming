#include "main.h"
/**
 * print_rev - Entry point
 * @s: An input string
 * Return: Always 0
 */
void print_rev(char *s)
{
	char str_rev = strrev(s);
	int len = strlen(strrev);

	while (str_rev[len] != '\0'; len >= 0; len--)
	{
		_putchar(str_rev[len]);
	}
	_putchar('\n');
}
