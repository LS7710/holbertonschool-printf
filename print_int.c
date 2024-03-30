#include <limits.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_integer - Recursively prints an integer character by character
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */
int print_integer(int n) {
    int count = 0;
    if (n < 0) {
        if (n == INT_MIN) {
            count += write(1, "-", 1);
            count += print_integer(-(n / 10));
            count += print_integer(-(n % 10));
            return count;
        }
        n = -n;
        count += write(1, "-", 1);
    }
    if (n / 10) {
        count += print_integer(n / 10);
    }
    char digit = '0' + (n % 10);
    count += write(1, &digit, 1);
    return count;
}

/**
 * print_int - Prepares an integer for printing and invokes print_integer
 * @args: The variadic arguments list, expected to contain an integer
 *
 * Return: The number of characters printed
 */
int print_int(va_list args) {
    int n = va_arg(args, int);
    return print_integer(n);
}

