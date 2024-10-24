#include <stdio.h>
binarySearch(int a[10], int n, int key)
{
    int top, bottom, mid;
    top = 0, bottom = n - 1;
    while (top <= bottom)
    {
        mid = (top + bottom) / 2;
        if (a[mid] == key)
        {
            return mid + 1;
        }
        else if (key < a[mid])
        {
            bottom = mid - 1;
        }
        else
        {
            top = mid + 1;
        }
        return n - 1;
    }
}
int main()
{
 int a[10],key,n,i;
    printf("Enter array");
    scanf("%d", &n);
    printf("Enter element");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter search number");
    scanf("%d", &key);
    int ans = binarySearch(a[10], n, key); 
    if (ans == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("find at position %d", ans);
    }
}
