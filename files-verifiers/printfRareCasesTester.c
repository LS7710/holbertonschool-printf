#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * This tester is specifically designed for more advanced scenarios to validate the custom _printf function.
 * It extends basic testing by including cases for empty strings and strings containing non-printable characters,
 * as well as verifying the function's handling of extreme integer values (INT_MAX and INT_MIN). The objective
 * is to ensure the custom _printf not only matches the standard printf in typical use cases but also behaves
 * consistently in edge cases, accurately reflecting lengths and handling special character considerations.
 *
 * main - Entry point for extended tests
 *
 * Return: Always 0.
 */
int main(void)
{
    int len, len2;
    char empty_str[] = ""; /* Test for empty string */
    /* Includes non-printable characters as part of the string */
    char non_printable_str[] = {0x01, 0x02, 0x7F, '\0'};

    /* Test for an empty string */
    len = _printf("Empty string: [%s]\n", empty_str);
    len2 = printf("Empty string: [%s]\n", empty_str);
    if (len != len2) {
        printf("Length error for empty string: expected %d, got %d\n", len2, len);
    }

    /* Test for non-printable characters in a string */
    len = _printf("Non-printable string: [%s]\n", non_printable_str);
    len2 = printf("Non-printable string: [%s]\n", non_printable_str);
    if (len != len2) {
        printf("Length error for non-printable string: expected %d, got %d\n", len2, len);
    }

    /* Extreme values for integers */
    len = _printf("Max int: %d\n", INT_MAX);
    len2 = printf("Max int: %d\n", INT_MAX);
    if (len != len2) {
        printf("Length error for max int: expected %d, got %d\n", len2, len);
    }

    len = _printf("Min int: %d\n", INT_MIN);
    len2 = printf("Min int: %d\n", INT_MIN);
    if (len != len2) {
        printf("Length error for min int: expected %d, got %d\n", len2, len);
    }

    /* More tests as needed */

    return (0);
}

