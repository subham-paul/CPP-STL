#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> _v = {22,34,21,12,32,3,11};
    reverse(_v.begin(),_v.end());
    for (int i = 0; i < _v.size(); i++)
    {
        cout<<_v[i]<<", ";
    }
    return 0;
}