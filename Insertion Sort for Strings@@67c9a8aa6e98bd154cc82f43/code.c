#include<stdio.h>
#include<string.h>
void insertionSort(char arr[][100],int n){
    for(int i=1;i<n;i++){
        int current=i;
        int prev=i-1;
        while(prev>=0 &&  arr[prev]>arr[current]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=arr[current];
    }
}
int printArray(char arr[][100],int n){
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}