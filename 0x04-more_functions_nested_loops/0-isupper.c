#include "main.h"
/**
 * _isupper - Entry point
 *@c: An integer c
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	char alpha;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		if (c == alpha)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
