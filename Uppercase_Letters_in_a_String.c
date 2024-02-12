#include<stdio.h>
int main()
{
	char s[100];
	int i,j,l;
	scanf("%[^
]s",s);
	for(i=0,l=0;s[i]!=NULL;i++)
	l++;
	for(i=0,j=0;s[i]!=NULL;i++)
	{
		if(s[i]>=65 && s[i]<=91)
		j++;
	}
	printf("%d",j);
}
