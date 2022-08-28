#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int a = 10;
char ch;
ch= a;
if (ch){
    printf("\nBig endian");

}
else
{
    printf("\nLittleEndian");

}
printf("\n Converting ...\n");
ch= a>>24;

if (ch){
    printf("\nBig endian");

}
else
{
    printf("\nLittleEndian");

}
return 0;
}