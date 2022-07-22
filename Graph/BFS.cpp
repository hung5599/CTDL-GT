#include <bits/stdc++.h>
using namespace std;
int m,n,s,used[1005];
vector <int > L[1005];
void BFS(int u){
    queue <int> q;
    q.push(u);
    used[u]=1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        cout << s << " ";
        for(int i = 0;i<L[s].size();i++){
            int k = L[s][i];
            if(used[k]==0){
                q.push(k);
                used[k]=1;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n >>s;
        memset(L,0,sizeof(L));
        memset(used,0,sizeof(used));
        for(int i = 1; i<=n ; i++){
            int a,b;
            cin >> a >> b;
            L[a].push_back(b);
        }
        for(int i=1;i<=m;i++) sort(L[i].begin(),L[i].end());
        BFS(s);
        cout << endl;
    }
}