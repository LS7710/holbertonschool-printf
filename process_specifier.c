#include "main.h"
#include <unistd.h>

/**
 * process_specifier - Function to handle format for printf
 * @specifier: specifier to format
 * @args: list of arguments passed to the function
 * @count: pointer to the count of characters printed
 */
void process_specifier(char specifier, va_list args, int *count)
{
        switch (specifier)
        {
        case 'c': /* Existing implementation for 'c' */
        case 's': /* Existing implementation for 's' */
        case '%': /* Existing implementation for '%' */
        case 'd':
        case 'i':
                print_integer(va_arg(args, int), count);
                break;
        /* Handle default case if needed */
        }
}

