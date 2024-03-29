#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - a custom version of the printf function
 * @format: format string
 *
 * Return: void
 */
void _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c': putchar(va_arg(args, int)); break;
                case 's': puts(va_arg(args, char*)); break;
                case '%': putchar('%'); break;
            }
        }
        else
            putchar(*format);
        format++;
    }
    va_end(args);
}

int func(void)
{
    _printf("Char: %c, String: %s%%\n", 'A', "Test");
    return (0);
}

