#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: An input integer for param count
 * @argv: A pointer to an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
