#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *
 * @n: integer input
 *
 * Return: absolute value of input n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
