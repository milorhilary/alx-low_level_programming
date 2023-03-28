#include <stdio.h>
/*
 * main - Prints the alphabets (a - z).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
