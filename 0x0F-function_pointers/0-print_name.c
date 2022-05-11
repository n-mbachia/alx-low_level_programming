#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name:input name
 * @f: function pointer
 *
 * Retunr: no return
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
