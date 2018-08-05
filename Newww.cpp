#include<stdio.h>
 #include<algorithm>
int main()
{
    
    
    char arr[515];
    char arr1[515];
    int a[515],b[515],c[515],d[515],h,p[515];
    scanf("%s%s",arr,arr1);
    int len,i,j,k,r,s;
    len=0;
    for( i=0;arr[i]!='\0';i++)
    {len++;}
    int l=len,len2=len;
    for( i=0;i<len;i++)
    {
        a[i]=(int)arr[i];
        b[i]=(int)arr1[i];
    }
    
    for( i=0;i<len;i++)
    {
        c[i]=a[i];
        d[i]=b[i];
    }
    
    for(i=0;i<len;++i)
        for(j=i+1;j<len;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<len-1;++k)
                    a[k]=a[k+1];
                    
                --len;
            }
            else
                ++j;
        }
        
    for(i=0;i<l;++i)
        for(j=i+1;j<l;)
        {
            if(b[i]==b[j])
            {
                for(k=j;k<l-1;++k)
                    b[k]=b[k+1];
                    
                --l;
            }
            else
                ++j;
        }
        for (i = 0; i < len; ++i)
    {
        for (j = i + 1; j < len; ++j)
        {
            if (a[i] > a[j])
            {
                r =  a[i];
                a[i] = a[j];
                a[j] = r;
            }
        }
    }
    
        for (i = 0; i < l; ++i)
    {
        for (j = i + 1; j < l; ++j)
        {
            if (b[i] > b[j])
            {
                s =  b[i];
                b[i] = b[j];
                b[j] = s;
            }
        }
    }int w=0,t[515];
    for(i=0;i<len;i++)
    {
for(int j=0;j<len;j++)
{if(a[i]==b[j])
  {
      t[w]=a[i];
      w++;
      }
 }
 }
 return 0;
}
