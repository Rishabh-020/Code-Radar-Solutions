#include<stdio.h>
#include<string.h>
int bubbleSort(char arr[],int n){
    for(int i=0;i<strlen(arr)-1;i++){
        for(int j=0;j<strlen(arr)-1-i;j++){
            if(strcmp(arr[j],arr[j+1])>0){
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
            }
        }
    }
}
int printArray(char arr[],int n){
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}