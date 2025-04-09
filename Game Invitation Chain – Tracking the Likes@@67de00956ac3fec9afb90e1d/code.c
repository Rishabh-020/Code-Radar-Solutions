#include <stdio.h>

int totalLikes(int n){
    int cal=0,zero=0,find=5;
    if(n==1){
        return 2;
    }
    for(int i=1;i<n;i++){
        cal=find/2;
        zero=cal*3;
        find=zero;
    }
    return zero;
}