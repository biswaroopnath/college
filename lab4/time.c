#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

#include<time.h>
int main()
{

clock_t start , end;
double t_time;
start = clock();
//code
end =  clock();
t_time = (end-start);
printf("%f in mili sec",t_time);
printf("\nFor in sec\n");
t_time= ((end-start))/CLOCKS_PER_SEC;
printf("%f in sec",t_time);
return 0;
}