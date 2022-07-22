#include<bits/stdc++.h>
using namespace std;
class graph{
    int dinh, canh, used[1005]={0},color[1005]={0};
    vector <int> L[1005];
    public:
    void nhap();
    int bfs(int u);
    int getdinh(){
        return dinh;
    }
    int check();
};
void graph::nhap(){
    cin >> dinh >> canh;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
        L[b].push_back(a);
    }
}
int graph::bfs(int u){
    queue <int> q;
    q.push(u);
    used[u]=1;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(int i=0;i<L[s].size();i++){
            int v=L[s][i];
            if(used[v]==0){
                q.push(v);
                used[v]=1;
                if(color[s]==0) color[v]=1;
                else color[v]=0;
            }
            else{
                if(color[v]==color[s]) return 0; 
            }
        }
    }
    return 1;
}
int graph::check(){
    for(int i=1;i<=dinh;i++){
        if(used[i]==0){
            if(!bfs(i)) return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        if(g.check()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}