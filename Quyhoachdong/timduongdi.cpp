#include <bits/stdc++.h>
using namespace std;
int A[505][505],C[505][505],N,M;
int tinh(){
    memset(C,0,sizeof(C));
    int i,j,kq=0;
    for(i=1;i<=M;i++) C[1][i]=A[1][i];
    for(i=1;i<=N;i++) C[i][1] = A[i][1];
    for(i=2;i<=N;i++){
        for(j=2;j<=M;j++){
             C[i][j] = min(C[i-1][j],min(C[i][j-1],C[i-1][j-1])) +A[i][j];
        }
    }
    return C[N][M];
}
main(){
    int t,i,j;
    cin >> t;
    while(t--){
        cin >> N >> M;
        for(i=1;i<=N;i++){
            for(j=1;j<=M;j++) cin >> A[i][j];
        }
        cout << tinh() << endl;
    }

}