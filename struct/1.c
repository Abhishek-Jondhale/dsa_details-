#include <stdio.h>
void search(int* A, int n, int key)
{    printf("Array Element : ");
    for(int i=0; i<n;i++)
    {
        printf("%d ",A[i]);
    }
    int i;
    for(i=0; i<n;i++)
    {
       if(A[i]==key)
       {
        printf("Element is Found");
        break;
       }
    }
if(i==n)
{
    printf("Element id not found");
}

}

int main()
{
    int n=5;
    int A[]={1,2,3,4,5};
    int key=4;
    search(A,n,key);


}