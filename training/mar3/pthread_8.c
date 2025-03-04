#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *pair_sum(void *args){

	int *pair=(int *)args;
	int sum=pair[0]+pair[1];
	printf("the sum of %d and %d is %d\n", pair[0], pair[1], sum);
	free(pair);
	return NULL;
}


int main(){
    int *arr;
    int i,size;
size:
    printf("enter the size of the array:");
    if(scanf("%d", &size)!=1 || size<=0){
	    printf("invalid\n");
	    while(getchar()!='\n');
	    goto size;
    }
    arr=(int *)malloc(size*sizeof(int));
    pthread_t thread[size];
    int thread_count=0;
    
array_elements:
    printf("enter %d array elemnets:\n", size);
    for(int i=0;i<size;i++){
        if(scanf("%d", &arr[i])!=1 && arr[i]<0){
            printf("invalid\n");
	    while(getchar()!='\n');
	    goto array_elements;
        }
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]%2==0 && arr[i+1]%2==0){
            int *pair=(int *)malloc(2*sizeof(int));
            pair[0]=arr[i];
            pair[1]=arr[i+1];
            if(pthread_create(&thread[i], NULL, pair_sum, (void *)pair) != 0){
                perror("thread creation failed");
		free(pair);
                
            }
            pthread_join(thread[i], NULL);
            thread_count++;
        }
        
    }
    free(arr);
    return 0;
}
