// Problem 4

#include<stdio.h>
struct Fraction {
    int num;
    int denum;
};

struct Fraction inverse(struct Fraction values){
    int temp = values.num;
    values.num=values.denum;
    values.denum=temp;
    return values;
}

int main (){
    struct Fraction values={2,3};
    struct Fraction inverseValues = inverse(values);
    printf("%d/%d\n",inverseValues.num,inverseValues.denum);

}