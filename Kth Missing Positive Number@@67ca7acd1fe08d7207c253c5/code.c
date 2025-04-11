int findKthMissing(int arr[],int num,int k){
    int kth=0,value=1;
    int new_arr[arr[num-1]];
    for(int i=0;i<arr[num-1];i++){
        new_arr[i]=0;
    }
    for(int i=0;i<arr[num-1];i++){
        ++new_arr[i];
        printf("%d",new_arr[i]);
    }
    return arr[num-1]+1;
}