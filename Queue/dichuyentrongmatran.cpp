#include <bits/stdc++.h>
using namespace std;
int m,n,A[1005][1005],kq[1005][1005];

void solve(){
    queue <pair <int ,int > > q;
    memset(kq,-1,sizeof(kq));
    q.push({1,1});
    kq[1][1] = 0;
    while(!q.empty()){
        pair <int , int > t = q.front();
        q.pop();
        int x = t.first;
        int y = t.second;
        if(kq[x+A[x][y]][y]==-1){
            kq[x+A[x][y]][y] = kq[x][y]+1;
            q.push({x+A[x][y],y});
        }
        if(kq[x][y+A[x][y]]==-1){
            kq[x][y+A[x][y]] = kq[x][y]+1;
            q.push({x,y+A[x][y]});
        }
        if(kq[m][n] != -1 ) return;
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i =1;i<=m;i++){
            for(int j =1;j<=n;j++) cin >> A[i][j];
        }
        solve();
    }
}