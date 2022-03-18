#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	j = '0';
	while (j < 10)
	{
		i = '0';
		while (i <= '9' + '5')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');

		j++;
	}
}
