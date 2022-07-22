#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout << a[i] <<" ";
}
int process(int a[],int n){
    int ok=-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
               return a[i];
            }
        }
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        nhap(a,n);
        int  kq= process(a,n);
        if(kq!=-1 ) cout <<kq<<"\n";
        else cout << "NO" << "\n";
    }
}