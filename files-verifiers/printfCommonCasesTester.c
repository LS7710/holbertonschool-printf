#include <stdio.h>
#include <limits.h> /* Include to use INT_MAX and INT_MIN */
#include "main.h" /* Make sure this is the correct name of your header file. */

/**
 * This tester is designed to verify the functionality of a custom _printf function.
 * It compares the output and return values of the custom _printf against the standard printf function
 * provided by the C library. The tests include printing characters, strings, percentages,
 * integers, and decimals. For each test, it checks if the length of the output matches between
 * both printf implementations, indicating correctness in the custom function's behavior.
 *
 * main - Entry point for tests
 *
 * Return: Always 0.
 */
int main(void)
{
    int len, len2;
    int test_int = -123; /* Test integer value */
    char test_char = 'A'; /* Test character */
    char *test_str = "Test string"; /* Test string */

    /* Test for character printing */
    len = _printf("Character: %c\n", test_char);
    len2 = printf("Character: %c\n", test_char);
    if (len != len2) {
        printf("Length error for character: expected %d, got %d\n", len2, len);
    }

    /* Test for string printing */
    len = _printf("String: %s\n", test_str);
    len2 = printf("String: %s\n", test_str);
    if (len != len2) {
        printf("Length error for string: expected %d, got %d\n", len2, len);
    }

    /* Test for printing a percentage symbol */
    len = _printf("Percentage: %%\n");
    len2 = printf("Percentage: %%\n");
    if (len != len2) {
        printf("Length error for percentage: expected %d, got %d\n", len2, len);
    }

    /* Tests for printing integers and decimals */
    len = _printf("Integer: %d\n", test_int);
    len2 = printf("Integer: %d\n", test_int);
    if (len != len2) {
        printf("Length error for integer: expected %d, got %d\n", len2, len);
    }

    len = _printf("Decimal: %i\n", test_int);
    len2 = printf("Decimal: %i\n", test_int);
    if (len != len2) {
        printf("Length error for decimal: expected %d, got %d\n", len2, len);
    }

    /* More tests as needed */

    return (0);
}

