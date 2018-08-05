#include<bits/stdc++.h>
using namespace std;
double area(long long int x1, long long int y1,long long int x2,long long int y2,long long int x3, long long int y3)
{
    return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
bool isInside(long long int x1, long long int y1, long long int x2, long long int y2, long long int x3, long long int y3, long long int x, long long int y)
{ 
    double A = area (x1, y1, x2, y2, x3, y3);
    double A1 = area (x, y, x2, y2, x3, y3);
    double A2 = area (x1, y1, x, y, x3, y3);
    double A3 = area (x1, y1, x2, y2, x, y);
    return (A == A1 + A2 + A3);
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n1;
        cin>>n1;
        long long int a[100010],b[100010];
        for(long long int i=0;i<n1;i++)
        {
            cin>>a[i]>>b[i];
        }
        long long int nn=(floor)(n1/10),nm=nn;
        long long int ct=0;
        vector<long long int> vect ;
        vector<long long int> vect1 ;
        for(long long int i=0;i<n1-2;i++)
        {
            for(long long int j=i+1;j<n1-1;j++)
            {
                int px[3],qx[3];
                
                long long int x1=a[i];
                px[0] = x1;
                long long int x2=a[j];
                px[1] = x2;
                long long int x3=a[j+1];
                px[2] = x3;
                long long int y1=b[i];
                qx[0] = y1;
                long long int y2=b[j];
                qx[1] = y2;
                long long int y3=b[j+1];
                qx[2] = y3;
                long long int x=(x1+x2+x3)/3;
                long long int y=(y1+y2+y3)/3;
                sort(px,px+3);
                sort(qx,qx+3);
                if(x > px[0] && x< px[2] && y>qx[0] && y<qx[2])
                {
                if(isInside(x1, y1, x2, y2, x3, y3, x, y)==1)
                {
                    if(((x==x1)&&(y==y1))||((x==x2)&&(y==y2))||((x==x3)&&(y==y3)))
                        j++;
                    else{
                        if(nn)
                        {
                            vect.push_back(x);
                            vect1.push_back(y);
                            nn--;
                            ct++;
                        }
                        else
                        break;
                    }
                }
            }
        if(nn==0)
        break;
        }
        }
        if(ct==nm)
        {
            for(long long int i=0;i<ct;i++)
            cout<<vect[i]<<" "<<vect1[i]<<endl;
        }
        else if(ct<nm)
        cout<<"-1"<<endl;
    }
    return 0;
} 
