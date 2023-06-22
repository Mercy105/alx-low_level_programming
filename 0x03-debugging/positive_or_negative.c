#include "main.h"

/**
 * positive_or_negative - check id the number is +, - or 0
 * @i: number to be checked
 * Return: nothing on success
 */
void positive_or_negative(int i)
{
	if(i > 0)
		printf("%lu is positive\n");
	else if(i < 0)
		printf("%lu is negative\n");
	else 
		printf("%lu is zero\n");
}
