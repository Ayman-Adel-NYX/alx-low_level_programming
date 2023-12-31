#include "main.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of a string.
 * @s: string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
