#include<stdio.h>
int selectionSort(int arr[],int num){
    for(int i=0;i<num-1;i++){
        int min=i;
        for(int j=0;j<num;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int printArray(int arr[],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}