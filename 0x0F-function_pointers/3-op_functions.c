#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two number
 * @a: first number
 * @b: second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that subtracts two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that divides two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: a Divided value
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A function that returnsthe modulus
 *
 * @a: first number
 * @b: second number
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
