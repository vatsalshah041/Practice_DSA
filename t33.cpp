#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        int n,x,k,p;
        cin>>n>>x>>k>>p;
        int m;
        if(k>x && k<n)
        {
            m=(k-x)*5+x*10;
        }
        else if(k<=x)
        {
            m=(k)*10;
        }
        else if(k>=n)
        {
            m=(k-x)*5+(x*10)+20;
        }
        cout<<m+p;
        t--;
    }
	return 0;
}
