#include "main.h"

/**
 * strcat - Concatenates thinted to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int i = 0;
	int m = 0;

	while (dest[i++])
		m++;

	for (i = 0; src[i]; i++)
		dest[m++] = src[i]

	return (dest);
}
