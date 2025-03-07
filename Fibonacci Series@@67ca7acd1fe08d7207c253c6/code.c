#include<stdio.h>
int fib(int n){
    if(n<=1){
        return n;
    }else return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}
int fibonacciSeries(int n){
    for(int i=0;i<=n;i++){
        printf("%d ",fib(i));
    }
}