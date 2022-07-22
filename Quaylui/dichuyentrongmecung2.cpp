#include<bits/stdc++.h>
using namespace std;
int n, A[105][105],passed[105][105];
vector <string> v;
void inkq(string s){
    v.push_back(s);  
}
void quaylui(int i,int j,string s){
    if((A[1][1]==0)||(A[n][n]==0)) return ;
    if(i==n&&j==n){
        v.push_back(s);
        return;
    }
    if(i+1<=n&& A[i+1][j] == 1 && passed[i+1][j]==0){
        passed[i][j]=1;
        quaylui(i+1,j,s+"D");
        passed[i][j]=0;
    }
    if(j+1<=n && A[i][j+1]==1&& passed[i][j+1]==0){
        passed[i][j]=1;
        quaylui(i,j+1,s+"R");
        passed[i][j]=0;
    }
    if(j-1>=1 && A[i][j-1]==1&& passed[i][j-1]==0){
        passed[i][j]=1;
        quaylui(i,j-1,s+"L");
        passed[i][j]=0;
    }
        if(i-1>=1 && A[i-1][j]==1&& passed[i-1][j]==0){
        passed[i][j]=1;
        quaylui(i-1,j,s+"U");
        passed[i][j]=0;
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++){
                cin >> A[i][j];
                passed[i][j] = 0;
            }
        }
        quaylui(1,1,"");
        if(v.size()==0) cout << -1;
        else{
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
}