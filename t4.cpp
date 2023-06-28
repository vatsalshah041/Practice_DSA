#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n>0)
    {
        int d;string v;int dn;int ctr=0;
        cin>>d;
        cin>>v;
        for(int i=0;i<v.length();i++)
        {
            if(v[i]=='0' || v[i]=='5'){ctr=1;}
        }
        if(ctr==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        n--;
    }
	// your code goes here
	return 0;
}
