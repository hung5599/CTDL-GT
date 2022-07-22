#include <bits/stdc++.h>
using namespace std;
int n, a[100][100],kt=0;
vector <string> v;
void dequy(int i,int j,string s){
    if(i==1&&j==1&&a[i][j]==0) {
        kt=0;
        return ;
    }
    if(i==n&&j==n&&a[n][n]==1){
        kt=1;
        v.push_back(s);
        return;
    }
    if(a[i+1][j]==1&&i<n){
        dequy(i+1,j,s+"D");
    }
    if(a[i][j+1]==1&&j<n){
        dequy(i,j+1,s+"R");
    }
    if((i<n&&j<n&&!a[i+1][j]&&!a[i][j+1])||i>n||j>n) return;
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin >> a[i][j];
        }
        dequy(1,1,"");
        if(kt==0) cout << -1;
        else{
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout << v[i] << " ";
        }
        cout << endl;
        kt=0;
        v.clear();
    }
}