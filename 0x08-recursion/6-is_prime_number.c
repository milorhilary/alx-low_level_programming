#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @r: iterator.
 * Return: 1 if n is prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int r)
{
	if (n % r == 0)
	{
		if (n == r)
			return (1);
	}
	return (0 + is_prime(n, r + 1));
}
/**
 * is_prime_number - detects if an input number.
 * @n: inpurt number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is prime(n, 2));
}
