#include<stdio.h>
int insertionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(int *arr,int n){
    insertionSort(arr,n);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
}