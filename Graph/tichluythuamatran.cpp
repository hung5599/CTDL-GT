#include <bits/stdc++.h>
using namespace std;
int n,mod=1e9+7;
struct matran{
    long long f[20][20];
};
matran operator*(matran a, matran b){
    matran c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c.f[i][j]=0;
            for(int k=1;k<=n;k++){
                c.f[i][j]= (c.f[i][j]+(a.f[i][k]*b.f[k][j])%mod)%mod;
            }
        }
    }
    return c;
}
matran power(matran a, int k){
    if(k==1) return a;
    matran x = power(a,k/2);
    if(k%2==0) return x*x;
    else return a*x*x;
}
main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> n >> k;
        matran a;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> a.f[i][j];
            }
        }
        matran c = power(a,k);
        long long tong=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                    tong+= c.f[i][j]%mod;
                }   
            }
        }
        cout << tong << endl;
    }
}