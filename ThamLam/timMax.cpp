#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int n, a[10000007];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        long long s=0;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int tmp = i*a[i]%M;
            s += tmp;
            s=s%M;
        }
        cout << s << endl;
    }
}