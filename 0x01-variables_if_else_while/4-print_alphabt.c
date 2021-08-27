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
		if (ch != 'q' && ch != 'e')
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
