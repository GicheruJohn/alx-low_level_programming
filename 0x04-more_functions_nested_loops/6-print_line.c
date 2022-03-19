#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times character _ is to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
