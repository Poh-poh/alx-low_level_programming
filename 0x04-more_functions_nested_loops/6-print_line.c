#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * Return: 0
 * @n - first integer
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(x = 0; x <= n; x++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
