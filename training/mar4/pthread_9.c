#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t mutex;

void* thread_function(void* arg) {
    int thread_id = *(int*)arg;

    printf("Thread %d is trying to lock the mutex...\n", thread_id);

    
    int try_lock_result = pthread_mutex_trylock(&mutex);

    if (try_lock_result == 0) {
        
        printf("Thread %d successfully locked the mutex.\n", thread_id);
        sleep(2);  
        pthread_mutex_unlock(&mutex);
        printf("Thread %d unlocked the mutex.\n", thread_id);
    } else {
        printf("Thread %d could not lock the mutex (it is already locked).\n", thread_id);
    }

    return NULL;
}

int main() {
    pthread_t threads[3];
    int thread_ids[3] = {1, 2, 3};

    pthread_mutex_init(&mutex, NULL);

    for (int i = 0; i < 3; i++) {
        pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]);
        pthread_join(threads[i], NULL);
    }

   // for (int i = 0; i < 3; i++) {
   //     pthread_join(threads[i], NULL);
    //}

    pthread_mutex_destroy(&mutex);

    return 0;
}

