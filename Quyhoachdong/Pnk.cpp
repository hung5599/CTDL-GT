#include <bits/stdc++.h>
using namespace std;
int n,k;
const long long M=1e9+7;
long long P[1005][1005] = {0};
void chinhhop(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0) P[i][j]=1;
            else{
                P[i][j]= ((P[i][j-1]%M)*((i-j+1)%M))%M; 
            }
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        chinhhop();
        if (k>n) cout << 0 << endl;
        else cout << P[n][k] << endl;
    }
}
