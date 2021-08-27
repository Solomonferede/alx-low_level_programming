#include<stdio.h>
/**
 * main - a program that prints numbers followed by
 * a new line.
 * Return: 0 if exited without error, non-zero otherwise.
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
