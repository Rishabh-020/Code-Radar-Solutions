int maxGadgetSpend(int key[],int num1,int head[],int num2,int total){
    int find=-1;
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            if(key[i]+head[j]<=total && key[i]+head[j]>find){
                find=key[i]+head[j];
            }
            // else if(key[i]+find<=total){
            //     find+=key[i];
            // }
            // else if(head[j]+find<=total){
            //     find+=head[j];
            // }
        }
    }
    return find;
}