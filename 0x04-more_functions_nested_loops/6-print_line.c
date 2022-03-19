#include "main.h"
/**
 * print_line - draws a straight line
 * @n - number of times character _ is to be printed
 *
 * Return: _
 */
void print_line(int n);
{
	int x;

	for (x = '0'; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
