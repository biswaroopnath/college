#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void swap3(int a, int b, int c)
{
    swap(a,b);
    swap(b,c);
    swap(c,a);
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a= 1, b=2,c= 3;
    swap3(a,b,c);
    printf( " %d %d %d", a, b, c);

return 0;
}