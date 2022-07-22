#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
int process(int a[],int n){
    int count =0;
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]) {
            count = i+1;
            break;
        }
    }
    return count ;
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
        cout <<kq <<"\n";
    }
}