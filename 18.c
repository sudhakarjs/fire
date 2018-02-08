#include<stdio.h>
int main(void) 
{
  int a,x,sum=0,temp;
  scanf("%d",&a);
  temp=a;
  while(a>0)
  {
  x=n%10;
  sum=sum+x*x*x;
  n=a/10;
  }
  if(sum==temp)
  {
  	printf("yes");
  }
  else
  {
           printf("no");
  }
}
