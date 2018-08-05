#include<stdio.h>
#include<string.h>
int main()
{
    int p,k;
    scanf("%d",&p);
    for(k=0;k<p;k++)
    {
        int i,j,count=0,add=0,ct=0;
        char s[100],t[100];
        scanf("%s%s",s,t);
        int len=strlen(s);
        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                if(s[i]==t[j])
                {
                count++;
                break;
                }
            }
        }
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(s[i]==s[j])
                {
                    add++;
                    break;
                }
            }
        }
        
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(t[i]==t[j])
                {
                    ct++;
                    break;
                }
            }
        }
        if(count>=1)
        {
            printf("B\n");
        }
        else if(add>=1)
        {
            printf("A\n");
        }
        else if(ct>=1)
            {
                printf("B\n");
            }
            else
            {
                printf("B\n");
            }
    }
    return 0;
}
