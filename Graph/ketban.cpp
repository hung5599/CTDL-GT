#include <bits/stdc++.h>
using namespace std;
class graph{
    int dinh, canh,used[100005]={0}, mx = -1 , d[100005]={0};
    vector <int > L[100005];
    public:
    void nhap();
    void reinit(){
        for(int i=1;i<=dinh;i++) used[i]=0;
    }
    int bfs(int s);
    int showMax();
};
void graph::nhap(){
    cin >> dinh >> canh ;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
        L[b].push_back(a);
    }
}
int graph::bfs(int s){
    queue <int> q;
    int cnt=1;
    used[s] = 1;
    q.push(s);
    while(!q.empty()){
        int f= q.front();
        q.pop();
        for(int i=0;i<L[f].size();i++){
            int v= L[f][i];
            if(used[v]==0){
                used[v]=1;
                cnt++;
                q.push(v);
            }
        }
    }
    return cnt;
}
int graph::showMax(){
    for(int i = 1;i<=dinh;i++){
        int cnt=0;
        if(d[i]==0){
        mx= max(mx,bfs(i));    
        }
    }
    return mx;
}

main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        cout << g.showMax() << endl;
    }
}