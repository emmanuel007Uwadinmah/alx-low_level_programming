0x10-variadic_functions
The "stdarg.h" library in C programming language provides a mechanism for functions to accept a variable number of arguments. It is used to define functions that can take a variable number of arguments of different types.

The library provides the "va_list" type, which is a type that represents a list of arguments of varying types. Functions that use variable arguments take a "va_list" as a parameter, and use macros such as "va_start", "va_arg", and "va_end" to iterate over the arguments in the list.

Overall, "stdarg.h" is a useful library for defining functions that need to accept a variable number of arguments, such as printf(), scanf(), and many other standard library functions.
