#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

/* print function prototypes */
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);

#endif /* ifndef MAIN_H */
