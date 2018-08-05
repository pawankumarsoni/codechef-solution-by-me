#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,q;
    cin>>n>>q;
    ll a[n],b[n];
            ll left1,right1;
    for(ll i=0;i<n;i++)
{
    cin>>a[i];
         
}

    for(ll i=0;i<q;i++)
    {
        ll p;
        cin>>p;
        if(p==1)
        {
            ll c,d;
            cin>>c>>d;
        a[c]=d;
        cin>>p;
        }
         if(p==2)
        {
    
            cin>>left1>>right1;
        }
        if((right1-left1+1)>=3){
        ll k=0,flag=0;
        for(ll j=left1-1;j<right1;j++)
        {
            b[k]=a[j];
            k++;
        }
        sort(b,b+k);
        for(ll q=k-1;q>1;q--)
        {   
            if(b[q]<(b[q-1]+b[q-2]))
            {
               flag=1;
            break;
            }
        }
        if(flag==1)
         cout<<b[q]+b[q-1]+b[q-2]<<endl;
         else
         cout<<"0"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
