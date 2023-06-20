#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - Print alphabet without q and e.
 *Return: 0 if success
 *
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')

putchar(letter);
}
letter++;
}
putchar('\n');

return (0);
}
