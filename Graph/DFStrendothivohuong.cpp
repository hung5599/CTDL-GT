#include <bits/stdc++.h>
using namespace std;
int m,n,s,chuaxet[1005];
vector <int > L[1005];
void DFS(int u){
    cout << u << " ";
    chuaxet[u] = 1 ;
    for(int i = 0 ; i < L[u].size();i++){
        int v = L[u][i];
        if(chuaxet[v]==0){
            DFS(v);
        }
}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n >>s;
        memset(L,0,sizeof(L));
        memset(chuaxet,0,sizeof(chuaxet));
        for(int i = 1; i<=n ; i++){
            int a,b;
            cin >> a >> b;
            L[a].push_back(b);
        }
        for(int i=1;i<=m;i++) sort(L[i].begin(),L[i].end());
        DFS(s);
        cout << endl;
    }
}