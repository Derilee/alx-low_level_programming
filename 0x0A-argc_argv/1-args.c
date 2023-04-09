#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter that prints the number of argument passed into it
 * @argv: argument vector
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
