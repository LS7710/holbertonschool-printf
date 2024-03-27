#include "main.h"
#include <unistd.h>

/**
 * _printf - Custom printf function to format and print data
 * This function mimics the standard printf function
 * @format: The format string containing directives
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0; /* Counter for the number of characters printed */
	va_list args; /* Variable argument list to handle multiple inputs */

	va_start(args, format); /* Initialize the variable argument list */

	if (!format) /* Check if the format string is NULL */
		return (-1); /* Return -1 to indicate an error */

	for (i = 0; format[i] != '\0'; i++) /* Main loop through the format string */
	{
		if (format[i] == '%') /* Check for format specifier */
		{
			i++; /* Assume the next character is a valid specifier */
			handle_format(format[i], args, &count); /* Calls function */
		}
		else
		{
			write(1, &format[i], 1); /* Write the current character to stdout */
			count++;
		}
	}

	va_end(args); /* Clean up the variable argument list */
	return (count); /* Return the number of characters printed */
}

