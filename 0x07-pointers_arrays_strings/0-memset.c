#include "main.h"

/**
 * _memset - wwe
 *
 * @s: sd
 * @b: sd
 * @n: sd
 *
 * Return: sd
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; s[i] && i <= n; i++)

		s[i] = b;

	return (s);
}
