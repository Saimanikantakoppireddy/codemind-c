#include<stdio.h>
int main()
{
	char s[100];
	int i,j=0,l;
	scanf("%[^
]s",s);
	for(i=0,l=0;s[i]!=NULL;i++)
	l++;
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]>=97 && s[i]<=122)
		j++;
	}
	printf("%d",j);
}
