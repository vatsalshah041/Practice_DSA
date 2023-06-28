#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int o=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                o++;
            }
        }
        if(o%2!=0)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        t--;
    }
	return 0;
}
