#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <pthread.h>

long max_number;
long qt_threads;


static bool is_prime(int number)
{   
    if (number == 1)
        return false;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 && i != number)
            return false;
    }
    return true;
}

void * is_prime_thread(void *arg){
    long tid;
    tid = (long)arg;
    
    int i; 
    for(i=tid; i < max_number; i+=qt_threads)
    {
        if(is_prime(i))
            printf("%d\n", i);
    }

    pthread_exit(NULL);
}


int main(int argc, char *argv[])
{

    if (argc < 3){
        printf("\nNot enough arguments to start program");
        printf("\nUsage: ./prime <max_number> <number_of_threads>\n");
        return 0;
    };

    printf("Max number %s\n", argv[1]);
    printf("Number of threads %s\n", argv[2]);

    max_number = strtol(argv[1], NULL, 10);

    qt_threads = strtol(argv[2], NULL, 10);

    pthread_t prime_t[qt_threads];

    long i;
    for (i = 1; i < qt_threads; i++) {
        pthread_create(&prime_t[i], NULL, is_prime_thread, (void *)i);
    }
    for (i = 1; i < qt_threads; i++) {
        pthread_join(prime_t[i], NULL);
    }

	printf("\n");
	return 0;
}