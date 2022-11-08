#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> _v = {22,34,21,12,32,3,11};
    cout<<"Minimum element -> "<<*min_element(_v.begin(),_v.end());
    return 0;
}