#include<stdio.h>
int main()
{
	char s[100];
	int i,j=0,l;
	scanf("%[^
]s",s);
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]>=65 && s[i]<=91)
	    {
	        s[i]=s[i]+32;
	    }    
	}
	printf("%s",s);
}
