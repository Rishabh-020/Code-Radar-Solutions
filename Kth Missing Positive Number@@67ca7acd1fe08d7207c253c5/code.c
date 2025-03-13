int findKthMissing(int arr[],int n,int k){
    int j=0,p=0,new_arr[1001],find[1001];
    for(int i=0;i<arr[n-1];i++){
        if(arr[i]==i+1){
            new_arr[j]=i+1;
            j++;
        }else{
            i=0;
            find[p]=i+1;
            p++;
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