#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_cond_t cond;
pthread_mutex_t mutex;

void *fun1(void *args){
	pthread_mutex_lock(&mutex);
	printf("thread1 is waiting for thread2 to give signal\n");
	
	pthread_cond_wait(&cond, &mutex);
	printf("received signal from thread2\n");
	pthread_mutex_unlock(&mutex);
	return NULL;

}

void *fun2(void *args){
	sleep(2);
	pthread_mutex_lock(&mutex);
	printf("sending signal to thread1\n");
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&mutex);
	return NULL;
}


int main(){
	pthread_t thread1,thread2;
	pthread_cond_init(&cond,NULL);
	pthread_mutex_init(&mutex,NULL);
	
	pthread_create(&thread1,NULL,fun1,NULL);
	pthread_create(&thread2,NULL,fun2,NULL);
	
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	pthread_cond_destroy(&cond);
	pthread_mutex_destroy(&mutex);
	
	return 0;

}
