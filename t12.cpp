#include <iostream>
using namespace std;

int main() {
        int n;
        cin>>n;int c=0;int m=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
            {
                c=c+1;cout<<c<<endl;
            }
            else{
                if(c>m)
                {
                    m=c;//cout<<"max:"<<m<<endl;
                }
                c=0;
            }
        }
        if(c>m)
        {
            m=c;
        }
        cout<<m<<endl;
	return 0;
}
