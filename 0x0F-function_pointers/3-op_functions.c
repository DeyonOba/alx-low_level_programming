#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: integer
 * @b: integer
 *
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: integer
 * @b: integer
 *
 * Return: subraction of numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two numbers
 * @a: integer
 * @b: integer
 *
 * Return: multiplication of numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: integer
 * @b: integer
 *
 * Return: division of numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_mod - the modulos of two numbers
 * @a: integer
 * @b: integer
 *
 * Return: modulos of numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
