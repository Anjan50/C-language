//convert tatal days into months and days
#include<stdio.h>
void main()
{
    int months,days;
    printf("Enter days: ");
    scanf("%d",&days);
    months= days/30;
    days=days%30;
    printf("months: %d days:%d",months,days);
}
//now run the program
