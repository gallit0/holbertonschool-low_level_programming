#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer it is compiled and run on
 *Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu", sizeof(char)); printf(" byte(s)\n");
	printf("Size of an int: %lu", sizeof(int)); printf(" byte(s)\n");
	printf("Size of a long int: %lu", sizeof(long int)); printf(" byte(s)\n");
	printf("Size of a long long int: %lu", sizeof(long long int)); printf(" byte(s)\n");
	printf("Size of a float: %lu", sizeof(float)); printf(" byte(s)");
	return (0);
}
