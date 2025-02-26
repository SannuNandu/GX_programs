#include <stdio.h>
int main(){
	int sizeofint;
	sizeofint=sizeof(int);
	int sizeoffloat;
	sizeoffloat=sizeof(float);
	int sizeofcharacter;
	sizeofcharacter=sizeof(char);
	int sizeofdouble;
	sizeofdouble=sizeof(double);
	printf("size of interger is:%d\n", sizeofint);
	printf("size of float is:%d\n",  sizeoffloat);
	printf("size of character:%d\n", sizeofcharacter);
	printf("size of double:%d\n", sizeofdouble);
	return 0;
}

