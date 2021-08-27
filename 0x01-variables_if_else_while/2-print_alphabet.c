#include<stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, followed by
 * a new line.
 * Return: 0 if exited without error, non-zero otherwise.
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
