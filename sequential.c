#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



static bool IsPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}


int main()
{

    int max_number = 10000;
    int i; 

    for(i=0; i < max_number; i++)
    {
        if(IsPrime(i))
            printf("%d\n", i);
    }

	printf("\n");
	return 0;
}