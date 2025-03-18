int findKthMissing(int arr[],int n,int k){
    int hash[1000];
    for(int i=0;i<arr[n-1];i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<arr[n-1];i++)printf("%d",hash[i]);
}