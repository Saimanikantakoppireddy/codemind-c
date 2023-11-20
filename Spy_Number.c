#include<stdio.h>
int main()
{
	int n,s=0,p=1,rem;
	scanf("%d",&n);
	for(;n!=0;n=n/10)
	{
      rem=n%10;
      s=s+rem;
      p=p*rem;
	}
	if(s==p)
	printf("Spy Number");
	else
	printf("Not Spy Number");
}