// Example program
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int n,c,d,s,sum=0;
       cin>>n;
       long long int a[n];
       for(long long int i=0;i<n;i++)
       {
           cin>>a[i];
           sum+=a[i];
           
       }
       cin>>c>>d>>s;
       long long int sum1=a[0]*2;
       for(long long int i=1;i<n;i++)
       {
        if(a[i-1]<a[i])
        sum1+=c*a[i];
        else
        sum1+=a[i];
       }
       cout<<sum1<<sum;
       cout<<sum1-sum<<endl;
   }
    return 0;
}

