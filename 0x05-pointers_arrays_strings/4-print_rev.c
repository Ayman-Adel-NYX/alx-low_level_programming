#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int len = 1, i;

	while (s[i++])
		len++;

	for (i = len; i > 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
