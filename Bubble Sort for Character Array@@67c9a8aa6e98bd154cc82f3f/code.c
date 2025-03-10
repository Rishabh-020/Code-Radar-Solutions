#include<stdio.h>
char bubbleSort(char arr,int n){
    char st='a';
    for(int i=1;i<n;i++){
        if(int(arr[i])<st){
            char temp=st;
            st=arr[i];
            arr[i]=temp;
        }
    }
}
char printArray(char arr,int num){
    for(int i=0;i<num;i++){
        printf("Sorted array: %c ",arr[i]);
    }
}