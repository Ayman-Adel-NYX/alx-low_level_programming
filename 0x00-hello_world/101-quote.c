#include <unistd.h>

/**
 * main - Enrty point
 *
 * Descraption: print a qsd
 *	write
*/

int main(void)
{
	char quo[] = "and that piece of art is usefu\l" - Dora Korpar, 2015 - 10 - 19\n";

	write(1,quo,59);
	return (1);
}
