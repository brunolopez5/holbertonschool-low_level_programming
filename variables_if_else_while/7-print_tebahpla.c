#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 * 
 * Return: Always 0
 *
 */
int main(void)
{
	int apl;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
