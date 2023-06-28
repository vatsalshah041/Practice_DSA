#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        int e=0;int o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                e=e+1;
            }
            else{
                o=o+1;
            }
        }
        if(o==0 || e==0)
        {
            cout<<"0"<<endl;
        }
        else if(o>e)
        {
            cout<<e<<endl;
        }
        else if(e>o)
        {
            cout<<o<<endl;;
        }
        
        else if(o==e)
        {
            cout<<o<<endl;
        }
        t--;
    }
	return 0;
}
