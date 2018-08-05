#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],offer[m],maxjob[m],qual[n][m],b[m],c[m],s[n],x,y;
        for(int i=1;i<=n;i++)
        {cin>>a[i];}
        for(int i=1;i<=m;i++)
        {
            cin>>offer[i]>>maxjob[i];
        }
        for(int i=1;i<=n;i<m)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>qual[i][j];
            }
        }
        int o=1;
        for(int k=1;k<=n;k++)
        {
            for(int l=1;l<=m;l++)
            {
                if(qual[k][l]==1)
                {
                    b[o]=offer[l];
                    c[o]=maxjob[l]
                    o++;
                }
            }
            vector<int> vect1(b,b+o);
            vector<int> vect2(c,c+o);
            
    for(int k=1;k<=o;k++)
    {
        for(int w=k+1;w<=o;w++)
        {
            if(vect1[k]>vect2[w])
            {
                x=vect1[k];
                vect1[k]=vect1[w];
                vect1[w]=x;
                y=vect2[k];
                vect2[k]=vect2[w];
                vect2[w]=y;
            }
        }
    }        int g=0;
            for(int p=1;p<=l;p++)
            {
                if(a[i]<vect1[p]&&vect2[p]>=1)
                {
                    s[i]=vect1[p];
                    vect2[p]=vect2[p]--;
                    g++;
                    break;
                }
            }
        }
        
    }
    return 0;
}
