#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer it is compiled and run on
 *Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char), " bytes(s)");
	printf("Size of an int: %lu\n", sizeof(int), "bytes(s)");
	printf("Size of a long int: %lu\n", sizeof(long int), "bytes(s)");
	printf("Size of a long long int: %lu\n", sizeof(long long int), "bytes(s)");
	printf("Size of a float: %lu\n", sizeof(float), "bytes(s)");
	return (0);
}
