#include<stdio.h>
#include "main.h"
/**
 * main - print name of compling file
 * Return: 0 if sucess , non-zero otherwise
 */
int main(void)
{
	int i = 0;
	char *file;

	file =  __FILE__;
	while (file[i] != '\0')
	{
		_putchar(file[i]);
		i++;
	}
	_putchar('\n');
	return (0);

}
