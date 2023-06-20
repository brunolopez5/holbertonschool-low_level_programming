#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - Print alphabet without q and e.
 *Return: 0 if success
 *
 */
int main(void)

char alp = 'a';

while (alp <= 'z')
{
if (alp != 'e' && alp != 'q')

putchar(alp);
}
alp++;
}
putchar('\n');

return (0);
}
