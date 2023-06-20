#include <stdio.h>
/**
 *main - Always 0
 *Return: 0 if success
 *
 */
int main(void)
{
        char alp = 'a';
	char alphabet = 'A';

        for (alp = 'a'; alp <= 'z'; alp++)
        {
                putchar(alp);
        }
        for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

        return (0)
}
