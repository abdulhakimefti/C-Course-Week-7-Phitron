// Problem 6
#include<stdio.h>
struct Pair {
    int jog;
    int biyog;
};

struct Pair jogbiyog(int a,int b){
    struct Pair result;
    result.jog = a + b;
    result.biyog = a-b;
    return result;
}
int main (){
    int a = 10;
    int b = 5;
    struct Pair result = jogbiyog(a,b);
    printf("%d %d\n",result.jog,result.biyog);
}