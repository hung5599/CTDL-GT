#include <bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k ;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int j = min(k,n-k);
        sort(a,a+n);
        int trai=0;
        int phai=0;
        for(int i=0;i<j;i++) trai += a[i];
        for(int i=j;i<n;i++) phai += a[i]; 
        cout << phai-trai << endl;
    }
}