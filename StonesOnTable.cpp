#include<iostream>
using namespace std;
int main()
{
    string s;
    string st;
    int n;
    cout<<"enter the no. of stones"<<endl;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length()-1;i++)
    {
        //st=s[i];
        if(s[i]==s[i+1])
        {
            s.erase(i+1);
            i--;
        }          
    }
    cout<<(n-s.length());
    return 0;
}