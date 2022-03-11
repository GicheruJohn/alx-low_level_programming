#include <stdio.h>
/**
 * main - program entry
 *
 * Description: prints the alphabet in lowercase except q and e
 *
 * Return: always 0
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
