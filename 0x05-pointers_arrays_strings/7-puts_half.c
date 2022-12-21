#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half = length / 2;

 if (length % 2 == 1)
 {
	 half = (length - 1) / 2;
 }

 for (int i = half; i < length; i++)
 {
	 putchar(str[i]);
 }

 putchar('\n');
}

