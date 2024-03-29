#include "main.h"
#include <unistd.h>

/**
 * process_specifier - Function to handle format specifiers for printf
 * @specifier: Character that specifies the data type
 * @args: List of arguments passed to the function
 * @count: Pointer to the count of characters printed
 *
 * Description: This function processes each format specifier encountered
 * in the custom printf function and calls the appropriate function
 * to handle the printing of that data type.
 */
void process_specifier(char specifier, va_list args, int *count)
{
	switch (specifier)
	{
	case 'c': /* Handle character type */
	case 's': /* Handle string type */
	case '%': /* Handle percent sign */
	case 'd': /* Handle decimal integer */
	case 'i': /* Handle integer */
		print_integer(va_arg(args, int), count);
		break;
	default: /* Handle unknown specifiers */
		write(1, &specifier, 1);
		(*count)++;
		break;
	}
}

