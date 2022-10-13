#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct pkt{
char ch1;
char ch2[2];
char ch3;
}s;
int main()
{
printf("enter 4 digit no:");
int n;
scanf("%d",&n);
s.ch1= (char)(n%10);
n=n/10;
s.ch2[0]=(char)(n%10);
s.ch2[1]=(char)(n%10);
n=n/10;
s.ch3=(char)n;
printf("%d%d%d",s.ch3,s.ch2[1],s.ch1);
return 0;
}