#include "main.h"
/**
 * reverse_array - Entry point
 * @n: An input integer
 * @a: An input integer
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
