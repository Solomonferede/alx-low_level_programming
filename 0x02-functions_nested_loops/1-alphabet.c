#include "holberton.h"
/**
 * print_alphabet - print the alphabet in lower case
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

