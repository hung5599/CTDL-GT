#include <bits/stdc++.h>
using namespace std;
int n,k,M=1e9+7;
struct Matran{
    long long f[15][15];
};
Matran operator* (Matran A, Matran B){
    Matran C; int i,j,k;
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
            C.f[i][j]=0;
            for(k=0;k<n;k++){
                C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%M)%M;
            }
        }
    }
    return C;
}
Matran powMod(Matran A, int n){
    if(n==1) return A;
    Matran X = powMod(A,n/2);
    if(n%2==0) return X*X;
    else return A*X*X;
}
main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n >> k;
    Matran A;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin >> A.f[i][j];
    }
    Matran kq = powMod(A,k);
    long long tong = 0;
    for(int i = 0;i<n;i++){
            tong = (tong+kq.f[i][n-1])%M; 
    }
    cout << tong << endl;
    }
}