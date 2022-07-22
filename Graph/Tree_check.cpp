#include <bits/stdc++.h>
using namespace std;
class graph{
    int n,used[1005]={0};
    vector <int> L[1005];
    public:
    void nhap();
    bool check(int u);
};
void graph::nhap(){
    cin >> n;
    int canh = n-1;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
        L[b].push_back(a);
    }
}
bool graph::check(int u){
    queue <int> q;
    used[u]=1;
    q.push(u);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i=0;i<L[s].size();i++){
            int v = L[s][i];
            if(used[v]==0){
                q.push(v);
                used[v]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(used[i]==0) return false;
    }
    return true;
}
main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        if(g.check(1)) cout << "YES" <<endl;
        else cout << "NO" << endl;
        }
}