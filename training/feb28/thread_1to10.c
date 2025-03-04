#include <stdio.h>
#include <pthread.h>

void *print_num(void *args){
    for(int i=1;i<=10;i++){
    printf("%d\n", i);
    }
    return NULL;
}




int main(){
    pthread_t thread;
  
    pthread_create(&thread,NULL,print_num,NULL);
    pthread_join(thread,NULL);
    
    return 0;
}
