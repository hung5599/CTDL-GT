#include<bits/stdc++.h>
using namespace std;
int n, A[1005][1005];
main(){
    cin >> n;
    vector <int> L[105];
    for(int i = 1;i<=n;i++){
        for(int j = 1; j <=n;j++){
            cin >> A[i][j];
            if(A[i][j]==1){
                L[i].push_back(j);
            }
        }
    }
    for(int i = 1;i<=n;i++){
            for(auto x : L[i]) cout << x <<" ";
            cout << endl;
    }
}