#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    long long  n;
    cin >> t;
    while(t--){
        cin >>  n;
        long long  a[n],b[n-1];
        for(long long  i=0;i<n;i++) {
            cin >> a[i];
        }
        for(long long  i=0;i<n-1;i++){
             cin >> b[i];
        }
        long long res=n;
        for(long long i=0;i<n-1;i++){
            if(a[i]!=b[i]){
                res = i +1;
                break;
            }
        }
        cout << res <<endl;
    }
}