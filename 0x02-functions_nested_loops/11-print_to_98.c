#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 *
 * @n: integer input
 *
 * Return: void
 */
void print_to_98(int n)
{
	for (n < 98; n++)
	{
		while (n < 98)
			printf("%d, ", n);
	}
	for (n > 98; n--)
	{
		while (n < 98)
			printf("%d, ", n);
	}
	printf("98\n");
}
