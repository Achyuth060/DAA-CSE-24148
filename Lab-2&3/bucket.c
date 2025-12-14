#include <stdio.h>
#include <stdlib.h>

void insertionSort(float arr[], int n) {
    int i, j;
    float key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    int i, j, index[n];
    float buckets[n][n];  

    for (i = 0; i < n; i++)
        index[i] = 0;

    for (i = 0; i < n; i++) {
        int bucketIndex = arr[i] * n; 
        buckets[bucketIndex][index[bucketIndex]++] = arr[i];
    }

    for (i = 0; i < n; i++)
        insertionSort(buckets[i], index[i]);

    int pos = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < index[i]; j++) {
            arr[pos++] = buckets[i][j];
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%0.2f ", arr[i]);
    
    return 0;
}

