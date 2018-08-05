#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h=1,g=0,sum=0;
        cin>>n>>m;
        int a[100],offer[100],maxjob[100],qual[100][100],b[100],c[100],s[100],x,y;
        for(int i=1;i<=n;i++)
        {cin>>a[i];}
        for(int i=1;i<=m;i++)
        {
            cin>>offer[i]>>maxjob[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>qual[i][j];
            }
        }
        int o;
        for(int k=1;k<=n;k++)
        {
            o=1;
            for(int l=1;l<=m;l++)
            {
                if(qual[k][l]==1)
                {
                    b[o]=offer[l];
                    c[o]=maxjob[l];
                    o++;
                }
            }
            vector<int> vect1(b,b+o);
            vector<int> vect2(c,c+o);
    for(int z=1;z<=o;z++)
    {
        for(int w=z+1;w<=o;w++)
        {
            if(vect1[z]<vect1[w])
            {
                x=vect1[z];
                vect1[z]=vect1[w];
                vect1[w]=x;
                y=vect2[z];
                vect2[z]=vect2[w];
                vect2[w]=y;
            }
        }
    }
    	 
            
            for(int p=1;p<=o;p++)
            {
                if(a[p]<vect1[p]&&vect2[p]>=1)
                {
                    s[h]=vect1[p];
                    vect2[p]=vect2[p]--;
                    g++;
                    h++;
                    break;
                }
            }
        }
        for(int v=1;v<=h;v++)
        {
            sum=sum+s[v];
        }
    }
    return 0;
}
