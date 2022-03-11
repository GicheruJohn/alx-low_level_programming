#include <stdio.h>
/**
 * main - program entry
 *
 * Description: print the lowercase alphabets in reverse
 *
 * Return: always 0
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar(10);

	return (0);
}
