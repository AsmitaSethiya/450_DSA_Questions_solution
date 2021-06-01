#include<stdio.h>

void main()
{
    int a[10];
    int i, c0 = 0, c1 = 0, c2 = 0, n, k = 0;
    
    printf("how many element you want to enter in array:  ");
    scanf("%d", &n);
    
    

    for(i = 0; i < n; i++)
    {
        printf("Enter element at %d position: ", (i + 1));
        scanf("%d", &a[i]);
    }
    
    
    for(i = 0 ; i < n; i++)
    {
        if(a[i] == 0)
        {
            c0++;
        }
        else if(a[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    
    for(i = 0; i < c0; i++)
    {
        a[k++] = 0;
    }
    
    for(i = 0; i < c1; i++)
    {
        a[k++] = 1;
    }
    
    for(i = 0; i < c2; i++)
    {
        a[k++] = 2;
    }
    
    for( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    
}
