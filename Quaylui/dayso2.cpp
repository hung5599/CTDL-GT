#include<bits/stdc++.h>
using namespace std;
int n, a[20][20];
void in(){
    for(int i=1;i<=n;i++){
        cout << "[";
        for(int j=1;j<i;j++){
            cout << a[i][j] <<" ";
        }
        cout << a[i][i] <<"] ";
        cout << endl;
    }
}
void quaylui(int i){
    int j;
    if(i==0) return;
    for(j=1;j<i;j++){
        a[i-1][j] = a[i][j]+a[i][j+1];
    }
    quaylui(i-1);
}
main(){
    int t,i;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[n][i];
        quaylui(n);
        in();
    }
}
