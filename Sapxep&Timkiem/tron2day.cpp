#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,m;
    cin >> n >> m;
    int h=m+n;
    int a[h];
    for( int i=0;i<h;i++) cin >> a[i] ;
    sort(a,a+h);
    for( int i=0;i<h;i++) cout  << a[i] <<" " ;

    cout << "\n";
    }
}