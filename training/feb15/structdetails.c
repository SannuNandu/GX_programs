#include <stdio.h>

struct Student{
    char name[50];
    int age;
    char grade;
};


int main(){
    struct Student student1;
     printf("enter the name:" );
     scanf("%[^\n]", student1.name);
     
     printf("enter the age:");
     scanf("%d", &student1.age);
     
     printf("enter the grade:");
     scanf(" %c", &student1.grade);   //note: before %c there should be a space(it removes the newline if there)
     
     printf("\n-----------PERSONAL DETAILS------\n");
     printf("Name:%s\n", student1.name);
     printf("Age:%d\n", student1.age);
     printf("Grade:%c\n", student1.grade);
     
     return 0;
     
}

