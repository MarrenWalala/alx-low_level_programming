#include <unistd.h>
#include "main.h"
/**
 * _islower - checks whether c is in lower case
 * @c: Character input
 * Return: Always 0 (Succcess)
 */
int _islower(int c)
{
	int alpha_lower = 0;
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
			alpha_lower = 1;
	}

	return (alpha_lower);
}
