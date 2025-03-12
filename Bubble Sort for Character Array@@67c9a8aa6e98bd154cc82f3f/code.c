#include<stdio.h>
char bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
}
char printArray(char arr[],int num){
    for(int i=0;i<num;i++){
        printf("Sorted array: %c ",arr[i]);
    }
}