#include<bits/stdc++.h>
using namespace std;
int ok,c[20],n,k;
void in(){
    for(int i=1;i<=k;i++) cout << c[i];
    cout << " ";
}
void sinh(){
    int i=k,j;
    while(i>=1&&c[i]==n-k+i) {
        i--;
    }
    if(i==0) ok=1;
    else {
        c[i]=c[i]+1;
        for(j=i+1;j<=k;j++) c[j]=c[j-1]+1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1;i<=k;i++) c[i]=i;
        ok=0;
        while(!ok){
        in();
        sinh();
        } 
        cout << "\n";
    }
}