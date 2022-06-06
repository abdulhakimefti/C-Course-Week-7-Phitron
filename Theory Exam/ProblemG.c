


// #problem 8

#include <stdio.h>

int calculateXOR (int l,int r){
    int answer = l;
    for(int i =l+1;i<=r;i++){
        answer = answer ^ i;
    }
    return answer;
}

int main()
{
    int l;
    int r;
    scanf("%d %d", &l, &r);
    printf("%d\n", calculateXOR(l,r));
}