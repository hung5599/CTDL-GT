#include <bits/stdc++.h>
using namespace std;
class graph{
    int dinh ,canh,color[1005]={0};
    vector <int> L[1005];
    public:
    void nhap();
    bool dfs(int u);
    bool lastcheck();
};
void graph::nhap(){
    cin >> dinh >> canh;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
    }
}
bool graph::dfs(int u){
    color[u]=1;
    for(int i=0;i<L[u].size();i++){
        int v = L[u][i];
        if(color[v]==0){
            if(dfs(v)) return true;
        }
        else if(color[v]==1) return true;
    }
    color[u]=2;
    return false;
}
bool graph::lastcheck(){
    for(int i=1;i<=dinh;i++){
        if(color[i]==0){
            if(dfs(i)) return true;
        }
    }
    return false;
}
main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        if(g.lastcheck()) cout << "YES"<< endl;
        else cout << "NO"  << endl;
    } 

}