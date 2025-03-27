int digitRightShift(int num){
    int num1=num,len=0;
    while(num1>0){
        int N=num1%10;
        len++;
        num1/=10;
    }
    char str[len];
    sprintf(str,"%d",num);
    printf("%c",str[len-1]);
    for(int i=0;i<len-1;i++){
        printf("%c\n",str[i]);
    }
}