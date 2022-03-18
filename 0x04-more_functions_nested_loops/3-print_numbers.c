#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char num;

	for (num = '0', num < '10', num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
