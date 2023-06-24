#include "main.h"

/**
 * print_numbers - Print 0 - 9 only using _putchar twice
 *
 * Return: 0
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(nim + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
