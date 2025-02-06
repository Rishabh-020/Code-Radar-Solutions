#include <stdio.h>

void printFrequency(int arr[], int n) {
    int freq[1000] = {0}; // Assuming numbers are within a reasonable range
    
    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);

    int arr[num];  // Variable-length array (VLA)
    
    
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);  // Read user input into the array
    }

    printFrequency(arr, num);
    
    return 0;
}
