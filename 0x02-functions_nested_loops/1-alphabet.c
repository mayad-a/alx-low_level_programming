#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphapet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
}
