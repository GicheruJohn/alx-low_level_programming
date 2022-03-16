#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int x = 0;

	while (x < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		x++;
	}
}
