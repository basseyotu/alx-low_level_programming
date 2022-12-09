#include <stdio.h>

/**
 * main - prints single digits base 10
 * Return: Always 0
 */
int main(void)
{
	int nu;

	for (nu = 0; nu < 10; nu++)
		putchar((nu % 10) + '0');

	putchar('\n');

	return (0);
}
