#include <stdio.h>
int main()
{
    int a,b,n, num, r, result = 0;
    printf("Enter first interval: ");
    scanf("%d", &a);
    printf("enter second interval:");
    scanf("%d",&b);
   for(n=a;n<=b;n++)
   {
   num=n;
    while(num!=0)
    {
        r= num%10;
        result+=r*r*r;
        num /= 10;
    }
    if(result==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    }
    return 0;
   }
