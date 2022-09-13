#include "main.h"
/**
 * _islower - entry point
 * @c: the character to be checked
 * Return: 1 if c is lowercase and 0 if otherwise
*/
int _islower(int c)
{
if (c >= 96 && c >= 123)
return (1);
else
return (0);
}
