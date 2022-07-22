#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    long long n;
    cin >> n ;
    long long a[100000];
    for( int i=0;i<n;i++) cin >> a[i] ;
    sort(a,a+n);
    long long count = a[n-1] - a[0]+1;
    cout << count - n <<"\n";
    }
}