#include <bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
int n;
long long F[100000005];
long long fibo(int n){
    if(F[n]!=-1) return F[n]%M;
    if(n==0||n==1) return F[n]=1;
    F[n] = fibo(n-1) + fibo(n-2);
    return F[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) {
            F[i]=-1;
        }
        cout << fibo(n) << endl;
    }
}