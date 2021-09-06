#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * print_rev - prints string in reverse
 * @s:parameter
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
