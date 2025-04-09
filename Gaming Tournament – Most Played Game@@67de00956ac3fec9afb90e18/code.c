int mostPlayedGame(int arr[],int num){
    int freq[1001]={0},min=1001;
    for(int i=0;i<num;i++){
        freq[arr[i]]++;
    }
    int max=0,frequecy=0;
    for(int i=0;i<num;i++){
        if(freq[arr[i]]>frequecy){
            max=arr[i];
            frequecy=freq[arr[i]];
        }else if(frequecy==freq[arr[i]] && arr[i]<max){
            max=arr[i];
        }
    }
    return max;
}