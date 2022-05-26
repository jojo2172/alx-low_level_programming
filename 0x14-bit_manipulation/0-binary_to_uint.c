#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculates the length of the string
 * @s: input
 * Return: length of string
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - converts binary to decimal.
 * @b: binary input.
 * Return: decimal.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, count, powr = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1; b[i] != '\0'; i--, (powr = powr * 2))
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		count = ((b[i] - '0') * powr);
		dec += count;
	}
	return (dec);
}
