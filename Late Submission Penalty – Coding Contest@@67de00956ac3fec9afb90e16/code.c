#include <stdio.h>

int calculatePenalty(int subday,int submonth,int subyear,int dueday,int duemonth,int dueyear){
    int year=5000;
    int monthly=200*(submonth-duemonth);
    int daily=10*(-dueday+subday);
    if(subyear>dueyear){
        return year;
    }else if(submonth>duemonth){
        return monthly;
    }else if(subday>dueday){
        return daily;
    }else{
        return 0;
    }
}