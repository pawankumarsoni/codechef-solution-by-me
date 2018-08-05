#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=1;
    char str[]="<<>>><><><";
    int temp[100];
    int n=strlen(str);
    int str1[100];
    for( i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            count++;
            else 
            {
                count=1;
                break;}
        }
        str1[i]=count;
    
    }
    temp[0]=str1[0];
    printf("%d\n",temp[0]);
    for( i=1;i<n-1;i++)
    {temp[i]=str1[i]-str1[i-1];
    printf("%d\n",temp[i]);
	}
    return 0;
}
