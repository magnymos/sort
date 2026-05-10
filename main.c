#include <stdio.h>
void selectionSort(int arr[], int n) { //сортировка выбором минимального
    for (int i = 0; i<n-1; i++) {
        int min = i;
        for (int j = i+1; j<n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertionSort(int arr[], int n) {// сортировка вставками
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}



int main(void) {
    int arr[10] = {5,6,3,77,35,-34,24, -65, 34, 33};

    selectionSort(arr, 10);
    insertionSort(arr, 10);

/*
    printf("Sorted array:\n");
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
*/

    return 0;
}
