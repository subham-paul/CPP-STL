

#include <bits/stdc++.h>
using namespace std;

    int main()
{
    vector<int> v = {10, 35, 85, 93, 62, 35, 345, 43, 2, 10};
    int n = 10;
    auto q = lower_bound(v.begin(), v.end(), 35);
    auto p = upper_bound(v.begin(), v.end(), 35);
    cout << "The lower bound is at position: ";
    cout << q - v.begin() << endl;
    cout << "The upper bound is at position: ";
    cout << p - v.begin() << endl;
    return 0;
}