#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: Print _putchar
  *
  * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		putchar(str[ch]);
	putchar('\n');

	return (0);
}
