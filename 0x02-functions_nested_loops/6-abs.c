#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *
 * @n: integer input
 *
 * Return: always 0
 */
int _abs(int n)
{
	if (n >= 0)
		_putchar(n);
	else
		_putchar(n * -1);
}
