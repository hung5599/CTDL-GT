#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <int> v;
    cin >> n;
    int a[100000];
    for(int i = 0;i<n;i++){
        int ele;
        cin >> ele;
        a[ele]++;
        if(a[ele]==1) v.push_back(ele);
    }
    for(int i=0;i<v.size();i++) cout << v[i] <<" ";
}