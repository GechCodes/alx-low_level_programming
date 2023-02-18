#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Description: prints alphabet in lowercase\n
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	while (ch <= 'Z'
			)
	{
		putchar (ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

