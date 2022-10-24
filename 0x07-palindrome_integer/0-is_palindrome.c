#include "palindrome.h"

/**
 * reversed_number - reverses an interger
 * @n: the number to reverse
*/

unsigned long int reversed_number(unsigned long int n)
{
	unsigned long int reversed = 0;

	while (n != 0)
	{
		reversed = reversed * 10;
		reversed = reversed + n % 10;
		n = n / 10;
	}

	return (reversed);
}

/**
 * is_palindrome - checks whether or not a given unsigned integer is a palindrome.
 * @n: number to check
*/
int is_palindrome(unsigned long n)
{
	unsigned long reversed;

	reversed = reversed_number(n);

	if (n == reversed)
		return (1);
	return (0);
}
