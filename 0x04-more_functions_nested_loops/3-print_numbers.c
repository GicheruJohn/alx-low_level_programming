#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int x;

	for (x = '0', x < '10', x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
