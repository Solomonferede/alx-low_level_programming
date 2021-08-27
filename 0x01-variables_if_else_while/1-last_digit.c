#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * The program which finds the last digit of a random number
 */

/**
 * main - generate a rundom number and find the last digit of the number.
 * Return: 0 if exited without error and non-zero value otherwise
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
		printf(" and is greater than 5\n");
	else if (lastDigit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
