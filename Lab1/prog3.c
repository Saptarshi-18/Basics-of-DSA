//Q3.
#include <stdio.h>
#include <stdlib.h>

int countDuplicateElements(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j] && arr[i]!=-1 && arr[j]!=-1) {
                isDuplicate++;
                arr[j]=-1;
            }
        }
        if (isDuplicate) {
            count++;
            
            while (i + 1 < n && arr[i] == arr[i + 1]) {
                i++;
            }
        }
    }
    return count;
}

int mostRepeatingElement(int arr[], int n) {
    int maxCount = 0, mostRepeated = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && arr[i]!=-1 && arr[j]!=-1) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostRepeated = arr[i];
        }
    }
    return mostRepeated;
}

int main() {

    FILE *file = fopen("prg3.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    fclose(file);

    int duplicates = countDuplicateElements(arr, n);
    int mostRepeated = mostRepeatingElement(arr, n);

    printf("Total number of duplicate elements: %d\n", duplicates);
    printf("Most repeating element: %d\n", mostRepeated);
    free(arr);

    return 0;
}
