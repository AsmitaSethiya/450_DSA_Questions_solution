#include<stdio.h>

void print_array(int[], int);
void rotate(int[], int);

void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    print_array(arr, n);
    
    rotate(arr, n);
    
    print_array(arr, n);
}

void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void rotate(int arr[], int n)
{
    int x = arr[n - 1], i;
    
    for(i  = arr[n - 1] ; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    arr[i] = x;
}
