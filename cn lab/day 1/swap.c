#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void swap( int* x, int* y){
    int temp;

    temp=*x;
    *x= *y;
    *y=temp;
}
int main()
{
int a;
int b;
a = 10;
b = 20;
printf("%d %d", a, b);
printf("\nAfter swap\n");
swap( &a, &b );
printf("%d %d", a, b);
return 0;
}