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
	int i = 0; /* Initialization of variable i outside the while loop */

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0') /* Conditional for the end of the string */

	{
		print_char(s[i], count);
		i++; /* We increment i to move to the next character */
	}
}
