#include "main.h"
#include <stdio.h>
/**
* _pow_recursion - function that raises power
* @x: integer
* @y: integer
* Return: value
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
