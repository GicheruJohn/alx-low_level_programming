#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program entry
 *
 * Description: program prints whether number stored
 * in variable n is positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}