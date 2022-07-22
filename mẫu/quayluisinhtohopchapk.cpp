#include<bits/stdc++.h>
using namespace std;
int C[20],n,k;
void in(){
    for(int i=1;i<=k;i++) cout << C[i]<<" ";
    cout << endl;
}
void quaylui(int i){
    int j;
    for(j=C[i-1]+1;j<=n-k+i;j++){
        C[i] = j;
    if(i==k) in();
    else quaylui(i+1);
    }
}
int main(){
    C[0] = 0;
    cin >> n >> k ;
    quaylui(1);
}