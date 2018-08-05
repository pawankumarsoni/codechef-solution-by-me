#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
	int n,l=1,s,count=0,sumEven=0,sumOdd=0;
	cin>>n;
	for(int i=2;i<=n+1;i++)
	{
		int k=i;
		while(k>0)
		{
			int p=k%10;
			if(p%2==0)
			sumEven+=p;
			else
			sumOdd+=p;
			
		}
		int q=abs(sumEven-sumOdd);
		s=l*q;
		l++;
		count+=s;
	}
	cout<<count<<endl;
}

	return 0;
}
