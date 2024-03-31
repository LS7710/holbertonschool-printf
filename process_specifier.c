#include "main.h"
#include <stdarg.h>

/**
 * process_specifier - Processes each format specifier encountered in the
 * custom printf function and calls the appropriate function to handle
 * the printing of that data type.
 * @specifier: Character that specifies the data type.
 * @args: List of arguments passed to the function.
 * @count: Pointer to the count of characters printed.
 *
 * Description: This function handles format specifiers for printing
 * characters, strings, integers, and percentages. It delegates the
 * printing task to specific functions designed for each data type.
 */
void process_specifier(char specifier, va_list args, int *count)
{
	switch (specifier)
	{
	case 'c': /* Handle character type */
		print_char(va_arg(args, int), count); /* The character passes as int */
		break;
	case 's': /* Handle string type */
		print_string(va_arg(args, char *), count);
		break;
	case '%': /* Handle percent sign */
		print_char('%', count);
		break;
	case 'd': /* Handle decimal integer */
	case 'i': /* Handle integer */
		print_integer(va_arg(args, int), count);
		break;
	default: /* Handle unknown specifiers */
		print_char(specifier, count);
		break;
	}
}
