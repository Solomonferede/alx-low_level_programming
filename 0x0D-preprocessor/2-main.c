#include<stdio.h>
#include "main.h"
/**
 * main - print name of compling file
 * return: 0 if sucess , non-zero otherwise
 */
int main()
{
	int i = 0;

	char *file =  __FILE__;
	while(file[i] != '\0')
	{
		_putchar(file[i]);
		i++;
	}
	_putchar('\n');
	return (0);

}
