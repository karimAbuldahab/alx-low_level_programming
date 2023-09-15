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
	int x;

	for (x = 48; x <= 57; x++)
	{
	putchar(x);
	if (x < 57)
	{
		putchar(',');
		putchar(' ');
	}

	}
	putchar('\n');
	return (0);
}
