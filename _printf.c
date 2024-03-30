#include "main.h"

/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string that specifies the function's output.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    for (int i = 0; format && format[i]; i++) {
        if (format[i] == '%' && format[i + 1]) {
            i++; // Skip the '%'
            switch (format[i]) {
                case 'c': count += print_char(args); break;
                case 's': count += print_string(args); break;
                case '%': count += print_percent(); break;
                case 'd':
                case 'i': count += print_int(args); break;
                default: write(1, &format[i], 1); count++; break;
            }
        } else {
            write(1, &format[i], 1);
            count++;
        }
    }

    va_end(args);
    return count;
}

