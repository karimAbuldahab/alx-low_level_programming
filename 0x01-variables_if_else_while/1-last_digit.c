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
	int n , d ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n%10;
	printf("Last digit of %d is ", n );
	if ( d > 5 )
		printf("%d and is greater than 5", d );
	else if ( n == 0 )
		printf("%d and is 0", d);
	else 
		printf("%d and is less than 6 and not 0", d);
	
	return (0);;
}
