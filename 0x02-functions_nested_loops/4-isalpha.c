#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: parameter
 * Return: 1 for english character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
