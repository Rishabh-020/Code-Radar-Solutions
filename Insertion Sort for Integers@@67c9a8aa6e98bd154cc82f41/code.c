#include<stdio.h>
int insertionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;i++){
            if(arr[j]>arr[j+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int printArray(int *arr,int n){
    insertionSort(arr,n);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
}