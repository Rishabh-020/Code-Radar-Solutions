#include <stdio.h>

void printFrequency(int arr[], int n) {
    int freq[1001] = {0};
    int unique[n], uniqueCount = 0;  
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 0) {
            unique[uniqueCount++] = arr[i];
        }
        freq[arr[i]]++;
    }
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d %d\n", unique[i], freq[unique[i]]);
    }
}
int main() {
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    printFrequency(arr, num);
    return 0;
}