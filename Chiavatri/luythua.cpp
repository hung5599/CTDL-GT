#include <bits/stdc++.h>
using namespace std;
int M=1e9 +7;
long long powMod(int n ,long long k){
    if(k==0) return 1;
    long long x = powMod(n,k/2);
    if(k%2==0) return x*x%M;
    return n*(x*x%M)%M;
}
int main(){
    int a;
    long long b;
    while(cin >> a>>b){
        if(a==0&&b==0) return 0 ;
        else cout << powMod(a,b) <<endl;
    }
}