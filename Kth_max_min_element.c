#include<stdio.h>


void main()
{
    int a[10];
    int i, j, temp, n, k;
    
       
    printf("how many element you want to enter in array:  ");
    scanf("%d", &n);
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter element at %d position: ", (i + 1));
        scanf("%d", &a[i]);
    }
    
    
    for(i = 0; i < 4; i++)
    {
        for(j = (i + 1); j < 5; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("\n %d (Kth) maximum element is: %d", k, a[n - k]);
    printf("\n %d (Kth) minimum elements is: %d", k, a[k - 1]);
}
