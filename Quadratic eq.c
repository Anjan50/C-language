
//quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float d,root1,root2;
    printf("Enter a,b and c of Quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b*4*a*c;
    if(d<0)
    {
        printf("roots are complex number.\n");
        printf("roots of quadratic numbers are: ");
        printf("%f+%f",-b/(2*a),sqrt(-d)/(2*a));
        printf("%f+%f",-b/(2*a),-sqrt(-d)/(2*a));

        return 0;
    }
    else if (d==0)
    {
        printf("both roots are equals.\n");

        root1=-b/(2*a);
        printf("\nrots of quadratic equation is: %f",root1);
         return 0;
    }
    else
    {
        printf("Roots are real number:\n");
        root1=(-b+sqrt(d)/(2*a));
        root2=(-b-sqrt(d)/(2*a));
        printf("roots of quadratic equation are: %f , %f",root1,root2);

    }
}

//now compile and run
