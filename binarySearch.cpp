#include <bits/stdc++.h>
using namespace std;
bool compare_string_by_length(string i, string j)
{
    return (i.size() == j.size());
}
    int main()
    {
        vector<int> vec = {22, 343, 4343, 32, 11, 33, 2323, 55, 7, 676, 99};
        sort(vec.begin(), vec.end());
        // for (int i = 0; i < vec.size(); i++)
        // {
        //     cout<<vec[i]<<", ";
        // }
        cout << binary_search(vec.begin(), vec.end(), 32)<<endl; // print boolean true or false
        // vector<string> strVal = {"paul", "rahula", "akash"};
        // cout << binary_search(strVal.begin(), strVal.end(), "paul", compare_string_by_length); // print boolean true or false
        return 0;
    }