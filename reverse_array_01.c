#include<stdio.h>

// function declaration 
void print_array(int[], int);
void reverse_array(int[], int, int);

void main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n);                // function calling    
    reverse_array(arr, 0 , n-1);        //funation calling
    printf("\nReversed array is: \n");
    print_array(arr, n);                //function calling
}    

// function definition    
void print_array(int arr[] , int size)
{
    int i;
    for( i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
}    
    
void reverse_array(int arr[], int start, int end)
{
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }    
        
}

