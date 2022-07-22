#include <bits/stdc++.h>
using namespace std;
class graph{
    int n,m;
    char A[505][505];
    vector <pair <int,int > >  v;
    public:
    void nhap();
    int kq();
};
void graph::nhap(){
    cin >> n>> m;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=m;j++) {
            cin >> A[i][j];
            if(A[i][j]=='W'){
                v.push_back({i,j});
            }
        }
    }
}
int graph::kq(){
    int cnt=0;
    for(int i = 0;i<v.size();i++){
        queue <pair <int,int> > q;
        q.push(v[i]);
        if(A[v[i].first][v[i].second]=='W') cnt++;
        while(!q.empty()){
            pair <int,int> frt = q.front();
            q.pop();
            if(A[frt.first+1][frt.second]=='W'&&frt.first+1<=n){
                A[frt.first+1][frt.second]='.';
                q.push({frt.first+1,frt.second});
            }
            if(A[frt.first][frt.second+1]=='W'&&frt.second+1<=m){
                A[frt.first][frt.second+1]='.';
                q.push({frt.first,frt.second+1});
            }
            if(A[frt.first][frt.second-1]=='W'&&frt.second-1>=1){
                A[frt.first][frt.second-1]='.';
                q.push({frt.first,frt.second-1});
            }
            if(A[frt.first-1][frt.second]=='W'&&frt.first-1>=1){
                A[frt.first-1][frt.second]='.';
                q.push({frt.first-1,frt.second});
            }
            if(A[frt.first+1][frt.second+1]=='W'&&frt.first+1<=n&&frt.second+1<=m){
                A[frt.first+1][frt.second+1]='.';
                q.push({frt.first+1,frt.second+1});
            }
            if(A[frt.first-1][frt.second-1]=='W'&&frt.first-1>=1&&frt.second-1>=1){
                A[frt.first-1][frt.second-1]='.';
                q.push({frt.first-1,frt.second-1});
            }
            if(A[frt.first+1][frt.second-1]=='W'&&frt.first+1<=n&&frt.second-1>=1){
                A[frt.first+1][frt.second-1]='.';
                q.push({frt.first+1,frt.second-1});
            }
            if(A[frt.first-1][frt.second+1]=='W'&&frt.first-1>=1&&frt.second+1<=m){
                A[frt.first-1][frt.second+1]='.';
                q.push({frt.first-1,frt.second+1});
            }
        }
    }
    return cnt;
}

main(){
    graph g;
    g.nhap();
    cout << g.kq() << endl;
}