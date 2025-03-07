#include<stdio.h>
int sort_array(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    sort_array(int arr,int n);
    printf("%d",arr[k-1]);
}