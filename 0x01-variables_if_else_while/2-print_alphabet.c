#include <stdio.h>
/**
 * main - program entry
 *
 * Description:  prints the alphabet in lowercase, followed by a newline
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	putchar(10);

	return (0);
}
