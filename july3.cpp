
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int  n,b;
        cin>>n>>b;
        if(n==1)
        cout<<"0"<<endl;
		else if(n>1)
		{
        if((b==1)&&(n%2)==0)
        cout<<(n/2)*(n/2)<<endl;
        else if((b==1)&&((n%2)!=0))
        cout<<((n-1)/2)*((n+1)/2)<<endl;
        else if((b>1)&&(n%b==0))
        {
            if(((n/b)%2)!=0)
            {
             int a=n/b;
             int c=a-a/2;
            cout<<b*(a/2)*c<<endl;
            }else
            cout<<(n/2*b)*(n/2)<<endl;
        }
        else if(b>1&&n%b!=0)
        {
            
            cout<<((n-(b*(n/b)))+((n/b)/2)*b)*((n/b)-(n/b)/2)<<endl;
        }
		}
    }
    return 0;
}

