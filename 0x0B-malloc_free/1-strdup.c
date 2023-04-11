#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int c, d;

	if (str == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;

	strout = (char *)malloc(sizeof(char) * (c + 1));

	if (strout == NULL)
		return (NULL);

	for (d = 0; d <= c; d++)
		strout[d] = str[d];

	return (strout);
}
