#include "main.h"
/**
 * _isdigit - Entry point
 * @c: An input integer
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	char digits = '0';
	int isdigit = 0;

	for (digits = '0'; digits <= '9'; digits++)
	{
		if (c == digits)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit)
}
