#include <stdlib.h>
#include <time.h>
/**
 * main - checkes wether the random number is posetive or negative
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is posetive", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative", n);
	return (0);
}
