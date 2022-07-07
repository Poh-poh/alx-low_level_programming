#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * Return: void
 *
 * @size: integer
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 0; a < size; a++)
		{
			_putchar('\n');
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
