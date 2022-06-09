#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @a: An input integer
 * Return: Always 0 (Success)
 */
int main(int a)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 != 0 && a % 5 != 0)
		{
			printf("%d", a);
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		printf(' ');
	}
	printf('\n');
}

