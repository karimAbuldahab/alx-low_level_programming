#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Description: a function of c to
 *
 *Return: always 0 (success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x == 'e' || x == 'q')
	{x++; }
	putchar(x);
	}
	putchar('\n');
	return (0);
}

