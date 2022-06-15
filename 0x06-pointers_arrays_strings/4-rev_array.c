#include "main.h"
/**
 * reverse_array - Entry point
 * @n: An input integer
 * @a: An input integer
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	aux[n];

	for (int i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
