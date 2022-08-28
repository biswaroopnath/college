#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct mystructure
{
    int roll;
    char name[50];
    float cgpa;

}s;

void func(struct mystructure *s ){
printf("\n Name: %s",s->name);
printf("\n CGPA: %f",s->cgpa);
printf("\n Roll: %d",s->roll);
    
}

int main()
{
 s.roll=1;
 strcpy(s.name,"biswaroop");
 s.cgpa=7.8;

func(&s);
return 0;
}