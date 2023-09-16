#include "main.h"

/**
 *_isalpha - entry point
 *
 *@c: a function of c to check lower
 *
 *Return: 0 or 1 (success)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
			{return (0);}
		return (1);
	}
	return (0);
}
