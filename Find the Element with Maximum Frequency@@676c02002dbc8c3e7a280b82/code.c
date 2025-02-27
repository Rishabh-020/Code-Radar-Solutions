#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxCount = 0, mostFrequent = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount || (count == maxCount && arr[i] < mostFrequent)) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    printf("The most frequent element is: %d\n", mostFrequent);
    return 0;
}
