

// #Problem 2
#include<stdio.h>
struct Time {
    int hour;
    int minute;
    int second;
};
struct Interval{
    struct Time start;
    struct Time end;
};
struct Interval difference(struct Time start,struct Time end){

   if(start.hour < start.hour){
        start.hour = start.hour + 12;
        end.hour = end.hour + 12;
        int diffHour = start.hour - end.hour;
        int diffMin = 60 - start.minute + end.minute;
        printf("%d %d\n",diffHour,diffMin);
   }
   else{
        int diffHour = start.hour - end.hour + 2;
        int diffMin = 60 - start.minute + end.minute;
        printf("%d %d\n",diffHour,diffMin);

   }
}

int main (){
    struct Time start ={10,30,00};
    struct Time end = {5,15,00};
    // struct Interval  a= {start.hour=5,start.minute=30,end.hour=10,end.minute=15};
     difference(start,end);
}