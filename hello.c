#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int swapped = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = 1;
			}
		}
		if (!swapped) break;
	}
}

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {

    int arr[] = {1, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("Before sorted: ");
    printArr(arr, n);
    bubbleSort(arr, n);
    printf("After sorted: ");
    printArr(arr, n);

    return 0;
}
