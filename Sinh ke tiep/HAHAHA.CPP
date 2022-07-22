#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000]={0}, ok =1;
int check1(int a[],int n){
    if(a[1]==1&&a[n]==0) return 1;
    return 0;
}
int check2(int a[],int n){
        for(int i=1;i<n-1;i++){
            if(a[i]==1&&a[i+1]==1) return 0;
        }
        return 1;
}
void in(){
    if(check1(a,n)&&check2(a,n)){
    for(int i=1;i<=n;i++) {
        if(a[i]==1) cout << 'H';
        else cout << 'A';
    } 
    cout << "\n";
    }
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
    }
}