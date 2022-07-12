#include "main.h"
/**
<<<<<<< HEAD
* _puts_recursion - prints a string, followed by a new line
* @s: pointer to the string
* Return: void
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');	
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
=======
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

>>>>>>> 01305118d4c7bb169d1e9028a405a5574a7bc074
}

