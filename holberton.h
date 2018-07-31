#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct format - Struct format
 * @b: the letter
 * @func: function associated with letter
 */
typedef struct format
{
	char b;
	int (*func)(va_list);
} fm_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *);

int _printfc(va_list);
int _printfs(va_list);
int _printfp(va_list);
int _printfd(va_list);

#endif
