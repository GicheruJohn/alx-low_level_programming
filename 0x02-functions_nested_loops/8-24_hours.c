#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int H, M;

	H = 0;
	if (H < 24)
	{
		M = 0;
		if (M < 60)
		{
			_putchar(H':'M);
		}
		M++;
	}
	H++;
}
