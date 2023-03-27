#include "main.h"

/**
 * bina - converts int to binary
 * @num: recieves integer parameter
 * Return: number of printed character
 */

int bina(unsigned long int num)
{
	unsigned long int con, retain, *intarray, count = 0, len = 0, num_copy;
	unsigned long int new_count;

	num_copy = num;
/* Get number of time divided for array size*/
	while (num_copy > 0)
	{
		num_copy = num_copy / 2;
		len++;
	}
	intarray = malloc(sizeof(int) * len);

	/* Calculate binary through long division*/
	while (num > 0)
	{
		con = num % 2;
		*(intarray + count) = con;
		retain = num / 2;
		num = retain;
		count++;
	}

	/* reverse the binary*/
	new_count = count - 1;
	while (new_count--)
	{
	_putchar(intarray[new_count] + '0');
	}
	free(intarray);
	return (len);
}
