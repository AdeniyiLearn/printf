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
