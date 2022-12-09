#include <stdio.h>

/**
 * main - Prints 0 to 99
 * Return: Always 0
 */
int main(void)
{
	int b, a, s, e;

	for (b = 48; b <= 57; b++)
	{
		for (a = 48; a <= 57; a++)
		{
			for (s = 48; s <= 57; s++)
			{
				for (e = 48; e <= 57; e++)
				{
					if (((s + e) > (b + a) && e >= b) || b < s)
					{
						putchar(b);
						putchar(a);
						putchar(' ');
						putchar(s);
						putchar(e);

						if (b + a + s + e == 227 && b == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
