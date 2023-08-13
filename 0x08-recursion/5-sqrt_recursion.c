#include "main.h"
#include <math.h>

/**
 * calculateSqrt - calculate the natural root of a number
 * @num: natural number
 * @guess: Guess
 * @epsilon: limit or threshold
 *
 * Return: root number
 */
double calculateSqrt(int num, double guess, double epsilon)
{
	double newGuess = 0.5 * (guess + num / guess);
	
	if (fabs(newGuess - guess) < epsilon)
	{
		return (newGuess);
	}
	else
	{
		return (calculateSqrt(num, newGuess, epsilon));
	}
}

/**
 * _sqrt_recursion - calculate the natural root of a number
 * @n: natural number
 *
 * Return: root number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		double initialGuess = n / 2.0;
		double epsilon = 0.000006;
		int root = calculateSqrt(n, initialGuess, epsilon);

	if (root * root == n)
		return (root);
	else
		return (-1);
	}
}
