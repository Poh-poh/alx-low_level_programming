#include "main.h"
/**
 * print_last_digit - prints last digit only
 * @n: First operand
 * @last: second operand
 *
 * Return: last_digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
		if (last < 0)
		{
			last = last * -1;
		}
	_putchar(last + '0');
	return (last);
}
