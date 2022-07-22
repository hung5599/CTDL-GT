#include <bits/stdc++.h>
using namespace std;
class graph{
    int dinh,canh , s,t ,truoc [1001], used[1001]={0};
    vector <int> L[1001];
    vector <int> ans;
    public:
    void nhap(){
        cin >> dinh >> canh >> s >> t;
        for(int i=1;i<=canh;i++){
            int a,b;
            cin >> a >> b;
            L[a].push_back(b);
            L[b].push_back(a);
        }
    }
    void bfs(int u);
    void showpath(int s,int t);
    int gets(){
        return s;
    }
    int gett(){
        return t;
    }
};
void graph::bfs(int u){
    queue <int > q;
    q.push(u);
    used[u]=1;

    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(auto v:L[tp]){
            if(used[v]==0){
                q.push(v);
                used[v]=1;
                truoc[v]=tp;
            }
        }
    }
}
void graph::showpath(int s,int t){
    int u = truoc[t];
    int kt=1;
    ans.push_back(t);
    while(u!=s){
        if(u==0){
            kt =0 ;
            break;
        }
        else{
            ans.push_back(u);
            u = truoc[u];
        }    
    }
    ans.push_back(s);
    if(kt==0) cout << -1 ;
    else{
        for(int i= ans.size()-1;i >=0;i--) cout << ans[i] << " ";
    }
    cout << endl;
}

main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        g.bfs(g.gets());
        g.showpath(g.gets(),g.gett());
    }

}