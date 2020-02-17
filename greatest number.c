//AD CODES
//Greatest number
#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(b>c))
    {
        printf("%d is greatest number",a);

    }
    else if ((b>a)&&(b>c))
    {
        printf("%d is greatest number",b);

    }
    else
    {
        printf("%d is greatest number",c);

    }

}
//now run
