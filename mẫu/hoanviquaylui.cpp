#include<bits/stdc++.h>
using namespace std;
int A[15],B[15]={0},n;
void in(){
    for(int i=1;i<=n;i++) cout << A[i];
    cout << " ";
}
void quaylui(int i){
    int j;
    for(j=1;j<=n;j++){
        if(!B[j]){
            A[i]=j;
            B[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            B[j]=0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n;
    quaylui(1);
    cout << "\n";
    }
}