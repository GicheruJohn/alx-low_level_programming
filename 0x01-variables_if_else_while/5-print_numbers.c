#include <stdio.h>
/**
 * main - program entry
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
