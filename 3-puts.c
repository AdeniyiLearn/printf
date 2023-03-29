#include "main.h"
/**
 * _puts - function prints strings and prints a new line aftre
 * @str: pointer to strings of character
 *
 * Return: the length of strings
 */

int _puts(char *str)
{
	char letter;
	int count = 0;
	
	while(*(str + count))
	{
	letter = str[count];
	if (letter != '\0')
	{
		putchar(letter);
		count++;
	}
	}
	return (count);
}
