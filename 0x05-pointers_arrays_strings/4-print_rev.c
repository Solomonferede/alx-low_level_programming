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

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
