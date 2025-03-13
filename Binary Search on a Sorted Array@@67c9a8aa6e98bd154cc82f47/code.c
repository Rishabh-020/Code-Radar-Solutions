void binarySearch(int arr[],int n,int target){
    int start=0,end=n;
    for(int i=start;i<end;i++){
        if(arr[i]==target)return  i;
        else if(arr[i]<target){
            start=(n+1)/2;
            end=n;
        }else{
            start=0;
            end=n/2;
        }
    }
}