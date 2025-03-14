int findOccurrence(int arr,int num,int target,char mode){
    if(mode=='L'){
        for(int i=0;i<num;i++){
        if(arr[i]==target) find=i;
    }
    }if(mode=='F'){
        for(int i=0;i<num;i++){
            if(arr[i]==target){
                return i;
            }
        }
    }return find;
}