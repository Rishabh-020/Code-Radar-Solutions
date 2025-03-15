#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;
    int hash[MAX] = {0};
    for (int i = 0; i < n; i++)
        hash[arr[i]] = 1;
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        if (hash[arr[i] - 1] == 0) {
            int num = arr[i];
            int count = 0;
            while (hash[num]) {
                count++;
                num++;
            }
            if (count > maxLength)
                maxLength = count;
        }
    }
    return maxLength;
}
int main() {
    int arr[] = {100, 4, 200, 1, 3, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Longest Consecutive Sequence Length: %d\n", longestConsecutive(arr, n));
    return 0;
}
