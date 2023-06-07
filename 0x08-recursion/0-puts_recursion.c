#include "main.h"

int _puts_recursion (char *s)
{
    if (s == '\0')
    {
        return (1);
    }
    _putchar("%c", s);
    _puts_recursion(s[n + 1]);
}

