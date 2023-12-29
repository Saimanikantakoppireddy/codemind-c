#include<stdio.h>
int main()
{
    char s[1000];
    int v=0,i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;i<=c;i++)
    {
        if(s[i]=='A' ||s[i]=='a'||s[i]=='E'|| s[i]=='e' || s[i]=='I'||s[i]=='i'||s[i]=='O'|| s[i]=='o'|| s[i]=='u'|| s[i]=='U')
        v++;
    }
    printf("%d",v);
}