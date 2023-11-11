#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - function tat produces output according to a format
 * 
 * @format : a character string
 * 
 * Return : number of charcaters printed
*/
int _printf(const char *format, ...)
{
  va_list print;
  int x;
  char *a;
  char *b;
  va_start(print , format);
    if (format == NULL)
    {
      return(-1);
    }
  
   for (x = 0; format; x++)
    {
        if (*format != '%')
        {
            _putchar(*format);
        }
        else
        {
          format++;
        }
        if (*format == 'c')
        {
          _putchar(va_arg(print, int));       
        }
        if (*format == 's')
        {
          b = va_arg(print, char *);
          for (int i = 0; *b != '\0'; a++)
          {
              _putchar(*b);
          }
        }
        if (*format == '%')
        {
          _putchar('%');
        }
        format++;
    }
  va_end(print);
  return (x);
}
