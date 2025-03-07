#include<stdio.h>
int fibonacciSeries(n){
    if(n<=1){
        return n;
    }else return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}