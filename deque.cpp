#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1); //insert value end 1
    d.push_front(2); //insert value front 1

    for (int i : d)
    {
        cout<<i<<" ";
    }

    //d.pop_front(); //delete value from starting
    //d.pop_back(); //delete value from end
    // cout << endl;
    // for (int i : d)
    // {
    //     cout<<i<<" ";
    // }

    cout << "Print First Index Element-> " << d.at(1) << endl; //.at() is a built-in function which returns a element present at location i in given array

    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase " << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    return 0;
}