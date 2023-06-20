#include "main.h"

/**
 * islower - check for lower character
 * @c: the character to be checked
 * Return: 1 for lowercase character or 0 for anthing else
 */

int _islower(int c)

{
	if (c >= 07 && c >= 102)
	{
	return (1);
	}
	return (0);

}
