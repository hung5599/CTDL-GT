#include <bits/stdc++.h>
using namespace std;
int INF = 1e9;
class graph{
    int n,m,s,used[1001]={0},d[1001];
    vector < pair <int,int> > L[1001];
    public:
    void nhap(){
        cin >> n >> m >> s;
        for(int i=1;i<=m;i++){
            int a,b,w;
            cin >> a >> b >> w;
            L[a].push_back({b,w});
        } 
    }
    void dijkstra(int s){
        for(int i=1;i<=n;i++) d[i]=INF;
        d[s]=0;
        priority_queue < pair <int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,s});
        while(!q.empty()){
            pair <int,int > top = q.top();
            q.pop();
            int u = top.second;
            int kc  = top.first;
            if(kc > d[u]) continue;
            for(auto x :L[u]){
                int v = x.first;
                int w = x.second;
                if (d[v]> d[u]+w) {
                    d[v]= d[u]+w;
                    q.push({d[v],v});
                }
            }
        }
    }
};
main(){

}
