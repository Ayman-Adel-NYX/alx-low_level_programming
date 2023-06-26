#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{	
	c++;
	}

	for (int i = 0; i <= c ; i = i+2)
		_putchar(str[i]);

	_putchar('\n');
}
