// Problem 1

#include<stdio.h>
struct Time {
    int hour;
    int minute;
    int second;
};
int main (){
    struct Time time={6,30,00};
    time.hour = time.hour + 12;
    printf("%d:%d:%d\n",time.hour,time.minute,time.second);

}