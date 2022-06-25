#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: An input integer
 * @argv: A pointer to a string of array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
