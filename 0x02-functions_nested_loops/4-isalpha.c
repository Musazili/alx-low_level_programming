#include "main.h"
/**
 * _isalpha - check the character in lowercase and uppercase
 *@c: character
 *Return: 1 if lowecase or uppercase and 0 if otherwise
*/
int _isalpha(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
if (c > 64 && c < 91)
{
return (1);
}
else
return (0);
}
