#include <unistd.h>
#include "main.h"

/**
 *main - entry point
 *
 *Description: a function of c to
 *
 *Return: always 0 (success)
*/
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{_putchar(x); }
	_putchar('\n');
}
