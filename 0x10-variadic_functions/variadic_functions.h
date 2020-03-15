#ifndef VARIADIC_FUNCTIONS_H_FILE
#define VARIADIC_FUNCTIONS_H_FILE

/**
 * struct est- Numbers structure
 * @c: It's a variable char
 * @p: It's a function void
 */
typedef struct est
{
	char c;
	void (*p)(va_list list);
} st_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
