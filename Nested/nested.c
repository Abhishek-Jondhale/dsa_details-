#include<stdio.h>
#include<string.h>
struct Person
{
    /* data */
    char name[10];
    int age;
    long phoneNo;

};
 struct Car
 {
    /* data */
    char name[10];
    int prise;
    struct Person p1;
 } c1;
 int main(){
    strcpy(c1.name,"thar");
    c1.prise=1200000;
    strcpy(c1.p1.name,"Abhishek");
    c1.p1.age=19;
    c1.p1.phoneNo=5434534234;
    printf("%s\n",c1.name);
    printf("%d\n",c1.prise);
    printf("%s\n",c1.p1.name);
    printf("%d\n",c1.p1.age);
    printf("%ld\n",c1.p1.phoneNo);

 return  0;



 }
 
