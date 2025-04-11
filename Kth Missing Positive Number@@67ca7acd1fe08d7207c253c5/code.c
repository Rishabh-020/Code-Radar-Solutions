int findKthMissing(int arr[],int num,int k){
    int missing=0,kth=0;
    for(int i=0;;i++){
        if(missing<num && arr[missing]==i){
            missing++;
        }
        else{
            kth++;
            if(kth==k){
                return i;
            }
        }
        
    }
    // return missing;
    // int kth=0,value=1;
    // int new_arr[arr[num-1]];
    // for(int i=0;i<arr[num-1];i++){
    //     new_arr[i]=0;
    // }
    // for(int i=0;i<arr[num-1];i++){
    //     new_arr[i]=i+1;
    //     // printf("%d ",new_arr[i]);
    // }
    // for(int i=0;i<arr[num-1];i++){
    //     for(int j=i;j<num;j++){
    //         if(new_arr[i]==arr[j]){
    //             value=new_arr[i];
    //             break;
    //         }else{
    //             kth++;
    //             value=new_arr[i];
    //             // break;
    //         }
    //     }
    // }
    // return value;
    // return arr[num-1]+1;
}