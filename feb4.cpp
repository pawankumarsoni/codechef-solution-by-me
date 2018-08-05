#include <bits/stdc++.h>
using namespace std;
void permute(char* str,char* str1)
{
    long long int len1=strlen(str);
    long long int ct=0;
    sort(str, str+len1);
    long long int flag1=0;
       for(long long int i=0;i<len1/2;i++)
       {
        if(str[i]!=str[len1-1-i])
            {
                flag1=1;
                break;
            }
       }
      
    
    if(flag1==0)
    {
        ct=1;
        for(long long int i=0;i<len1;i++)
        {
            printf("%lld",i+1);
            printf(" ");
        }
        printf("\n");
    }
    else
    {
  while (next_permutation(str, str+len1))
  {
      
      long long int flag=0;
       long long int len=strlen(str);
       for(long long int i=0;i<len/2;i++)
       {
        if(str[i]!=str[len-1-i])
            {
                flag=1;
                break;
            }
       }
        if(flag==0)
        {
            ct=1;
            for(long long int i=0;i<len;i++)
            {
                for(long long int j=0;j<len;j++)
                {
                    if(str[i]==str1[j])
                    {
                        cout<<j+1<<" ";
                        str1[j]=0;
                        break;
                    }
                }
            }
            printf("\n");
           break;
        }
       
    }
    }
    if(ct==0)
    printf("-1\n");
}
 
// Driver code
int main()
{
   long long  int t;
    scanf("%lld",&t);
    while(t--)
    {
    char str1[10000010],str[10000010] ;
    cin>>str;
     strcpy(str1,str);
    permute(str,str1);
    }
    return 0;
    }
