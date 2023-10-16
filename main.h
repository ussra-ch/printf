#ifndef MY_FUN
#define MY_FUN

#include "sdtarg.h"
#include "stdlib.h"

int print_s(va_list arg);
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);
