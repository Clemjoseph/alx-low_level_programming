#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: prints number from 0 to 9, skip 2 and 4
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
