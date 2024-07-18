#include<stdio.h>
void main()
{
    int a[]={1,4,5,2,6,7,1},max,i,fact=1;
    max=a[0];
    for(i=0;i< sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
printf("the largenumber is:%d\n",max);
   for (i = 1; i <= max; ++i) 
    {
        fact *= i;
    }
    printf("Factorial of %d = %d", max, fact);
}
