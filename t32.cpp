// bitstuffing

#include <iostream>
using namespace std;

int main()
{
    string data;
    cout << "Enter flag: ";
    cin >> data; // 1111111
    int count = 0;
    string arr[100]; // arr[12]
    int j = 0;
    for (int i = 0; i < data.length(); i++)
    {
        cout<<data[i]<<endl;
        if (data[i] == '1')
        {
            count++; // 6
            cout<<"count:"<<count<<endl;
            if (count == 5)
            {
               
                count = 0;
                arr[j] = data[i];
                j++;
                arr[j]='0';
                j++;
            }
            else
            {
                arr[j] = data[i];
                j++;
            }
        }
        else
        {
            count = 0;
            arr[j] = data[i];
            j++;
        }
    }
    for (int i = 0; i < data.length() + 1; i++)
    {
        cout << arr[i];
    }
    return 0;
}