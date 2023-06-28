#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        a=1;b=1;
        int x,y;
        cin>>x>>y;
        while(true)
        {
            if(x!=a)
            {
                x=x+1;
            }
            else if(x==a)
            {
                if(y==a)
                break;
                if(y!=a)
                {
                    x=x-1;
                }
            }
        }
    } 
}