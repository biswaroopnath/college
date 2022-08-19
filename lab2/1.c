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
int arr2[5];
//copying the array
for (int i = 0 ; i <5; i++){
 arr2[i]= arr[i];
}
int arr3[5];
int count=0;
//checking for dupes
for (int i = 0 ; i<5; i++){
    for (int j = 0; j<5; j++){
        if (arr[i]==arr[j]){
            count++;
        }
        
    }
    arr3[i]=count;
    count=0;
}
//printing array 3
// for (int i=0; i<5;i++){
//     printf("%d ",arr3[i]);
// }




// no of elemets that repeats
int count2=0;
for (int i= 0 ; i<5; i++){
    if (arr3[i]!=1){
        count2++;
    }
}
printf("\nthe number of dupes is : %d",count2);
if(count2!=0)
{
//printing the max in array
int max = 0;
int k=0;
for(int k = 0 ; k<5; k++)
{
    if (arr3[k]>=max){
        max= k;
    }
}
printf("The most repeating element is %d ",arr[k]);}
return 0;
}