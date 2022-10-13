

// Q3 : Sort an array of 10 user input elements.

#include<stdio.h>
#include<stdlib.h>

void sort(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j=0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main() {
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    printf("The sorted array is:-\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
