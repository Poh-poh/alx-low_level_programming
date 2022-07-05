#include "main.h"
/**
 * main -entrypoint
 *
 * Description: 'Write a function that prints the alphabet, in lowercase, followed by a new line'
 *
 * Return: Always 0
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++);
	_putchar(c + 0);
	_putchar('\n');
}
