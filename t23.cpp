#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i]<<endl;
    }
    int s;
    int c = 0;
    for (int i = 0; i < 2; i++)
    {
        //cout<<"i="<<i;
        for (int j = i + 1; j < 3; j++)
        {
            //cout<<"j="<<j;
            //cout<<a[i]<<" "<<a[j];
            s = a[i] + a[j];
            //cout<<s<<endl;
            if (s > 0 && s % 2 == 0 && c==0)
            {
                c = 1;
                cout << "YES";
                break;
            }
        }
    }
    if(c==0)
    {
        cout<<"NO";
    }

    return 0;
}