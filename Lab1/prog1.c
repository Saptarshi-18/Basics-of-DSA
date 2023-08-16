//Q1.
#include<stdio.h>
#include<stdlib.h>
void Sort(int arr[], int n)
{
    for(int i = 0;i< n-1; i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        } 
    }
    printf("Second Smallest element %d", arr[1]);
    printf("\nSecond Largest element %d", arr[n-2]);
}
int main()
{
    int n;
    FILE* file = fopen("prg1.txt","r");
    if(file==NULL)
    {
        printf("Error");
        return 1;
    }
    fscanf(file,"%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
    {
        fscanf(file,"%d",&arr[i]);
    } 
    Sort(arr,n);
    return 0;
}