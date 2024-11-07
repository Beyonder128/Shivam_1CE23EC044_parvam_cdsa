#include<stdio.h>
void main()
{
    int num,count=2,a=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(count<num)
        {
            if(num%count==0)
            {
                a=0;
                break;
            }
            if(a)
                printf("\n%d is a prime number",num);
            else
                printf("\n%d is a odd number",num);
        }
}