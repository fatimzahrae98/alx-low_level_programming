#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Enty point
 *   * Return: Always 0.
 */

int main(void)
{
	int d;
	char i;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

