#include <bits/stdc++.h>
using namespace std;
int u,v ,m,n,s,chuaxet[1005]={0};
void init(){
    for(int i=1;i<=m;i++) chuaxet[i]=1;
}
void DFS(int u,vector <int > L[]){
    chuaxet[u] = 0 ;
    for(int i = 0 ; i < L[u].size();i++){
        int v = L[u][i];
        if(chuaxet[v]==1){
            DFS(v,L);
        }
}
}
void kiemtra(int s, int t,vector <int > L[]){
    init();
    DFS(s,L);
    if(chuaxet[t]==0) cout << "YES" <<endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n ;
        vector <int > L[1005];
        for(int i = 1; i<=n ; i++){
            int a,b;
            cin >> a >> b;
            L[a].push_back(b);
            L[b].push_back(a);
        }
        for(int i=1;i<=m;i++) sort(L[i].begin(),L[i].end());
        int k;
        cin >> k;
        while(k--){
            cin >> u >> v;
            kiemtra(u,v,L);
        }     
    }
}