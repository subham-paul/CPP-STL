#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("subham");
    q.push("paul");
    q.push("Kumar");

    cout << "Size before pop " << q.size() << endl;

    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "First Element " << q.front() << endl;

    cout << "Size after pop " << q.size() << endl;
}