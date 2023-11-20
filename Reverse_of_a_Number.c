#include<stdio.h>
int main()
{
    int t,n,r,rev;
    scanf("%d",&n);
    t=n;
  for(rev=0;n!=0;n=n/10)
    {
    	r=n%10;
    	rev=rev*10+r;
    }
    printf("%d",rev);
}