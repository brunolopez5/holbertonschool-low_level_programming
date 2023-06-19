#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - printing if n is positive, equal, or negative 
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n==0)
	{
		printf("%d is equal\n", n);
	}
	else (n<0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

