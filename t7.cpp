#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long t;
    cin>>t;
    while(t>0){
        long c=0;long n;cin>>n;long a[n];long e=0;long o=0;long ne,no;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                e=e+1;
            }
            if(a[i]<0)
            {
                o=o+1;
            }
        }
        if(e==0 || e==1)
        {
            ne=0;
        }
        else
        {
            ne=(e*(e-1))/2;
        }
        if(o==0 || o==1)
        {
            no=0;
        }
        else
        {
            no=(o*(o-1))/2;
        }
        cout<<(ne+no)<<endl;
        t--;
    }
	return 0;
}
