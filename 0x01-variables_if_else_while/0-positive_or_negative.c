#include <stdlib.h>
#include <time.h>
/* program assigns random number each time when executed */

/* code returns negative, positive or zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2i
	if  ( n > 0)
		printf("%d is positive/n", n);
	else if (n  < 0)
		printf("%d is negative/n" ,n);
	else 
	printf("You entered 0")
		return (0);
}
