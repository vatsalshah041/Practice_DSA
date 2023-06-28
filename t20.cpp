#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        int n,m;int tp[]={5,10,50,100,500,1000,5000,10000,50000,100000,500000};
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<m;i++)
        {
            cin>>b[m];
        }
        sort(b,b+m);
        if(n<m)
        {
            cout<<"NO"<<endl;
            continue;
        }

        t--;
    }
	return 0;
}
