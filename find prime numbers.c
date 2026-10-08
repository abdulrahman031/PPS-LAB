#include<stdio.h>
int main()
{
    int number,isprime=1;
    printf("entre the value of number:");
    scanf("%d",&number);
    for(int j= 2; j<number; j++)
    {
        if(number%j==0)
        {
          isprime=0;
          break;
        }
    }
    if (isprime==1)
    {
        printf("is prime");
    }
    else
    {
        printf("is not prime");
    }
    return 0;
}

