#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - print buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{ptintf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		ptintf("0x%02x", buffer[1]);
		i++;
	}
}

