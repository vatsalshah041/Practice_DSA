#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    double x[n],y[n],z[n];int c=0;
    double sp,ap;
    for(int i=0;i<n;i++)
    {
        cin>>x[i],y[i],z[i];
    }
    int sp1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ap=(x[i]-y[j]+y[i]-z[j]+z[i]-x[j]);
            sp1=(pow((x[i]-y[j]+y[i]-x[j]),2)+pow((y[i]-z[j]+z[i]-y[z]),2)+pow((z[i]-x[j]-z[j]+x[i]),2));
            sp=sqrt(sp1);
            cout<<ap<<" "<<sp<<endl;
            if(sp==ap)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;

	return 0;
}

