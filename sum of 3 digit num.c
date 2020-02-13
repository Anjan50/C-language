//AD CODES
//sum of three digit number
#include<stdio.h>
main()
{
    int n,a,b,c,sum;
    printf("Enter # digit number: \n");
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    sum=a+b+c;
    printf("sum of three digit number is %d",sum);

}
//now compile and run
