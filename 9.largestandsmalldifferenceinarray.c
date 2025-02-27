#include <stdio.h>

// Function to find the smallest, second smallest, and maximum numbers
void findValues(int arr[], int size, int results[]) {
    int small = arr[0], secondSmall = arr[1], max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < small) {
            secondSmall = small;
            small = arr[i];
        } else if (arr[i] < secondSmall && arr[i] != small) {
            secondSmall = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    results[0] = small;
    results[1] = secondSmall;
    results[2] = max;
}

int main() {
    int arr[] = {2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int results[3];

    findValues(arr, size, results);

    printf("%d\n", results[1] - results[0]); // Smallest Difference
    printf("%d\n", results[2] - results[0]); // Largest Difference

    return 0;
}
