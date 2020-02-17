//AD CODES
//find the factorial
#include<stdio.h>
main()
{
    int n,f=1;
    printf("enter the integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        f=(f*n);
        n--;

    }
    printf("factorial is: %d",f);
}
