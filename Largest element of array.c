#include<stdio.h>

int main()
{
    int n;
    printf("Enter no. of element :");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter elements :");
    for(int i=0;i<n-1;i++)
    scanf("%d\n",&a[i]);
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[i]>a[j+1]) 
            {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    printf("maximum number of list is %d",a[n-1]);
    return 0;
}
