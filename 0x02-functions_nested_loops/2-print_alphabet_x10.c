#include <unistd.h>
#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *
 *Description: a function of c to print alphabet
 *
 *Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int a;
	int x;

	for (a = 0; x <=  9; a++)
	{
		for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	}
}
