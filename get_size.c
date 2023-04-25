#include "main.h"

/**
 * get_size - returns the number of digits in an integer
 * @n: the integer to count the digits of
 *
 * Return: the number of digits in n
 */
int get_size(int n)
{
	int size = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}


