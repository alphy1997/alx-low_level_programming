#include "main.h"
/**
 * evaluate - evaluate function sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */
int evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (evaluate(i * 1, n));
	else if (i * i == n)
		return (i);
	else
		return (-1);
		return (-1);
}

/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integer
 * Return: sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (evaluate(i, n));
}
