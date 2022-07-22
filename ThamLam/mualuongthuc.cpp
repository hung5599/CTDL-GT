#include<bits/stdc++.h>
using namespace std;
int N,S,M;
void tinh(){
    if(N<M) cout << -1;
    else {
        int CN = S/7;
        if(N*(S-CN)<S*M) cout << -1;
        else{
            if(M*S/N == float((float)M*S/N)) cout << M*S/N;
            else cout << M*S/N+1;
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
    cin >> N >> S >> M;
    tinh();
    cout << endl;
    }
}
