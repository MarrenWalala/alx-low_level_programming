#include "main.h"
#include <stdio.h>
/**
 * main - Entry point, prints the name of the program
 * @argc: An input integer
 * @argv: A pointer to a pointer of an array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("Argc value is %d\n", argc);
	printf("Program name is %s\n", argv[0]);

	return (0);
}
