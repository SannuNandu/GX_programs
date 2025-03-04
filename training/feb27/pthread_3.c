
#include <stdio.h>
#include <pthread.h>

void *thread_fun(void *args){
	int thread_num = *((int *)args);
	printf("Thread %d is running\n", thread_num);
	return NULL;
}

int main()
{
	int i;
	pthread_t threads[3];
	int thread_numbers[3]={1,2,3};

	for(i=0;i<3;i++){
		pthread_create(&threads[i],NULL,thread_fun,&thread_numbers[i]);
	}

	for(i=0;i<3;i++){
		pthread_join(threads[i],NULL);

	}

	printf("Completed\n");
	return 0;
}

