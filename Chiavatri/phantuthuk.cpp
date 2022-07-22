#include<bits/stdc++.h>
using namespace std;

main(){
    int t,n,m,k;
    cin >> t;
    while(t--){
        cin >>  n >> m >>k;
        int a[n+m];
        for(int i=0;i<m+n;i++) cin >> a[i];
        sort(a,a+(m+n));
        cout << a[k-1] <<endl;
    }
}