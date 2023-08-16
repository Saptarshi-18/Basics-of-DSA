//Q4.
#include <stdio.h>
void EXCHANGE(int arr[], int p, int q) {
    int temp = arr[p];
    arr[p] = arr[q];
    arr[q] = temp;
}

void ROTATE_RIGHT(int arr[], int p1, int p2) {
    for (int i = p2 - 1; i >= p1; i--) {
        EXCHANGE(arr, i, i + 1);
    }
}

int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n ; i++)
    scanf("%d",&arr[i]);
    int p1=0,p2;
    scanf("%d",&p2); 

    ROTATE_RIGHT(arr, p1, p2);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
