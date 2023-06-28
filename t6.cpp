#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int frev=0;
int main() {
    int n;
    cin>>n;
    int a[n];
    int c=0;
    while(c<n){
        cin>>a[c];
        c++;
    }int fp;
    sort(a,a+n);
    for(int i=0;i<n;i++){
       int rev=a[i]*(n-i);
        if(rev>=frev){frev=rev;}
    }
    cout<<frev;

	return 0;
}