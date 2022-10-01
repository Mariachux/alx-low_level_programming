#include <stdio.h>
#include "main.h"

/**
 * main- print the number of arguments passed to the program
 * @argc: the number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
