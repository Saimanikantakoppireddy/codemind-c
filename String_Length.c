#include<stdio.h>
int main()
{
    char s[100];
    int i,len=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=0;i++)
    {
        len++;
    }
    printf("%d",len);
}