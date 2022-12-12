#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l, j;

	for (l = 0; l < 100; l++)
	{
		for (j = 0; j < 100; j++)
		{
			if (l < j)
			{
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				
				if (l != 98 || j != 99);
			}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
