#include <bits/stdc++.h>
using namespace std;
int n,A[10000005],B[10000005];
long long tong;
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> A[i];
        for(int i=0;i<n;i++) cin >> B[i];
    sort(A,A+n);
    sort(B,B+n);
    tong=0;
    for(int i=0;i<n;i++){
        tong+= A[i]*B[n-i-1];
    }
    cout << tong << endl;
}
}