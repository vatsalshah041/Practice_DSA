# include<iostream>
using namespace std;
int main()
{
    int n=10;
    int& rn=n;
    cout<<n<<"  "<<rn;
    rn=2;
    cout<<n<<"  "<<rn;
    return 0;
}