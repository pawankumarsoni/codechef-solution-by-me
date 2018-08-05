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
        int n,m,h=0,g=0,sum=0;
        cin>>n>>m;
        int a[100],offer[100],maxjob[100],qual[100][100],b[100],c[100],s[]={0},x,y;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>offer[i]>>maxjob[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>qual[i][j];
            }
        }
        int o,e;
        for(int k=0;k<n;k++)
        {
            e=a[k];
            cout<<e<<endl;
            o=0;
            for(int l=0;l<m;l++)
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
    for(int z=0;z<o-1;z++)
    {
        for(int w=z+1;w<o;w++)
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
    int u,f;
            for(int p=0;p<o;p++)
            {
                u=vect1[p];
                f=vect2[p];
                if((e<=u)&&(f>0))
                    {
                    s[h]=u;
                    (f)--;
                   g++;
                    h++;
                    break;
                    }
            }
        }
        for(int v=0;v<h;v++)
        {
            sum=sum+s[v];
        }
        cout<<g<<endl;
        cout<<sum<<endl;
    }
    return 0;
}
