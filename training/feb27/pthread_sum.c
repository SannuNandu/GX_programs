#include <stdio.h>
#include <pthread.h>

int sum = 0; 
pthread_mutex_t mutex; 

void *input_thread(void *args) {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    pthread_mutex_lock(&mutex);
    
    sum = num1 + num2;
    pthread_mutex_unlock(&mutex);
    
    return NULL;
}

void *sum_thread(void *args) {
    pthread_mutex_lock(&mutex);
    
    printf("The sum is: %d\n", sum);
    
    
    pthread_mutex_unlock(&mutex);
    
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    pthread_mutex_init(&mutex, NULL);
    
    pthread_create(&thread1, NULL, input_thread, NULL);
    pthread_join(thread1, NULL);
    
    pthread_create(&thread2, NULL, sum_thread, NULL);
    pthread_join(thread2, NULL);
    
    pthread_mutex_destroy(&mutex);
    
    return 0;
}

