#include <stdio.h>

int kangaroo(int jump1,int dist1,int jump2,int dist2){
    int jump=-jump1+jump2,dist=-dist2+dist1;
    //printf("%d",jump);
    //printf(" %d ",dist);
    // int finaly=jump/dist;
    if((jump<0 && dist<0) ||(jump>0 && dist>0)){
        return jump/dist;
    }else{
        return -1;
    }
}