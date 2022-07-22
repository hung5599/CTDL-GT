#include<bits/stdc++.h>
using namespace std;
char c,ch[50];
int k,A[50],n;
void in(){
    for(int i=1;i<=k;i++){
       char x = A[i]+64;
       cout << x;
    }
    cout << endl;
}
void quaylui(int i){
    int j;
    for (j= 1;j<=n;j++){
        if(j >=A[i-1]){
            A[i] = j;
        if(i==k) {
            in();
        }
        else quaylui(i+1);
        }
    }
}
main(){
    cin >> c >> k;
    n =  c - 64;
    A[0]=1;
    quaylui(1);
}