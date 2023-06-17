#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enty point
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
