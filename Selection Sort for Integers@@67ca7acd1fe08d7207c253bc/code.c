#include<stdio.h>
int selectionSort(int arr[],int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(int arr[],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}