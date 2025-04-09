int mostPlayedGame(int arr[],int num){
    int freq[1001]={0},min=1001;
    for(int i=0;i<num;i++){
        freq[arr[i]]++;
    }
    int max=0;
    for(int i=0;i<num;i++){
        if(freq[arr[i]]>max && arr[i]<min){
            max=arr[i];
            min=arr[i];
        }
    }
    return max;
}