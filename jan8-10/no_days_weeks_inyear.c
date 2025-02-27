#include <stdio.h>
int main(){
	int totaldays=1329;
	int years,weeks,days;
	years=totaldays/365;
	totaldays=totaldays%365;
	weeks=totaldays/7;
	days=totaldays%7;
	printf("years:%d\n", years);
	printf("weeks:%d\n", weeks);
	printf("days:%d\n", days);
	return 0;
}

