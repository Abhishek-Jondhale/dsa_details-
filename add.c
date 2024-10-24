#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter principle: \n");
    scanf("%f",&p);
    printf("Enter rate of intrest: \n");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple intrest is: %f",si);

      return 0;
}