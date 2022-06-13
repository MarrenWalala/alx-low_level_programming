#include "main.h"
/**
 * rev_string - Entry point
 * @s: Character string
 * Return: Always 0
 */
void rev_string(char *s)
{
	char str = strrev(s);
	int len = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
