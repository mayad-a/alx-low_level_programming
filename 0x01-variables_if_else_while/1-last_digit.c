#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int Last = n % 10;

	if (Last > 5)
		printf("%d is greater then 5\n", Last);
	else if (Last == 0)
		printf("%d is 0\n", Last);
	else if (Last < '6' && Last != '0')
		printf("%d and is less then 6 and not 0\n", Last);
	return (0);
}
