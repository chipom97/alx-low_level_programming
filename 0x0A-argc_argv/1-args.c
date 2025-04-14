#include <stdio.h>
/**
* main - a program that prints the number of arguments passed into it.
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int len = argc - 1;

	(void)argv;
	printf("%d\n", len);

	return (0);
}
