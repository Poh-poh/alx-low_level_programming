#include "main.h"
/**
 * @n
 * @last_digit
 *
 * print_last_digit - prints the last digit of a number
 *
 * Return: last_digit
 */
int print_last_digit(int n,last_digit)
{
	last_digit = n % 10
		if (last_digit < 0)
		{
			last_digit = last_digit * -1);
		}
	putchar(last_digit + '0');
	return (last_digit);
}
