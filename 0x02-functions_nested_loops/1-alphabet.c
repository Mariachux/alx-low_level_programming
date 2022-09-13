#include "main.h"

/** main - check the code
 *  Return: Always 0.
 *  print_alphabet- prints the alphabets in lower case
 */

void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}   
