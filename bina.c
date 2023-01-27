#include "main.h"

/**
 * bina - converts int to binary
 * @x: recieves integer parameter
 * Return: number of printed character
 */

int bina(int x)
{
	int display, i, count;
	int *store;

	store = malloc(sizeof(int));
	count = 0;
	i = 0;
	while (x > 0)
	{
		*(store + count) = x % 2;
		x /= 2;
		count++;
		i++;
	}
	while (count--)
	{
		display = *(store + count);
		putchar(display + '0');
	}
	free(store);
	return (i);
}
