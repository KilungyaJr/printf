#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

/* print function prototypes */
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);

/*print_int function*/
int print_int(va_list l, flags_t *f);

/*print_perce function*/
int print_perce(va_list l, flags_t *f);

/*get_print function*/
int (*get_print(char s))(va_list, flags_t *);

/*get_flag.c function*/
int get_flag(char s, flags_t *f);




#endif /* ifndef MAIN_H */
