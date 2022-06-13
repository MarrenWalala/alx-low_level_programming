#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
