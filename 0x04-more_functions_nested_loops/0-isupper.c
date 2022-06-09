#include "main.h"
/**
 * _isupper - Entry point
 *@c: An integer c
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	char alpha;
	int digits = 0;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		if (c == alpha)
		{
			digits = 1;
		}
		else
		{
			digits = 0;
		}

	return (digits)
}
