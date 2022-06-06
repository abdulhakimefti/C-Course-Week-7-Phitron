
// Problem 7
#include<stdio.h>
void decimalToBinary (unsigned int num, char str[]){
    int idx=0;
    while(num>0){
         int d= num%2;
        num/=2;
       str[idx] = d + '0';
       idx++;
    }
    str[idx]='\0';
    for(int i = 1;i<idx/2+1;i++){
      int temp = str[i-1];
      str[i-1] = str[idx-i];
      str[idx-i] = temp;

    }
    printf("%s\n",str);
}

int main (){
   unsigned int num  = 65;
   char str[1000];
    decimalToBinary(num,str);
}
