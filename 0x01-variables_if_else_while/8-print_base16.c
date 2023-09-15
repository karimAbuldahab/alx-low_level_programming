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

	for (x = 48; x <= 102; x++)
	{
	if (x < 58 || x > 96)
	putchar(x);
	}
	putchar('\n');
	return (0);
}
