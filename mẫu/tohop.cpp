#include<bits/stdc++.h>
using namespace std;
int C[20],n,k,s,dem;
void xuli(){
    int t=0,i;
    for(i=1;i<=k;i++) t+=C[i];
    if(t==s) dem++;
}
void quaylui(int i){
    int j;
    for(j=C[i-1]+1;j<=n-k+i;j++){
        C[i] = j;
    
    if(i==k) xuli();
    else quaylui(i+1);
    }
}
int main(){
    while(1){
        cin >> n >> k >> s;
        if(!n&&!k&&!s) break;
        C[0]=0; dem = 0;
        quaylui(1);
        cout << dem << endl;
    }
}