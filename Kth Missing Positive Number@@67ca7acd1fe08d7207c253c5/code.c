int findKthMissing(int arr[],int n,int k){
    int j=0,k=0,new_arr[1001],find[1001];
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            new_arr[j]=i+1;
            j++;
        }else{
            find[k]=i+1;
            k++;
        }
    }
    return find[k-1];
    // for(int i=0;i<j;i++){
        // if(new_arr[i]==0){
        //     find[k]=i;
        //     k++;
        // }
    // }
}