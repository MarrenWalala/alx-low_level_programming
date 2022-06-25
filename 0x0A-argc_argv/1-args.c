#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: An input integer to param count
 * @argv: A pointer to an array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
