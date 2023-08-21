#include <stdio.h>
/**
 * add - A function to add
 * @a: First number
 * @b: Second number
 * Return: Sum
 */

int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - A function to subtract
 * @a: First number
 * @b: Second number
 * Return: Subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - A function to multiply
 * @a: First number
 * @b: Second number
 * Return: Multiplier
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - A function to divide
 * @a: First number
 * @b: Second number
 * Return: Divider
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Can't divide by zero!\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - A function to find modulus
 * @a: First number
 * @b: Second number
 * Return: Modulus
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Can't modulate with zero!\n");
		return (0);
	}
	return (a % b);
}
