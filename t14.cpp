#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    sor(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int d=abs(a[i]-a[j]);//cout<<d<<endl;
            if(d>=k)
            {
                //cout<<"h"<<endl;
                c=c+(n-j);
                break;
            }
        }
    }
    cout<<c;
	return 0;
}
