#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0)
    {
        int n,q;int s=0;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        int l,r;
        for(int i=1;i<=q;i++)
        {
            cin>>l>>r;
            int ctr=1;
            if((r-l+1)%2==1)
            {
                s=s+1;
            }
            // for(int i=l-1;i<=r-1;i++)
            // {
            //     if(ctr%2==0)
            //     {
            //         s=s-1;
            //     }
            //     else{
            //         s=s+1;
            //     }
            //     ctr=ctr+1;
            // }
        }
        
        cout<<s<<"\n";
        t--;
    }
	return 0;
}
