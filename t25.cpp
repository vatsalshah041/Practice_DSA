#include <iostream>
#include <vector>

using namespace std;

int count_satisfied_condition(const vector<int>& arr) {
    int count = 0;
    int n = arr.size();
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         for (int k = j + 1; k < n; k++) {
    //             int a = arr[i], b = arr[j], c = arr[k];
    //             if (a * b - c == 10) {
    //                 count++;
    //             }
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                int a = arr[i], b = arr[j], c = arr[k];
                if (a * b - c == 10 && a!=b && b!=c &&c!=a) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5,6};
    int count = count_satisfied_condition(arr);
    cout << "The condition is satisfied " << count << " times." << endl;
    return 0;
}
