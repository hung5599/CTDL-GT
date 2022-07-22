#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
int n,k;
int C[1005][1005] = {0};
void tohop(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||i==j) C[i][j]=1;
            else
            C[i][j] = (C[i-1][j-1]%M + C[i-1][j]%M)%M;
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        C[1005][1005]={0};
        cin >> n >> k;
        tohop();
        cout << C[n][k] << endl;
    }
}