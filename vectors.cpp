#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void display(vector<int> &v2)
{
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i];
    }
}
int main()
{
    vector<int> v1;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }
    cout<<(*v1.begin());
    vector<int> :: iterator itr=v1.begin();
    v1.insert(itr,50);//adds 50 at itr
    v1.insert(itr,5,50);//adds 50 5 times
    display(v1);
    return 0;
}
