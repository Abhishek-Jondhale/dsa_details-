#include<stdio.h>
int LinearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if (a[i]==key)
        {
           return 1;
        }
       
        

    }
     return -1;
}
int main(){
    int a[10],i,n,key;
    printf("How many element do you want:");
    scanf("%d",&n);
    printf("Enter the element");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter search no");
     scanf("%d",&key);
     int ans=LinearSearch(a,n,key);
     if (ans==1)
     {
        printf("Element found");
     }
     else{
        printf("Element not found");
     }
    }