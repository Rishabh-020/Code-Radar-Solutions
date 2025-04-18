#include<stdio.h>
int insertionSort(int arr[],int num){
    for(int i=1;i<num;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 && current<arr[prev]){
            arr[prev+1]=arr[prev];
            prev--;
        }arr[prev+1]=current;
    }
}
int printArray(int arr[],int n){
    insertionSort(arr,n);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
}
