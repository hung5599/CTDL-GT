#include <bits/stdc++.h>
using namespace std;
class graph{
    int dinh ,canh,used[1005]={0},par[1005]={0};
    vector <int> L[1005];
    public:
    void nhap();
    bool bfs(int u);
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
bool graph::bfs(int u){
    queue <int> q;
    q.push(u);
    used[u]=1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i=0;i<L[s].size();i++){
            int v= L[s][i];
            if(used[v]==0){
                q.push(v);
                used[v]=1;
                par[v]=s;
            }
            else if(v!=par[s]) return true;
        }
    }
    return false;
}
bool graph::lastcheck(){
    for(int i=1;i<=dinh;i++){
        if(used[i]==0){
            if(bfs(i)) return true;
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