#include "main.h"

/**
 * find_factors - find the next number factor/ divisor
 * @n: whole number
 * @factor: whole number that is recursively reduced by 1
 *
 * Return: 1 if prime, else 0 not prime
 */ 
int find_factors(int n, int factor)
{
	if (factor == 1)
		return (1);
	else if (n % factor == 0)
		return (0);
	else
		return (find_factors(n, factor - 1));

}
/**
 * is_prime_number - checks if number is prime or not
 * @n: whole number
 *
 * Return: 1 prime number, 0 not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_factors(n, n - 1));
}
