#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {11,22,3,44,55,16};
    int size = 6;
    sort(v.begin(),v.end());
    cout<<"sorted vector"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<", ";
    }
    
    return 0;
}