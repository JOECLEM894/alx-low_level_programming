#include <stdio.h>
/**
 * main - print exactly c
 *
 * Return: o on success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d);
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);

}
