// \\ #include<stdio.h>
// \\ int main(){

//     int a=10;
//     int *ptr=&a;

//     printf("%d\t",a);
//     printf("%d",&a);
    
    
    

// }

#include<stdio.h>
int main(){

    int a=10,b=20,c=30;
    int *p=&a;
    int *q=&b;
    int *r=&c;
    // int *p;
    // int *q;

    printf("%d \n",a);
    printf("%p \n",&a);
    printf("%d \n",b);
    printf("%p \n",&b);
    printf("%d \n",c);
    printf("%p \n",&c);
    printf("%d \n",p);
    printf("%p \n",&p);
    printf("%d \n",*p);
    printf("%d \n",q);
    printf("%p \n",&q);
    printf("%d \n",*q);
}