#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000]={0}, ok =1;
void in(){
    for(int i=1;i<=n;i++) {
        if(a[i]==0) cout << 'A';
        else cout << 'B';
    }
    cout << " ";
}
void next(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) in();
        else next(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) a[i]= 0;
        next(1);
        cout << "\n";
    }
}