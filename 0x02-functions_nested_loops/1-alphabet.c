#include "main.h"
/**
 * main -entrypoint
 *
 * print_alphabet:prints the alphabet, in lowercase \n
 *
 * Return: Always 0
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
