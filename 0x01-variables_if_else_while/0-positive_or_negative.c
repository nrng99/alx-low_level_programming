#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return : Always 0 (succes/correct)
 */
int main(void)
{
	int n;
	srand(time(0))
	n = rand() - RAND_MAX / 2;
        if (n==0)
	{
		printf("%i is zero\n",n);
	}
	else if (n<0)
	{
		printf("%i is negative\n",n);
	}
	else 
	{
		printf("%i is zero\n",n);
	}
	
		/* your code goes there */

		return (0);

}
