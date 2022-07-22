#include<bits/stdc++.h>
using namespace std;
int n,k,A[105],B[105],cnt=0;
void in(){
    int kt=1;
    for(int i=1;i<k;i++){
        if(A[B[i]] > A[B[i+1]]){
            kt=0;
            break;
        }
    }
    if(kt==1) cnt++; 
}
void quaylui(int i){
    int j;
    for(j=B[i-1]+1;j<=n-k+i;j++){
        B[i] = j;
    if(i==k){
        in();
    }
    else quaylui(i+1);
    }
}
main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> A[i];
    for(int i=1;i<=n;i++) B[i]=0;
    quaylui(1);
    cout <<cnt << endl;
}