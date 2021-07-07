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

    int max_number;
    int threads_num;

    if(argc<3){
        printf("\nNot enough arguments to start program");
        printf("\nUsage: ./prime <max_number> <number_of_threads>\n");
        return 0;
    };

    // max_number = argv[1];
    // threads_num = argv[2];
    printf("Max number %s\n", argv[1]);
    printf("Number of threads %s\n", argv[2]);

	int loop;
    int numbers[11];
    for(int i = 0; i <= 10; i++){
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