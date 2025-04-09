int len(int num){
    int len=0,find=num;
    while(num>0){
        // int N=num%10;
        // arr[i]=N;
        ++len;
        num/=10;
    }
    if(len%2==0){
        return -1;
    }
    int arr[len],i=0;
    while(find>0){
        int N=find%10;
        arr[i]=N;
        i++;
        find/=10;
    }
    int find=-1;
    for(int i=1;i<len-1;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            int find=arr[i];
        }
    }
    return find;
}
int mountainPeak(int num){
    len(num);
}