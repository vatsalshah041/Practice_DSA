#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int row;
    cin>>row;
    int l=s.length();
    cout<<l;
    int r=0,c=0;
    string fs[row];
    int j=0;int d=1;
    for(int i=0;i<row;i++)
    {
        fs[i]="";
    }
    for(int i=0;i<l;i++)
    {
        cout<<i;
        if(j==0 && j==row-1)
        {
            d=-d;
        }
        fs[row]+=s[i];
        cout<<fs[row]<<j<<endl;
        if(d==-1)
        {
            j++;
        }
        else{
            j--;
        }
    }
    string rs="";
    for(int i=0;i<row;i++)
    {
        rs=rs+fs[i];
    }
    cout<<rs;
    return 0;
}