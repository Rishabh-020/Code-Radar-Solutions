#include <stdio.h>

void printFrequency(int arr[], int n) {
    int freq[1000] = {0}; // Assuming numbers are within a reasonable range
    
    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    // Print frequency of each number
    printf("Number - Frequency\n");
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            printf("%d - %d\n", i, freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 5, 1, 3, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printFrequency(arr, n);
    
    return 0;
}
