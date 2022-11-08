#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 35, 85, 93, 62, 10, 345, 43, 2, 10};
    int n = 10;

    cout << "Occurrences of 10 in vector: ";
    cout << count(v.begin(), v.end(), 10);

    return 0;
}