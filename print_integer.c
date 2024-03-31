#include "main.h"
#include <unistd.h>
#include <limits.h> /* Ensure this is included to use INT_MIN */

/**
 * print_integer - Prints an integer
 * @n: The integer to print
 * @count: Pointer to the counter of printed characters
 *
 * Description: This function is designed to handle printing
 * of integers, including the handling of INT_MIN.
 */
void print_integer(int n, int *count)
{
	char num;

	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11); /* INT_MIN as a string */
		*count += 11; /* Update the count for the length of INT_MIN */
		return;
	}

	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		n = -n; /* Make n positive */
	}

	if (n / 10)
	{
		print_integer(n / 10, count); /* Recursively print each digit */
	}

	num = n % 10 + '0'; /* Convert digit to ASCII */

	write(1, &num, 1);
	(*count)++;
}
