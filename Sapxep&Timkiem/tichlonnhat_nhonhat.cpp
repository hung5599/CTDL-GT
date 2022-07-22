#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,m;
    cin >> n >> m;
    long long a[n];
    long long b[m];
    long long p;
    for( int i=0;i<n;i++) cin >> a[i] ;
    for( int i=0;i<m;i++) cin >> b[i] ;
    sort(a,a+n);
    sort(b,b+m); 
    p = a[n-1]*b[0];
    cout << p;
    cout << "\n";
    }
}