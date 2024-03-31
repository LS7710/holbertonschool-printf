#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string that specifies the function's output.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    int count = 0;
    int i;
    va_list args;

    va_start(args, format);

    i = 0;
    while (format && format[i]) {
        if (format[i] == '%' && format[i + 1]) {
            i++; 
            switch (format[i]) {
                case 'c': count += print_char(va_arg(args, int)); break;
                case 's': count += print_string(va_arg(args, char*)); break;
                case '%': count += print_percent(); break;
                case 'd':
                case 'i': count += print_int(va_arg(args, int)); break;
                default: write(1, &format[i], 1); count++; break;
            }
        } else {
            write(1, &format[i], 1);
            count++;
        }
        i++;
    }

    va_end(args);
    return count;
}

