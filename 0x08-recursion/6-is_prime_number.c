#include "main.h"
/**
 * is_prime_number - Entry point
 * @n: An input integer
 * Return: Always 0
 */
int is_prime_number(int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
		return (1);
	}
}
