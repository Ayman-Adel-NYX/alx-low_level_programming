#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The lth of the string.
 */
int _strlen_recursion(char *s)
{
	int lont = 0;

	if (*s)
	{
		lont++;

		lont +=  _strlen_recursion(s + 1);
	}

	return (lont);
}

