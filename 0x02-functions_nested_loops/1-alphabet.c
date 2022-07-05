#include <main.h>
/**
 * main -entrypoint
 *
 * return void
 *Write a function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++);
	putchar(c);
	putchar('\n');
}
