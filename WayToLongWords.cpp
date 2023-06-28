# include <iostream>
using namespace std;
int main()
{
    cout<<"welcome"<<endl;
    int t;
    cin>>t;
    int c=1;
    while(c<=t)
    {
        string s;
        cin>>s;
        if(s.length()>10)
        {
            cout<<s[0]<<(s.length()-2)<<s[s.length()-1]<<endl;
        }
        else
        cout<<s<<endl;
        c=c+1;
    }
    return 0;
}