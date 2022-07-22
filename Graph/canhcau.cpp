#include<bits/stdc++.h>
using namespace std;
class graph{
    int dinh,canh,used[1001];
    vector <int > L[1001];
    vector <pair <int,int>> c;
    public:
    void nhap();
    void reset(){
        for(int i =1;i<=dinh;i++) used[i]=0;
    }
    void dfs1(int u);
    void dfs2(int u,int s,int t);
    void canhcau();
};
void graph::nhap(){
    cin >> dinh >> canh;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
        L[b].push_back(a);
        c.push_back({a,b});
    }
}
void graph::dfs1(int u){
    used[u]=1;
    for(auto v : L[u]){
        if(used[v]==0) dfs1(v);
    }
}
void graph::dfs2(int u,int s,int t){
    used[u] = 1;
    for(auto v : L[u]){
        if((u==s&&v==t)||(u==t&&v==s)) continue;
        if(used[v]==0){
            dfs2(v,s,t);
        }
    }
}
void graph::canhcau(){
    int tplt=0;
    int ans =0;
    for(int i =1 ;i<=dinh;i++){
        if(used[i]==0) {
            dfs1(i);
            ++tplt;
        }
    }
    for(int i=0;i < c.size();i++){
        int a = c[i].first, b= c[i].second;
        reset();
        int dem=0;
        for(int j = 1;j<=dinh;j++){
            if(used[j]==0){
                dfs2(j,a,b);
                dem++;
            }
        }
        if(dem > tplt) cout  << a <<" " << b <<" ";
    }
    cout <<  endl;
}
main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        g.reset();
        g.canhcau();
    }

}