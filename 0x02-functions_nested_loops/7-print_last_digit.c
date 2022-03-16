#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: input value
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x = x * -1;

	_putchar(last + '0');

	return (x);
}
