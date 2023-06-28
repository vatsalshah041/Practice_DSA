#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }int c;
        for(int i=0;i<n;i++)
        {
            c=-1;
            if(i<n-2){
            for(int j=i+2;j<n;j++)
            {
               if(a[i]==a[j]) 
               {
                   c=i;
                   break;
               }
            }
            }
            for(int k=i+1;k<c;k++)
            {
                a[k]=a[i];
            }
            cout<<a[i];
        }
        t--;
    }
	return 0;
}
