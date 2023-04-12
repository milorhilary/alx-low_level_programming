#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int c, d, e, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c = 0; s1[c] != '\0'; c++)
		;
	for (d = 0; s2[d] != '\0'; d++)
		strout = malloc(sizeof(char) * (c + d + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (e = 0; e < c; e++)
		strout[e] = s1[e];

	limit = d;
	for (d = 0; d <= limit; e++, d++)
		strout[e] = s2[e];

	return (strout);
}
