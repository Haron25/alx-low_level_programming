#include"main.h"
/**
 * print_last_digit - Print last digit of a number
 *
 * @n: Takes number input
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	putchar(lastdigit + '0');
	return (lastdigit);
}
