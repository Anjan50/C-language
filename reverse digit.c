
//AD CODES
//COnstruct to reverse the digit of the number
//only 9 digit value possible
#include<stdio.h>
void main()
{
    long int a,x;
    printf("Enter the A value: ");
    scanf("%d",&a);
    do
    {
        x=a%10;
        printf("%d",x);
        a=a/10;
    }
    while(a>0);

}
