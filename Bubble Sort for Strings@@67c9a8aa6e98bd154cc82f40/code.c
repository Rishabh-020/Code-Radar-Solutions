#include<stdio.h>
int bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=(int)arr[j];
                (int)arr[j]=(int)arr[j+1];
                (int)arr[j+1]=temp;
            }
        }
    }
}
int printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}