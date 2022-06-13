#include "main.h"
/**
 * swap_int - Entry point
 * @a: An integer input
 * @b: An integer input
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
