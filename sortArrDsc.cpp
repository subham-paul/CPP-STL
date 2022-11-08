#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {22,1,2,33,45,34};
    int n = 6;
    sort(arr, arr+n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}