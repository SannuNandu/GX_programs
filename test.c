#include <stdio.h>
 void m(int *x){

	 *x=100;
 
 
 
 }



int main(){
	int x=10;
	m(&x);
	printf("%d", x);
	return 0;
}
