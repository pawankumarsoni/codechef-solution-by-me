#include<bits/stdc++.h>
using namespace std;

#define NO_OF_CHARS 256
  
/* function to check whether characters of a string can form 
   a palindrome */
bool canFormPalindrome(string str)
{
    // Create a count array and initialize all 
    // values as 0
    int count[NO_OF_CHARS] = {0};
  
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (int i = 0; str[i];  i++)
        count[str[i]]++;
  
    // Count odd occurring characters
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
  
    // Return true if odd count is 0 or 1, 
    return true;
}
  
  
  void findpal(char* str,char* str1)
  {
      char p[1001000],s[1000100],q[1001000],r[1001000];
      long long int len=strlen(str);
      sort(str,str+len);
      if(len%2==0)
      {
          long long int k=0;
      for(long long int i=0;i<len-1;i++)
      {
          if(str[i]==str[i+1])
          {
              p[k]=str[i];
              q[k]=str[i+1];
              k++;
              i+=1;
          }
      }
      long long int j=0;
      for(long long int i=k-1;i>=0;i--)
      {
          s[j]=q[i];
          j++;
      }
      strcat(p,s);
      cout<<p<<endl;
      }
  else
  {
      long long int k=0,l=0;
      for(long long int i=0;i<len-1;i++)
      {
          if(str[i]==str[i+1])
          {
              p[k]=str[i];
              q[k]=str[i+1];
              k++;
              i+=1;
          }
          else
          {
              r[l]=str[i];l++;
              
          }
      }
      if(str[len-1]!=str[len-2])
      r[0]=str[len-1];
      long long int j=0;
      for(long long int i=k-1;i>=0;i--)
      {
          s[j]=q[i];
          j++;
      }
      strcat(p,r);
      strcat(p,q);
      cout<<p<<endl;
  }
  }
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
 char str[1000000],str1[1000000];
 cin>>str;
 strcpy(str1,str);
    if(canFormPalindrome(str)==1)
    {
        findpal(str,str1);
    }
    else
    {
        cout<<"-1"<<endl;
    }
        
    }
    return 0;
}
