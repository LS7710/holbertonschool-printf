# C - printf Project

## Project Overview

This project, part of our software engineering journey, aims to replicate the basic functionality of the C standard library function printf. Our custom _printf function is designed to offer formatted output conversion by interpreting the input format. This project is a collaborative effort between Luis Soto and Xavier Cruz, under the guidance of Holberton School, Aguadilla Campus.

### Concepts
Through this project, we aim to deepen our understanding of the following concepts:

Approaching a Project
Group Projects
Pair Programming
Flowcharts
Writing our own printf function

Resources
To aid in our development, we've utilized the following resources:

Secrets of printf
Group Projects concept page
Flowcharts concept page
man 3 printf
Requirements
Environment: Ubuntu 20.04 LTS
Languages: C (GNU89 standard)
Compiler: gcc, with the flags -Wall -Werror -Wextra -pedantic -std=gnu89
Style: All code must adhere to the Betty style
Authorized Functions
The following functions and macros are authorized for use in this project:

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
Variadic functions macros (man 3 va_start, va_end, va_copy, va_arg)
Compilation
Code will be compiled with the following command:

Project Tasks
Simple printf: Implementation of _printf handling conversion specifiers c, s, and %.
Integer printing: Extend _printf to handle d and i conversion specifiers.
Man page: Create a manual page for our _printf function.

Testing
We encourage a rigorous testing process. The testing files, including main.c, are in a separate directory and are used to test the functionality of our _printf against various cases, including edge cases not specified by the printf man page.

Collaboration
This project is a team effort. We are employing pair programming techniques and conducting regular code reviews to ensure quality and consistency in our codebase.

Repository Structure
README.md: This file.
main.h: Header file containing all function prototypes used in the project.
Source files: Each containing different parts of the project implementation.
man_3_printf: Manual page for our custom _printf function.
Future Improvements
This is just the beginning. We plan to incrementally improve _printf by handling more conversion specifiers, flags, field width, precision, and length modifiers.
