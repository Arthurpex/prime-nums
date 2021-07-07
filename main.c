#include <stdio.h>
#include <stdbool.h>

static bool IsPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}



int main(int argc, char *argv[])
{
	int loop;
    int numbers[1001];
    for(int i = 0; i <= 1000; i++){
    numbers[i] = i;
}
	//calculate length of the array
	int len = sizeof(numbers)/sizeof(numbers[0]);

	//print array elements with message
	//"prime" or "Not prime"
	for(loop=0; loop<len; loop++)
	{
		// printf("%3d - %s\n",numbers[loop],(isPrime(numbers[loop])?"Prime":"Not Prime"));
        if(IsPrime(numbers[loop]))
            printf("%d\n", numbers[loop]);
	}

	printf("\n");

	return 0;
}