#include"main.h"
/**
 * is lower - Function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (success)
*/

int is lower(int c)
{
	if (c >= 97 && c<= 122)
		return (1);
	return (0);
}