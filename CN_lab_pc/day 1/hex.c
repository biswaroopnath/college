#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
unsigned char bytes[4];
unsigned long n=938389;
bytes[0]=(n>>24)& 0xFF;
bytes[1]=(n>>16)& 0xFF;
bytes[2]=(n>>8)& 0xFF;
bytes[3]=(n)& 0xFF;
printf("%d %d %d %d",bytes[0],bytes[1],bytes[2],bytes[3]);
return 0;
}