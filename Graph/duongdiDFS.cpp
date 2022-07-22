#include <bits/stdc++.h>
using namespace std;
class graph{
    int dinh, canh, s,t,truoc[1005]={0},used[1005]={0};
    vector <int > L[1005];
    vector <int> ans;
    public:
    void nhap();
    void dfs(int s,int t);
    int gets(){
        return s;
    }
    int gett(){
        return t;
    }
    void showpath(int s,int t);
};
void graph::nhap(){
    cin >> dinh >> canh >> s >> t;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
        L[b].push_back(a);
    }
}
void graph::dfs(int s,int t){
    used[s]=1;
    for(int i=0;i<L[s].size();i++){
        int v = L[s][i];
        if(used[v]==0){
                dfs(v,t);
                truoc[v]=s;
            }
        }
        
    }
void graph::showpath(int s,int t){
    int u = truoc[t];
    ans.push_back(t);
    int kt=1;
    while(u!=s){
        if(u==0) {
            kt=0;
            break;
        }
        else{
        ans.push_back(u);
        u = truoc[u];
        }
    }
    ans.push_back(s);

    if(kt==1) for(int i=ans.size()-1;i>=0;i--) cout << ans[i] <<" ";
    else cout <<-1;
    cout << endl;
}
main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        g.dfs(g.gets(),g.gett());
        g.showpath(g.gets(),g.gett());
    }
}