#include "main.h"
/**
 * _isupper - Entry point
 *  @c: An input characte
 *  Return: Always 0 (Succcess)
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

