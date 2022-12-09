#include <stdio.h>

/**
 * main - Prints combo of numbers
 * Return: Always 0
 */
int main(void)
{
	int k, i;

	for (k = '0'; k <= '9'; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (k < i)
			{
				putchar(k);
				putchar(i);

				if (c != '8' || (k == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0)
}
