#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n ;
    long long x;
    cin >> x;
    long long a[n];
    vector<long long> v;
    for( int i=0;i<n;i++) {
        cin >> a[i] ;
        v.push_back(a[i]);
    }
    long long count = 0;
    int ok=0;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=2;i--){
        int l=0; int r = i-1;
        while(l<r){
            if(v[l]+v[r]+v[i]>=x) {
                r--;
            }
            else if(v[l]+v[r] + v[i] < x) {
                l++;
                count ++;
            }
        }
    }
    cout << count << "\n";
    }
}