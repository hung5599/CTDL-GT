#include<bits/stdc++.h>
using namespace std;
int B[20],n;
void in(){
    for(int i=1;i<=n;i++) cout << B[i]<<" ";
    cout << endl;
}
void quaylui(int i){
    int j;
    for(j=0;j<=1;j++){
        B[i]=j;
        if(i==n) in();
        else quaylui(i+1);
    }
}
int main(){
    cin >> n;
    quaylui(1);
}