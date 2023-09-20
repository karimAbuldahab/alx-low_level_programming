#include "main.h"

/**
 *print_sign - entry point
 *
 *@n: a function of c to check lower
 *
 *Return: 0 or 1 (success)
*/
int print_sign(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			{_putchar(48);
			return (0); }
		_putchar(43);
		return (1);
	}
	_putchar(45);
	return (-1);
}
