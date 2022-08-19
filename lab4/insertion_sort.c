#include <stdio.h>  
#include<conio.h>
#include<stdlib.h>  
void insert(int a[], int n) /* function to sort an aay with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
void insert_desc(int a[], int n)
{
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp >= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}

void printArr(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
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
    // int a[] = { 12, 31, 25, 8, 32, 17 };  
    // int n = sizeof(a) / sizeof(a[0]);  
    // printf("Before sorting array elements are - \n");  
    // printArr(a, n);  
    // insert(a, n);  
    // printf("\nAfter sorting array elements are - \n");    
    // printArr(a, n); 
    int choice=0; 
    int n;
            printf("enter size \n");
            scanf("%d",&n);
            
            int arr[n];
    do{
        printf("\n0.Exit\n1.N random array\n2.Display the array\n3.Sort using insertion sort in ascending\n4.TO sort in descending order using insertion sort \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
                printf("The array \n");
                for(int i = 0 ; i<n; i++){
                arr[i]=printRandoms(1, n , 1);
                printf("%d ",arr[i]);
                }
            break;
        }
        case 2:
            {
                printArr(arr, n);
                break;
            }
            
        case 3:
            {
                insert(arr, n);
                printArr(arr, n);
                break;
            }
        case 4:
            {
                insert_desc(arr, n);
                printArr(arr, n);
                break;
            }
        default:
            break;
        }
    }while(choice!=0);
    
    return 0;  
}    
