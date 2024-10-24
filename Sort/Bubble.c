#include <stdio.h>
void Sort(int A[], int n )
{
    printf("Without sorting array : ");
    for(int i=0; i<n ; i++)
    {
        printf("%d ",A[i]);
    }

    for(i=0; i<n-i;i++)
    {
        for(int j=0;j<n-i-1; j++)
        {
            if(A[j]>A[j+1]){
                int swap=A[j];
                A[j]=A[j+1];
                A[j+1]=swap;
            }
        }
    }
    printf("\nSorting Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{   int n=5;
    int A[]={34,21,12,65,22};
    Sort(A,n);
}