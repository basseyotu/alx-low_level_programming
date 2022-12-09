#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line except for q and e
 * Return: Always 0
 */
int main(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		if (lo != 'e' && lo != 'q')
			putchar(lo);
	}

	putchar('\n');

	return (0);
}
