

/*

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void  myturn() {
   //while(1)
   for(int i = 0; i < 8; i++)
   {
    sleep(2);
    printf("My Turn! %d\n", i);
   }
}

void yourturn() {
   //while(1)
   for(int i = 0; i < 5; i++)
   {
    sleep(1);
    printf("Your Turn! %d\n", i);
   }
}

int main() {
   pthread_t newthread;
   
   //pthread_create(&newthread, NULL, myturn, NULL);
   myturn();
   yourturn();
}

this function will print 5 "Your Turn" and the main function will end. Before executing all "My turn" to the limit completely or we can say the main function is finished before thread is complete.







#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void* myturn(void* arg) {
   for(int i = 0; i < 8; i++)
   {
    sleep(2);
    printf("My Turn!: %d\n", i);
   }
}

void yourturn() {
   for(int i = 0; i < 5; i++)
   {
    sleep(1);
    printf("Your Turn!: %d\n", i);
   }
}

void ourturn() {
   for(int i = 0; i < 5; i++)
   {
    sleep(1);
    printf("our Turn!: %d\n", i);
   }
}

int main() {
   pthread_t newthread;

   pthread_create(&newthread, NULL, myturn, NULL);
   yourturn();
   ourturn();
   pthread_join(newthread, NULL);
}






#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void* myturn(void* arg) { //v --> arg
   int *iptr = (int *)arg; 
   for(int i = 0; i < 8; i++)
   {
    sleep(1);
    printf("My Turn!: %d argument: %d\n", i, *iptr);
    (iptr)++;
   }
}

void yourturn() {
   for(int i = 0; i < 5; i++)
   {
    sleep(1);
    printf("Your Turn!: %d\n", i);
   }
}

int main() {
   pthread_t newthread;
   int v = 5; 
   pthread_create(&newthread, NULL, myturn, &v);
   yourturn();
   pthread_join(newthread, NULL);
   printf("thread's done: v = %d\n", v);
}


*/



#include <stdio.h>
#include <pthread.h>
#include <stdbool.h>

int current_number = 1;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers
void *print_prime(void *arg) {
    while (1) {
        pthread_mutex_lock(&mutex);
        if (is_prime(current_number)) {
            printf("Prime: %d\n", current_number);
            current_number++;
        }
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

// Function to print even numbers
void *print_even(void *arg) {
    while (1) {
        pthread_mutex_lock(&mutex);
        if (current_number % 2 == 0 && !is_prime(current_number)) {
            printf("Even: %d\n", current_number);
            current_number++;
        }
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

// Function to print odd numbers
void *print_odd(void *arg) {
    while (1) {
        pthread_mutex_lock(&mutex);
        if (current_number % 2 != 0 && !is_prime(current_number)) {
            printf("Odd: %d\n", current_number);
            current_number++;
        }
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    pthread_t prime_thread, even_thread, odd_thread;

    // Create threads for printing prime, even, and odd numbers
    pthread_create(&prime_thread, NULL, print_prime, NULL);
    pthread_create(&even_thread, NULL, print_even, NULL);
    pthread_create(&odd_thread, NULL, print_odd, NULL);

    // Wait for threads to finish (in this case, they run infinitely)
    pthread_join(prime_thread, NULL);
    pthread_join(even_thread, NULL);
    pthread_join(odd_thread, NULL);

    return 0;
}

