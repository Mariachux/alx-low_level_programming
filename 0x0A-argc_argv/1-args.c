#include <stdio.h>
#include "main.h"

/**
 * main- print thr number of erguments passed to the program
 * @agrc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
