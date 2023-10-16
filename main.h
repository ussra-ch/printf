#ifndef MY_FUN
#define MY_FUN

#include "sdtarg.h"
#include "stdlib.h"

int print_s(va_list arg);
int print_c(va_list arg);
int print_percent(va_list arg);
int get_flags(const char *format, int *i);
#endif
