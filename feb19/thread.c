#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include <unistd.h>
#include <math.h>
u_int32_t val=0;
int cnt = 0;
pthread_mutex_t lock;
void primeturn()
{
     cnt=0;
    if (val<= 1)
        printf("%d is NOT prime\n", val);
    else {
        for (int i = 1; i <= val; i++) {
 
             if (val % i == 0)
                cnt++;
        }
	if(cnt>2)
	printf("It's not prime %d\n",val);
	else 
	printf("It's Prime %d\n",val);
	//cnt++;
	sleep(1);
}
}
void oddturn()
{
	if(cnt>2)
	{
		if(val%2 !=0){
		printf("oddturn = %d\n",val);
		sleep(1);
	}}
}
void eventurn()
{
	if(cnt>2)
	{
		 if(val%2==0)
		{
			printf("Eventurn = %d\n",val);
			sleep(1);
		}
 
	}
}
int main()
{
	pthread_mutex_init(&lock,NULL);
while(1)
{
	pthread_t newthread;
pthread_create(&newthread, NULL, primeturn, NULL);
pthread_join(newthread,NULL);
oddturn();
eventurn();
// pthread_join(oddturn,NULL);
//pthread_join(eventurn,NULL);
pthread_mutex_destroy(&lock);
val++;


}
}









