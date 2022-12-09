#include <stdio.h>

/**
 * main - print in reverse
 * Return: Always 0
 */
int main(void)
{
	char po;

	for (po = 'z'; po >= 'a'; po--)
		putchar(po);

	putchar('\n');

	return (0);
}
