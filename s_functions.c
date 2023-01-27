#include "main.h"

/**
 * _strlen - function returns length
 * @s: pointer to character
 * Return: result
 */

int _strlen(const char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}
	return (count);
}

/**
 * string_put - prints each passed string character while not NULL
 * @string: character pointer passed
 * Return: void
 */

int string_put(char *string)
{
	do {
		_putchar(*string);
	} while (*string++);
	return (0);
}

/**
 * digital - print integer
 * @pin: inter parametet
 * return: number of printed character
 */

int digital(int pin)
{
	int *store = malloc(sizeof(pin));
	int c, count, d = 0, b;

	if (pin < 0)
	{
		pin *= -1;
		_putchar('-');
	}
	count = 0;
	while (pin > 9)
	{
		b = pin % 10;
		*(store + count) = b;
		pin -= b;
		pin /= 10;
		count++;
	}
	*(store + count) = pin;
	d = count + 1;
	for (c = 0; c < d; c++)
	{
		_putchar(*(store + count) + '0');
		count--;
	}
	return (c - 1);
}
