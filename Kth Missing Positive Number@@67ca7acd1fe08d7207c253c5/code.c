int findKthMissing(int arr[],int num,int k){
    int kth=0,value=1;
    for(int i=0;i<num;i++){
        if(kth==k){
            printf("%d",value);
            return 0;
        }
        if(value!=arr[i]){
            kth++;
            value++;
        }else if(value==arr[i])value=arr[i];
    }
    return -1;
}