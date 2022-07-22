#include <bits/stdc++.h>
using namespace std;
int m,n,u,v;
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        vector < int > List[100];
        for(int i =1 ;i <= n ; i++){
            cin >> u >> v;
            List[u].push_back(v);
        }
        for(int i=1;i<=m;i++) sort(List[i].begin(),List[i].end());
        for(int i = 1;i<=m;i++){
            cout << i << ": ";
            for(auto x : List[i]) cout << x <<" ";
            cout << endl;
        }
    }
}