#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int sum1=0;
int sum2=0;
int size;
pthread_mutex_t mutex;

void *first_half(void *args){
	int *array=(int*)args;

	pthread_mutex_lock(&mutex);
	for(int i=0;i<size/2;i++){
		sum1=sum1+array[i];
	}
	printf("sum1:%d\n", sum1);
	pthread_mutex_unlock(&mutex);
	return NULL;
}


void *second_half(void *args){
	int *array=(int*)args;
	pthread_mutex_lock(&mutex);
	for(int i=size/2;i<size;i++){
		sum2=sum2+array[i];
	}
	printf("sum2:%d\n", sum2);

	pthread_mutex_unlock(&mutex);
	return NULL;

}

 void *result(void *args){
	 pthread_mutex_lock(&mutex);
	 int final;
	 final=sum1+sum2;
	 pthread_mutex_unlock(&mutex);

	 printf("final:%d\n", final);
	 return NULL;
 }



int main(){

	int i,*arr;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &size);

	arr = (int*)malloc(size * sizeof(int));
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	pthread_mutex_init(&mutex,NULL);
	pthread_t thread1,thread2,thread3;
	
	pthread_create(&thread1, NULL, first_half, (void *)arr);
	pthread_join(thread1,NULL);
	
	pthread_create(&thread2, NULL, second_half, (void *)arr);
	pthread_join(thread2,NULL);
	
	pthread_create(&thread3, NULL, result, NULL);
        pthread_join(thread3,NULL);

	free(arr);
	
	pthread_mutex_destroy(&mutex);
	
	return 0;

}
