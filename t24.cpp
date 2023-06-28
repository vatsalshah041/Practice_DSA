#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    string s1,k1;
    while(t>0)
    {
        cin>>s1>>k1;
        int a=s1.length();
        int b=k1.length();
        int c=1;
        for(int i=1;i<=(a-b+1);i++)
        {
            c=c*i;
        }
        cout<<c<<endl;
        t--;
    }
	return 0;
}
