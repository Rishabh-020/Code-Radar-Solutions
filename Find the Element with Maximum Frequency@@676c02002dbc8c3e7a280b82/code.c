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
    printf("%d", mostFrequent);
    return 0;
}

// #include<stdio.h>
// int main(){
//     int num,count_freq=0,max=0;
//     scanf("%d",&num);
//     int arr[num],freq_arr[1001]={0};
//     for(int i=0;i<num;i++){
//         scanf("%d",&arr[i]);
//         freq_arr[arr[i]]++;
//     }
//     for(int i=0;i<1001;i++){
//         if(freq_arr[i]>max){
//             max=freq_arr[i];
//             count_freq=i;
//         }
//     }
//     printf("%d",count_freq);
//     return 0;
// }
