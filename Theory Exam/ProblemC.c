
// Problem 3
#include<stdio.h>

struct ArrayHolder {
    int arr[1000];
};

struct ArrayHolder numbers (int n){
    struct ArrayHolder num;
    for(int i =0;i<n;i++){
        num.arr[i]= i+1;
    }
    return num;
}
void print (struct ArrayHolder num,int n){
     for(int i =0;i<n;i++){
       printf("%d ",num.arr[i]);
    }
}

int main (){
    int n = 10;
    struct ArrayHolder num = numbers(n);
    print(num,n);

}
