#include<stdio.h>
#include<string.h>
union Student1{
    int rno;
    char name[50];
    float mark;
};
struct Student2{
    int rno;
    char name[50];
    float mark;
};
int main(){
    union Student1 s1;
    struct Student2 s2;
    printf("Union size: %lu\nStruct size: %lu\n",sizeof(s1),sizeof(s2));
    s1.rno=140;
    printf("%d\n",s1.rno);
    strcpy(s1.name,"Nivedha");
    printf("%s\n",s1.name);
    s1.mark=92.84;
    printf("%.2f\n",s1.mark);
}