int findKthMissing(int arr[],int num,int k){
    int kth=0,value=1;
    for(int i=0;i<arr[num-1];i++){
        if(kth==k){
            return value;
        }
        else if(value!=arr[i]){
            kth++;
            value++;
        }else if(value==arr[i]){
            value++;
        }
    }
    return arr[num-1]+1;
}