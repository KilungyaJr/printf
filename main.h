#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* _printf function prototype */
int _printf(const char *format, ...);

/* print function prototypes */
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);

/*print_int function*/
int print_int(va_list l, flags_t *f);
void print_number(int n);
int count_digit(int i);

/*print_perce function*/
int print_percent(va_list l, flags_t *f);

/*get_print function*/
int (*get_print(char s))(va_list, flags_t *);

/*get_flag function*/
int get_flag(char s, flags_t *f);

/* write_funcs prototype */
int _putchar(char c);
int _puts(char *str);


#endif /* ifndef MAIN_H */
