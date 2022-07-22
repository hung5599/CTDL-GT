#include<bits/stdc++.h>
using namespace std;
int n,X,A[25], C[25],OK;
void in(int m){
    OK=1;
    cout << "[";
    for(int i=1;i<m;i++) cout  << C[i] <<" " ;
    cout << C[m] << "]";
    cout << endl;
}
void quaylui(int i,int t){
    int j;
    for( j=1;j<=n;j++){
        if( A[j] >=C[i-1] && t+ A[j] <= X) {
            C[i]=A[j];
            t+=A[j];
            if(t==X) in(i);
            else if(t>X) return;
            else quaylui(i+1,t);
            t = t - A[j];
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n >> X;
    for(int i=1;i<=n;i++) cin >> A[i];
    OK=0;
    quaylui(1,0);
    if(OK==0) cout <<-1;
    
    }
}