#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[7] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
		_putchar(letters[a]);
	_putchar("\n");

	return (0);
}
