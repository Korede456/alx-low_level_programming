
#include "main.h"

/**
 * _islower - check if a number is uppercase or lowercase
 * @c: is the character to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}

return (0);
}
