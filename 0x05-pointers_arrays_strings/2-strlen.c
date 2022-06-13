#include "main.h"
/**
 * _strlen - Entry point
 * @s: String input
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
