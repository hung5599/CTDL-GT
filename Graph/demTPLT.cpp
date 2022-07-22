#include <bits/stdc++.h>
using namespace std;
int m,n,a,b,chuaxet[1005];
void Init(){
    for(int i=1;i<=m;i++) chuaxet[i]=1;
}
void bfs(int u, vector <int> L[]){
    queue <int > q;
    q.push(u);
    chuaxet[u]=0;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int j=0;j<L[s].size();j++){
            int v = L[s][j];
            if(chuaxet[v]==1){
                q.push(v);
                chuaxet[v]=0;
            }
        }
    }
}
int demTPLT(vector <int> L[]){
    int cnt=0;
    for(int i=1;i<=m;i++){
        if(chuaxet[i]==1){
            cnt++;
            bfs(i,L);
        }
    }
    return cnt;
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        Init();
        vector <int> L[1005];
        for(int i =1 ;i <= n ; i++){
            cin >> a >> b;
            L[a].push_back(b);
            L[b].push_back(a);
        }
        for(int i=1;i<=m;i++) sort(L[i].begin(),L[i].end());
        cout << demTPLT(L) << endl;
    }
}