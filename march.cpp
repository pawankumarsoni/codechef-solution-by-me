#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
ll t;cin>>t;while(t--){
 
ll n,h;
 
cin>>n>>h;
 
ll a[n],sum=0;
 
for(ll i=0;i<n;i++)
{
cin>>a[i];
sum+=a[i];
}
ll nsize=((ll)((ceil)((double)((double)sum/(double)h))));
//cout<<nsize<<" "<<a[n-1]<<endl;
sort(a,a+n);ll p=0;
for(ll i=0;i<n;i++)
{
    if(a[i]>nsize)
    {
        h=h-i;
        p=i;
        break;
    }
    else
    {
        sum-=a[i];
    }
}
if(sum==0)
cout<<a[n-1]<<endl;
else
{
    
    ll dp1[n];
    for(ll i=nsize;i<=a[n-1];i++)
    dp1[i]=i;
    
    /*
for(ll i=nsize;i<=(a[n-1]);i++)
{//ll ct=0;*/
ll dp[n],i=nsize;
dp[p]=0;
    for(ll j=p+1;j<=n;j++)
    {
         if(a[j-1]%dp1[i]==0)
         {
         dp[j]=dp[j-1]+a[j-1]/dp1[i];
        i++;
        }  //ct+=(a[j]/i);
      else
     { dp[j]=dp[j-1]+((a[j-1]/dp1[i])+1);
     i++;
     }
    }
    if(dp[n]<=h)
    {
        cout<<i-1<<endl;break;
    }

 
}
 
 
}
 
return 0;
} 
