#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], size_t size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void bubblSort(int a[], size_t size){
    int i;
    int j;
    for(j = 0; j < size-1; j++) {
        for (i = 0; i < size-1; i++) {
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
            }
        }
    }
    printArray(a, size);
}

int main(int argc, char *argv[]) {
    int arr[argc - 2];
    int i;
    for (i = 0; i < argc - 2; i++) {
        arr[i] = atoi(argv[i + 2]);
    }

    bubblSort(arr, sizeof(arr)/ sizeof(arr[0]));
    return 0;
}
