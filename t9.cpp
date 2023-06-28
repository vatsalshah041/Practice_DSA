#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;int count=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            // cout<<s[i]<<endl;
            if(s[i]=='1' && i!=n-1)
            {
                // cout<<"hi";
                continue;
            }
            // else if(s[i]=='1' && i==n-1)
            // {
            //     count++;
            // }
            // else{}
            if(i!=0 && s[i-1]=='1')
            {
                count++;
            }
        }
        if(s[n-1]=='1')
        cout<<(count+1)<<endl;
        else 
        cout<<count<<endl;
        t--;
    }
	return 0;
}
