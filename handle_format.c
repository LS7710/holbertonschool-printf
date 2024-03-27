#include <unistd.h> /* For write() function */
#include <stdarg.h> /* For va_list */

/**
 * handle_format - Handles the formatting for specifiers
 * @spec: The current format specifier
 * @args: List of arguments passed to the printf function
 * @count: Pointer to the counter of printed characters
 */
void handle_format(char spec, va_list args, int *count)
{
	switch (spec)
	{
	case 'c': /* Character printing */
	{
		char c = (char)va_arg(args, int);

		write(1, &c, 1); /* Output the character to stdout */
		(*count)++; /* Increase character count */
		break;
	}
	case 's': /* String printing */
	{
		char *str = va_arg(args, char *);

		while (str && *str)
		{
			write(1, str++, 1); /* Output the entire string to stdout */
			(*count)++;
		}
		break;
	}
	case '%':
		write(1, &spec, 1); /* Output the percentage sign to stdout */
		(*count)++;
		break;
	default:
		write(1, "%", 1);    /* Output the '%' char as it is */
		write(1, &spec, 1);  /* Output the unrecognized specifier */
		(*count) += 2;       /* Increment count for both characters */
	}
}

