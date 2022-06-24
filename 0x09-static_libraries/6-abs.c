#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 *@a: An integer a
 *Return: Always 0 (Success)
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
