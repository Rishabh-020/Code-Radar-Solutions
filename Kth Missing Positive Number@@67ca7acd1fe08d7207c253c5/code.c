int findKthMissing(int arr[],int n,int k){
    int j=0,p=0,new_arr[n],find_var=0,find[k];
    for(int i=0;i<arr[n-1];i++){
        if(arr[i]==find_var+1){
            new_arr[j]=find_var+1;
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