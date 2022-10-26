#include "palindrome.h"

/**
 * reversed_int - reverses an interger
 * @n: the number to reverse
 * Return: the reversed number
*/
unsigned long int reversed_int(unsigned long int n)
{
	unsigned long int reversed = 0;

	while (n != 0)
	{
		reversed *=  10;
		reversed += (n % 10);
		n /= 10;
	}
	return (reversed);
}

/**
 * is_palindrome - checks whether or not a given unsigned int is a palindrome.
 * @n: number to check
 * Return: 1 if n is a palindrome, and 0 otherwise
*/
int is_palindrome(unsigned long n)
{
	unsigned long reversed;

	reversed = reversed_int(n);
	if (n == reversed)
		return (1);
	return (0);
}
