#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_percent - Prints a percent symbol
 *
 * Return: The number of characters printed
 */
int print_percent(void) {
    char percent = '%';
    return write(1, &percent, 1);
}

