#include<stdio.h>

void print_union(int[], int[], int, int);
void print_intersection(int[], int[], int, int);

void main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    print_union(arr1, arr2, m, n);
    print_intersecction(arr1, arr2, m, n);
    
}

void print_union(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while(i < m && j < n)
    {
        while((i < m) && (arr1[i] == arr1[i + 1]))          // Handling duplicate in arr1
        {
            i++;
        }
        while((j < n) && (arr2[j] == arr2[j + 1]))          // Handling duplicate in arr2
        {
            j++;
        }
        
        if(arr1[i] < arr2[j])           // for union operation
        {
            printf("%d\t", arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            printf("%d\t", arr2[j]);
            j++;
        }
        else
        {
            printf("%d\t", arr2[j]);
            j++;
            i++;
        }
        
    }
     
    while(i < m)        // printf remaining elements
    {
        printf("%d\t", arr1[i]);
        i++;
    }
     
    while(j < n)
    {
        printf("%d\t", arr2[j]);
        j++;
    }
}

void print_intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while(i < m && j < n)
    {
        while((i < m) && (arr1[i] == arr1[i + 1]))
        {
            i++;
        }
        while((j < n) && (arr2[j] == arr2[j + 1]))
        {
            j++;
        }
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            printf("%d\t", arr2[j]);
            j++;
            i++;
        }
    }
}
