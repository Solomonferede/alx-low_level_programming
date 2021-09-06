#include "main.h"
/**
 * swap_int - function that swap two integers
 * @a:paramets to be swaped
 * @b:paramets to be swaped
 */
void swap_int(int *a, int *b)
{
	int middle_number;

	middle_number = *a;
	*a = *b;
	*b = middle_number;
}
