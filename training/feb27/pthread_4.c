#include <stdio.h>
#include <pthread.h>

int counter=0;
pthread_mutex_t mutex;

void *increment(void *thread_num){

	int id=*((int *)thread_num);
	pthread_mutex_lock(&mutex);
	counter++;
	printf("thread %d is running counter %d\n", id, counter);

	pthread_mutex_unlock(&mutex);

}


int main(){
	 pthread_mutex_init(&mutex, NULL);
	int i;
	pthread_t threads[5];

	int thread_numbers[5];

	for(i=0;i<5;i++){
		thread_numbers[i]=i+1;
		pthread_create(&threads[i],NULL,increment,&thread_numbers[i]);
	
	}

	for(i=0;i<5;i++){

		pthread_join(threads[i],NULL);
	
	}

	pthread_mutex_destroy(&mutex);
	return 0;
}
