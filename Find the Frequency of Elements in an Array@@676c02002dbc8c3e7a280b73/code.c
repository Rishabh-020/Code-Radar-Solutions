// #include <stdio.h>

// void printFrequency(int arr[], int n) {
//     int freq[1001] = {0};
//     int unique[n], uniqueCount = 0;  
//     for (int i = 0; i < n; i++) {
//         if (freq[arr[i]] == 0) {
//             unique[uniqueCount++] = arr[i];
//         }
//         freq[arr[i]]++;
//     }
//     for (int i = 0; i < uniqueCount; i++) {
//         printf("%d %d\n", unique[i], freq[unique[i]]);
//     }
// }
// int main() {
//     int num;
//     scanf("%d", &num);
//     int arr[num];
//     for (int i = 0; i < num; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printFrequency(arr, num);
//     return 0;
// }

#include<stdio.h>
int main(){
    int num,freq[1001]={0},count=0;
    scanf("%d",&num);
    int arr[num],freq_1[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(freq[arr[i]]==0){
            freq_1[count++]=arr[i];
        }
        freq[arr[i]]++;
    }
    for(int i=0;i<count;i++){
        printf("%d %d\n",freq_1[i],freq[freq_1[i]]);   
    }
}

