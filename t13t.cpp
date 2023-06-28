#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int count1=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0)
	        {
	            count1++;
	        }
	    }
	    if(count1==n)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<count1<<endl;
	    }
	}
	return 0;
}
