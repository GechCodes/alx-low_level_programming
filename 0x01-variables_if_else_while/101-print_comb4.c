#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int oneth = '0';
	int tenth = '0';
	int hundredth = '0';

	for (hundredth = '0'; hundredth <= '9'; hundredth++)
	{
		for (tenth = '0'; tenth <= '9'; tenth++)
		{
			for (oneth = '0'; oneth <= '9'; oneth++)
			{
				if (!((oneth == tenth) || (tenth == hundredth) ||
							(tenth > oneth) || (hundredth > tenth)))
				{
					putchar(hundredth);
					putchar(tenth);
					putchar(oneth);
					if (!(oneth == '9' && hundredth == '7' &&
								tenth == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

