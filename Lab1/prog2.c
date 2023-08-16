//Q2.
#include<stdio.h>
void prefixsum(int arr[], int n)
{
    int ans=0;
    int res[n];
    for(int i=0;i<n;i++)
    {
        ans = ans + arr[i];
        res[i] = ans;
    }
    printf("Prefix sum array is : \n");
    for(int i=0;i<n;i++)
    printf(" %d , ", res[i]);
}
int main()
{
    int n;
    printf("Enter no of array elements \n ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements \n ");
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    prefixsum(arr,n);
    return 0;
}
