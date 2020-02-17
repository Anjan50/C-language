//AD codes
//switch break statement using DEMOSTRATE
#include<stdio.h>
void main()
{
    int a,b;
    int op;
    printf("1.addition \n2.substraction \n3.multiplication \n4.division");
    printf("\nenter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("\nEnter your choice:");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        printf("sum of %d and %d is:%d",a,b,a+b);
        break;
    case 2:
        printf("substraction of %d and %d is:%d",a,b,a-b);
        break;
    case 3:
        printf("multiplication of %d and %d is:%d",a,b,a*b);
        break;
    case 4:
        printf("division of %d and %d is:%d",a,b,a/b);
        break;
    default:
        printf("enter correct choice");
        break;

    }
}
