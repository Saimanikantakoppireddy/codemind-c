#include<stdio.h>
int main()
{
	char s[100];
	int i,j,l,t;
	scanf("%[^
]s",s);
	for(i=0,l=0;s[i]!=NULL;i++)
	l++;
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		
	}
	printf("%s",s);
}