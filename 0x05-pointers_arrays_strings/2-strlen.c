#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string count
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
