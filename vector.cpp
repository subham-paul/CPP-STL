#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;

    vector<int> a(5, 1); //a-> vector name, 5-> size of vector, 1-> 5 of elements are 1

    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " "; //print a's element
    }
    cout << endl;

    vector<int> last(a); //for copy a's element in last vector

    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity-> " << v.capacity() << endl; //capacity mean vector capacity

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl; //capacity mean vector capacity
    cout << "Size-> " << v.size() << endl; //size mean vector element 

    cout << "Elemetn at 2nd Index" << v.at(2) << endl;

    cout << "front " << v.front() << endl; // print vector 1st element
    cout << "back " << v.back() << endl; // print vector last element

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); //for remove last element

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "before clear size " << v.size() << endl;
    v.clear(); //for clear the vector size
    cout << "after clear size " << v.size() << endl;
}
