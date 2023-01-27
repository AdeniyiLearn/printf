#include "main.h"
/**
 * _puts - function prints strings and prints a new line aftre
 * @str: pointer to strings of character
 *
 * Return: Void
 */

void _puts(char *str)
{
	char try;

	do {
		if (*str != '\0')
		{
			try = *str;
			_putchar(try);
		}
	} while (*str++);
}
