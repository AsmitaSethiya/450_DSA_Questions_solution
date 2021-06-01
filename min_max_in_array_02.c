#include<stdio.h>

void main()
{
    int i, min, max;
    
    int arr[] = {20, 30, 10, 40, 50};
    
    min = arr[0];
    max = arr[0];
    
    for(i = 0; i < 5; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    
    printf("Minimum element is: %d", min);
    printf("\nMaximum element is: %d", max);
}
