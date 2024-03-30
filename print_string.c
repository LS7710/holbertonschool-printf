#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - Prints a string.
 * @args: A va_list pointing to the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args) {
    char *str = va_arg(args, char *);
    int count = 0;

    // Handle null string by printing "(null)" as printf does.
    if (str == NULL) {
        str = "(null)";
    }

    // Iterate through the string and write each character.
    for (int i = 0; str[i] != '\0'; i++) {
        write(1, &str[i], 1);
        count++;
    }

    return count;
}

