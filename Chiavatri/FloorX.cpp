#include <bits/stdc++.h>
using namespace std;
long long Apear(long long a[],long long l,long long r,long long x){
    long long res = -1 ;
    while(l<=r){
        long long m = (l+r)/2;
        if(a[m]<=x) {
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        long long X;
        cin >> n >> X;
        long long A[n];
        for(long long i=0;i<n;i++) cin >> A[i];
        long long vt = Apear(A,0,n-1,X);
        if(vt==-1) cout << -1 <<endl;
        else cout << vt+1 << endl;
    }
}