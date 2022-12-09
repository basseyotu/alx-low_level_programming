#include <stdio.h>

/**
 * main - print in single digits
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = '0'; n <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

