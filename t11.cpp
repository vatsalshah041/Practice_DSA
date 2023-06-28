#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[2*n];
        int c=0;int d=0;
        for(int i=0;i<(2*n);i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<(n*2)-1;i++)
        {
            c=0;
            for(int j=i+1;j<2*n;j++)
            {
                if(a[i]==a[j])
                {
                    c=c+1;
                }
            }
            //cout<<"c:"<<c<<endl;
            if(c>=2)
            {
                d=1;
                break;
            }
        }
        if(d==0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        t--;
    }
	return 0;
}
