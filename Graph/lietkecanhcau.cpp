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
        if(chuaxet[v]==1&&v!=0) dfs(v,L);
    }
}
int demTPLT(vector <int> L[]){
    int cnt=0;
    for(int i=1;i<=m;i++){
        if(chuaxet[i]==1){
            cnt++;
            dfs(i,L);
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
        int moc = demTPLT(L);
        for(int i=1;i<=m;i++) sort(L[i].begin(),L[i].end());
        for(int i=1;i<=m;i++){
            for(int j=0;j<L[i].size();j++){
                Init();
                int temp = L[i][j];
                L[i][j]=0;
                dfs(1,L);
                if(demTPLT(L)>moc && i < temp) cout << i << " " <<  temp << " ";
                L[i][j]= temp;
            }
        }
        cout << endl;
    }
}