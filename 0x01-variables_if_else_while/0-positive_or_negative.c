#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - print random number
 *
 * Return: Alaways 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		return ("%d is positive\n", n);
	else if (n < 0)
		return ("%d is negative\n", n);
	else
		return ("%d is zero\n", n);
	return (0);
}
