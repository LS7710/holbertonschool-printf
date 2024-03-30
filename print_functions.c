#include "main.h"
#include <unistd.h>

/**
 * print_char - Prints a character
 * @c: The character to print
 * @count: Pointer to the counter of printed characters
 */
void print_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * print_string - Prints a string
 * @s: The string to print
 * @count: Pointer to the counter of printed characters
 */
void print_string(char *s, int *count)
{
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	/* A blank line is added after declarations as per Betty style guide */
	for (i = 0; s[i] != '\0'; i++)
	{
		print_char(s[i], count);
	}
}

