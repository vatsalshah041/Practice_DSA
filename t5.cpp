#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n>0){
        int nd;int b;
        cin>>nd;
        int a[nd];
        for(int i=0;i<nd;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j]){
                    c=c+1;break;
                }
            }
                if(c==0){
                    cout<<a[i]<<endl;
                }
        }
        
        n--;
    }
	return 0;
}
