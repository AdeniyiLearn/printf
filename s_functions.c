#include "main.h"

/**
 * _strlen - function returns length
 *
 * @s: pointer to character
 *
 * Return: result
 *
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
