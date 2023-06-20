#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/* Main function:assign a random number to the variable n 
 * each time it is executed
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 6 && n != 0)
		printf("Last digit of "n" is %d and is less than 6 and not 0\n", n);
	if (n == 0)
		printf("Last digit of "n" is %d and is 0\n", n);
	else
		printf("Last digit of "n" is %d and is greater than 5\n", n);
	return (0);
}
