// Example program
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    long long int t,topic1,i;
    cin>>t;
    while(t--)
    {
        long long int k,i,sum=0;
        cin>>k;
        vector<long long int> topic;
        for(int p=0;p<7;p++)
        {
            cin>>topic1;
            sum+=topic1;
            topic.push_back(topic1);
        }
        long long int add=k-(k/sum)*sum;
        if(add!=0||(add==0&&((k%sum)==0)))
        {
            for(int p=0;p<7;p++)
        {
            
            add=add-topic[p];
            if(add<=0)
            {
                i=p;
              break;
            }
        }

        if(i==0)
        cout<<"Monday"<<endl;
        
        else if(i==1)
        cout<<"Tuesday"<<endl;
        
        else if(i==2)
        cout<<"Wednesday"<<endl;
        
        else if(i==3)
        cout<<"Thursday"<<endl;
        
        else if(i==4)
        cout<<"Friday"<<endl;
        
        else if(i==5)
        cout<<"Saturday"<<endl;
        else if(i==6)
        cout<<"Sunday"<<endl;
                
        }
        else if(((k%sum)>0)&&add==0)
        cout<<"Sunday"<<endl;
        
    }
    return 0;
    }

