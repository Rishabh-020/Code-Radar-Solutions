int findOccurrence(int arr[],int num,int target,char mode){
    int index=-1;
    if(mode=='F'){
        for(int i=0;i<num;i++){
            if(target==arr[i]){
                return i;
            }
        }
    }
    else if(mode=='L'){
        for(int i=0;i<num;i++){
            if(target==arr[i]){
                index=i;
            }
        }
    }
    return index;
}