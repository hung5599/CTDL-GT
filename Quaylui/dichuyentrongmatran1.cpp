#include <bits/stdc++.h>
using namespace std;
int m,n, a[105][105], dem;
void quaylui(int i,int j){
    if(i==m-1&&j==n-1){
        dem++;
    }
    if(i<m-1){
        quaylui(i+1,j);
    }
    if(j<n-1) quaylui(i,j+1);
}
main(){
    int t;
    cin >> t;
    while (t--){
        cin >> m >> n;
        for(int i =0;i<m; i++ ) for(int j=0;j<n;j++) cin >> a[i][j];
        dem = 0;
        quaylui(0,0);
        cout << dem <<endl;
    }
}