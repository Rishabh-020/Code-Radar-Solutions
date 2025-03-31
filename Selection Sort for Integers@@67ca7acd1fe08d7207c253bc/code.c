#include<stdio.h>
int selectionSort(int arr[],int num){
    for(int i=0;i<num-1;i++){
        int insert=i;
        for(int j=i+1;j<num;j++){
            if(arr[j]<arr[insert]){
                insert=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[insert];
        arr[insert]=temp;
    }
}
int printArray(int arr[],int num){
    selectionSort(arr,num);
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}