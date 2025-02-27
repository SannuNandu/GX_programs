#include <stdio.h>
#include <pthread.h>

void *thread_fun(void *args){
	int number=*((int *)args);
	printf("thread number:%d\n", number); //reads the value at the memory location pointed to by arg (which is now treated as an int*) and assigns it to the variable number
	return NULL;

}


int main(){
	pthread_t thread;
	int number=30;
	pthread_create(&thread,NULL,thread_fun,&number);

	pthread_join(thread,NULL);

	return 0;


}
