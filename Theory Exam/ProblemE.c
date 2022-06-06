
// Problem 5
#include<stdio.h>
#include<string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
};

void print (struct Student st){
    printf("Student Name : %s\n",st.name);
    printf("Class : %d\n",st.class);
    printf("Roll : %d\n",st.roll);
    printf("Birth Of Date : %d-%d-%d\n",st.dob.day,st.dob.month,st.dob.year);
}

int main (){
    struct Student st1 = {.class=11,.roll=392,.dob.day=1,.dob.month=1,.dob.year=2000};
    char name[100] = "Efti";
    strcpy(st1.name,name);
    print(st1);
}
