#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void process_specifier(char spec, va_list args, int *count);
void print_integer(int n, int *count);

#endif /* MAIN_H */
