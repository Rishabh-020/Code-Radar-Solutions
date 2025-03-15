// #include<stdio.h>
// #include<string.h>
// int longest(int arr[],int num){
//     int hash[1000]={0},max_len=0,count=0;
//     for(int i=0;i<num;i++)hash[arr[i]]=1;
//     for(int i=0;i<num;i++){
//         if(hash[arr[i]-1]==0){
//             int n=arr[i];
//             count=0;
//             while(hash[n]){
//             count++;
//             n++;
//             }
//         }if(max_len < count)max_len=count;
//     }printf("%d 1",max_len);
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     int arr[num];
//     for(int i=0;i<num;i++)scanf("%d",&arr[i]);
//     longest(arr,num);
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int longest(int arr[], int num) {
    int hash[100000] = {0}, max_len = 0;

    // Mark elements in hash table
    for (int i = 0; i < num; i++)
        hash[arr[i]] = 1;

    // Find longest consecutive sequence
    for (int i = 0; i < num; i++) {
        if (hash[arr[i] - 1] == 0) { // Starting point of a sequence
            int n = arr[i], count = 0;
            
            while (hash[n]) { // Count length of the sequence
                count++;
                n++;
            }
            if (max_len < count) max_len = count;
        }
    }

    printf("%d\n", max_len);
    return max_len+1;
}

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    longest(arr, num);

    return 0;
}
