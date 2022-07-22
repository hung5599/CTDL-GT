#include <bits/stdc++.h>
using namespace std;
bool check(int a[],int n, vector <int> v){
    for(int i=0;i<n;i++){
        if( v[i] != a[i]) return false; 
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        vector <int> v;
        for(int i=0;i<n;i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++){
            if(a[i]>a[n-i-1]){
                swap(a[i],a[n-i-1]);
            }
        }
        if(check(a,n,v)) cout << "Yes" <<endl;
        else cout << "No" <<endl;
    }
}