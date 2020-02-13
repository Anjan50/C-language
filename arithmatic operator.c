
// arithmetic operator
#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,div,mod;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d",&a,&b);
    printf("\nARITHMETIC OPERATION: ");
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("\nadition is: %d ",add);
    printf("\nsubstraction is: %d ",sub);
    printf("\nmultiplication is: %d ",mul);
    printf("\ndivision is: %d",div);
    printf("\nmodulo is: %d ",mod);
}

// now compile
