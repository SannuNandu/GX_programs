#include <stdio.h>
int main()
{
int Age;
float cgpa;
char Name[50] ,College[50];
printf("PERSONAL DETAILS:\n");
printf("Enter your Name : ");
scanf("%s", Name);
printf("Enter your Age : ");
scanf("%d", &Age);
printf("Enter your College : ");
scanf("%s", College);
printf("Enter your cgpa : ");
scanf("%f", &cgpa);

printf("\nENTERED DETAILS : \n");
printf("Name : %s\n", Name);
printf("Age : %d\n", Age);
printf("College : %s\n", College);
printf("cgpa : %f\n", cgpa);
return 0;
}
