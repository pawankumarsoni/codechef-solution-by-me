#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main ()
{
    int t,j;
	scanf("%d",&t);
    for(j=0;j<t;j++){
    int i,count=0;
  char str[35];
 int str1[35];
scanf ("%[^\n]%*c",str);
str[0]=toupper(str[0]);
  int len=sizeof(str);
for(i=1;i<len;i++)
 {
     if(str[i]==' ')
     str[i+1]=toupper(str[i+1]);
     else if(str[i-1]!=' ')
     str[i]=tolower(str[i]);
 }
 int p=0;
 for(i=1;i<len;i++)
 {
if(str[i]==' ')
{
	str1[p]=i;
count++;
p++;
}
}

if(count==0)
{
		for(i=0;i<len;i++)
        {printf("%c",str[i]);}
}
else if(count==1)
{
	for(i=0;i<len;i++)
	{
		if(i==0)
		printf("%c",str[i]);
		else if(i==1)
		printf(".");
		else if(i>str1[0])
		printf("%c",str[i]);	
	}
}
else if(count==2)
{
		for(i=0;i<len;i++)
	{
	    if(i==0)
	    printf("%c",str[i]);
		else if(i==str1[0]+1)
		printf("%c",str[i]);
		else if(i==1)
		printf(".");
		else if(i==str1[0]+2)
		printf(".");
		else if(i>str1[1])
		printf("%c",str[i]);
	}
}
}
 return 0;
}
