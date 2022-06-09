#include "main.h"
/**
 * _isdigit - Entry point
 * @c: An input integer
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int digits = 0;
	int isdigit = 0;

	for (digits = 0; digits < 10; digits++)
	{
		if (c == digits)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit)
}
