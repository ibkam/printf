#include "main.h"

/**
 * _printf - takes the format string and returns the printed chars
 *@format:A string with characters
 *Return:total count of the printed characters
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	pr_elem f_list[] = {
		{"c", pr_chr},
		{"s", pr_str},
		{"%", pr_per},
		{"d", pr_int},
		{"i", pr_int},
		{"b", pr_bi},
		{"r", pr_rev},
		{"o", pr_oct},
		{"x", pr_hex},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = decipher(format, f_list, arg_list);

	va_end(arg_list);

	return (printed_chars);
}
