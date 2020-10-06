#include<stdio.h>

int main()
{
  int x,s=0,temp,n;
  printf("Enter a no. to check paliandrome or not\n");
  scanf("%d",&x);
  n=x;

  while(x!=0)
  {
    temp=x%10;
    s=(s*10)+temp;
    x=x/10;
  }

  if(s==n)
  {
   printf("It is paliandrome");
  }
  else
  {
    printf("It is not paliandrome");
  }

  return 0;
}
