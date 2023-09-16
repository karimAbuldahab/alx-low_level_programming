#include "main.h"

/**
 *_islower - entry point
 *
 *@c: a function of c to check lower
 *
 *Return: 0 or 1 (success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
return (0);
}
