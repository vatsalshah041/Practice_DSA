#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
    int n;int lead=0;int w=0;int c1=0,c2=0;
    cin>>n;
    int s1[n],s2[n];
        
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>s1[i]>>s2[i];
            c1=c1+s1[i];c2=c2+s2[i];
            c=abs(c1-c2);
            //cout<<c;
            if(c>lead)
            {
                lead=c;
                if(c1>c2){w=1;}
                if(c2>c1){w=2;}
            }
        }
        cout<<w<<" "<<lead;
	return 0;
}
