#include <stdio.h>
/**
 * main - Enter point
 * Return Always 0 (Sucsses)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytr(s)\n", sizeof(long long int));
	printf("Size pf a flaot: %lu byte(s)\n", sizeof(float));
	return (0);
}
