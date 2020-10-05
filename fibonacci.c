#include<stdio.h>

int main()
{
  int x,n=1,s=1,temp;
  printf("Enter the range to print fibonacci series\n");
  scanf("%d",&x);
  for(int i=1;i<=x;i++)
  {
    if(i==1)
    {
      printf("0\t");
    }
    else if(i==2)
    {
      printf("1\t");
    }
    else
    {
      temp=n;
      printf("%d\t",n);
      n=n+s;
      s=temp;
    }
  }

  return 0;
}
