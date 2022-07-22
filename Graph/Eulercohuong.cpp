#include <bits/stdc++.h>
using namespace std;
class graph{
    int dinh, canh,used[1005]={0},bacra[1005]={0},bacvao[1005]={0};
    vector <int > L[1005];
    public:
    void nhap();
    /*void dfs(int s){
        used[s]=1;
        for(int i=0;i<L[s].size();i++){
            int v = L[s][i];
            if(used[v]==0) dfs(v);
        }
    }
    bool check1();
    int check2();*/
    bool check();
};
void graph::nhap(){
    cin >> dinh >> canh;
    for(int i=1;i<=canh;i++){
        int a,b;
        cin >> a >> b;
        L[a].push_back(b);
        bacra[a]++;
        bacvao[b]++;
    }
}
/*bool graph::check1(){
    dfs(1);
    for(int i=1;i<=dinh;i++){
        if(used[i]==0) return false;
    }
    return true;
}
int graph::check2(){
    int cnt=0;
    for(int i=1;i<= dinh ;i++){
        if(L[i].size()%2!=0) cnt++;
    }
    if(cnt==0) return 1;
    else if(cnt==2) return 2;
    else return 3;
}*/
bool graph:: check(){
    for(int i=1;i<= dinh; i++){
        if(bacra[i]!=bacvao[i]) return false;
    }
    return true;
}
main(){
    int t;
    cin >> t;
    while(t--){
        graph g;
        g.nhap();
        if(g.check()) cout << 1 << endl;
        else cout << 0 << endl;
    }
}