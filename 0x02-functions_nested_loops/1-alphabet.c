#include"main.h"
/**
 * Print_alphabet - utilizes on the _putchar function to print alphabet a - z
 *
*/
void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++);
		putchar(ch);
	putchar('\n');
}
