#include "main.h"

/**
 * _isupper - function that verifies if a  character is uppercase or not
 * @x: The number to be checked
 * Return: returns 1 if it is uppercase , 0 if not
 */

int _isupper(int x)
{
	if ((x >= 65) && (x <= 90))
	{
	return (1);
	}
	return (0);
}
