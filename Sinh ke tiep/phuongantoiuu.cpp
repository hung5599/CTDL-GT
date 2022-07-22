
#include<bits/stdc++.h>
using namespace std;
int n,k,A[105]={0},B[105],kq=0;
struct dovat{
    int v,w;
};
dovat dv[105];
void check(){
    long long tongw=0,tongv=0;
    for(int i=1;i<=n;i++){
        if(A[i]==1){
            tongw+= dv[i].w;
            tongv+= dv[i].v;
        }
    }
    if(tongw<=k&&tongv>kq){
        kq = tongv;
        for(int i=1;i<=n;i++){
            B[i]=A[i];
        }
    }
}
void quaylui(int i){
    int j;
    for(j=0;j<=1;j++){
        A[i]=j;
        if(i==n){
            check();
        }
        else quaylui(i+1);
    }
}
main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> dv[i].v;
    }
    for(int i=1;i<=n;i++){
        cin >> dv[i].w;
    }
    quaylui(1);
    cout << kq << endl;
    for(int i=1;i<=n;i++) cout << B[i] <<" ";

}