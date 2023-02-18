#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase\n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}

