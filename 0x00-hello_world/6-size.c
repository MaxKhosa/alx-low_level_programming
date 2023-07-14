#include <stdio.h>


/**
 * main - Prints the size of various types on
 * the computer it is compiled and run on..
 * Return : Always 0.
 */

int main(void)

{
	Printf("Size of a char: %zu byte(s)\n", sizeof(char));

	Printf("Size of an int: %zu byte(s)\n", sizeof(int));
	Printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	Printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	Printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
