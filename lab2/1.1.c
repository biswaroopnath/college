#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int printRandoms(int lower, int upper,
                            int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        return num;
    }
}

int main()
{
int arr[5];

printf("The array is: ");
 for(int i = 0 ; i<5; i++){
    arr[i]=printRandoms(1, 4 , 1);
    printf("%d ",arr[i]);
 }

for (int i =0; i<5;i++){
    // if arr[i]==arr[i-5]
}

return 0;
}