#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if program doesnt receive 2 arg
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		int a = 0, b = 0, product;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		product = a * b;
		printf("%d\n", product);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
