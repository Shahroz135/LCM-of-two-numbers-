// Program to find LCM of two numbers.
#include"stdio.h"
#include"conio.h"
void main()
{
    int a,b,min;
    printf("first no.=");
    scanf("%d",&a);
    printf("Second no.=");
    scanf("%d",&b);
    min=(a>b)?a:b;
    while(1)
    {
        if(min%a==0 && min%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,min);
            break;  
        }
        ++min;
    }  
}