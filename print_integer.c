#include "main.h"
#include <unistd.h>

/**
 * print_integer - Prints an integer
 * @n: The integer to print
 * @count: Pointer to the counter of printed characters
 */
void print_integer(int n, int *count)
{
	char num;

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

