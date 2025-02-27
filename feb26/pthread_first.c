#include <stdio.h>
#include <pthread.h>

void *thread_fun(void *args){
	printf("threadfunction\n");

}

int main()
{
	pthread_t thread;
	pthread_create(&thread,NULL,thread_fun,NULL);

	pthread_join(thread,NULL);

	printf("Main function\n");
	return 0;
}
