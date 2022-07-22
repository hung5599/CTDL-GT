#include<bits/stdc++.h>
using namespace std;
int n,s;
int A[105];
int f[105][25005];
int kq;
void caitui(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j<A[i]) f[i][j]= f[i-1][j];
            else{
                f[i][j]= max(f[i-1][j],f[i-1][j-A[i]] + A[i]);
            }
            kq = max(kq,f[i][j]);
        }
    }
}
main(){
        cin >> s >> n;
        kq = 0;
        f[105][105] ={0};
        f[0][1]=0,f[1][0],f[0][0]=0;
        for(int i=1;i<=n;i++){
            cin >> A[i];
        }
        caitui();
        cout << kq <<endl;
}