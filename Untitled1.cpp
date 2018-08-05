#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void searchitem(int n)
{
	int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int l=sizeof(a)/sizeof(a[0]),count=0;
	for(int i=11;i>=0;i++)
	{
		if(n>=a[i])
		{
			n=n-a[i];
			count++;
			searchitem(n);
		}
		break;
	}
	cout<<count<<endl;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
long long int n;
cin>>n;
searchitem(n);		
	}
  return 0;
}
