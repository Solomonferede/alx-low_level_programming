#include<stdio.h>
/**
 * main - prints alphabets in lower and upper case
 * Return: 0 if exited without error,non-zero otherwise.
 */
int main(void)
{
	char ch = 'a';
	char chu = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	putchar('\n');
	return (0);
}
