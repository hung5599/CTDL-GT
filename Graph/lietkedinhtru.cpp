#include <bits/stdc++.h>
using namespace std;
int m,n,a,b,chuaxet[1005];
void Init(){
    for(int i=1;i<=m;i++) chuaxet[i]=1;
}
void dfs(int u, vector <int> L[]){
    chuaxet[u]=0;
    for(int i=0;i<L[u].size();i++){
        int v = L[u][i];
        if(chuaxet[v]==1) dfs(v,L);
    }
}
bool dinhtru(int i,vector <int> L[]){
    Init();
    chuaxet[i]=0;
    if(i==1) dfs(2,L);
    else dfs(1,L);
    for(int j = 1;j<=m;j++){
        if(chuaxet[j]==1) return true;
    }
    return false;
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
        for(int i =1;i<=m;i++){
           if(dinhtru(i,L)) cout << i << " "; 
        }
        
        cout << endl;
    }
}