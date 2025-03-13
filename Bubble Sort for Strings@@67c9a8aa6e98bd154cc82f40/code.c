#include<stdio.h>
#include<string.h>
int now(char arr[]){
    for(int i=0;i<strlen(arr)-1;i++){
        for(int j=0;i<strlen(arr)-1-i;j++){
            if(arr[j]>arr[j+1]){
            char temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}
int bubbleSort(char arr[],int n){
    for(int i=0;i<n;i++){
        now(arr[i]);
    }
}
int printArray(char arr[],int n){
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}