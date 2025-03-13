int findKthMissing(int arr[],int n,int k){
    int find[k],j=0,new1[n];
    for(int i=0;i<arr[n-1];){
        if(arr[i]==i+1){
            new1[i]=arr[i];
        }else{
            find[j]=arr[i];
            j++;i++;
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