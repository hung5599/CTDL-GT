#include<bits/stdc++.h>
using namespace std;
int ok=0,a[10],n;
void in(){
    for(int i=1;i<=n;i++) cout << a[i];
    cout << " ";
}
void sinh(){
    //gap cau hinh cuoi gan 0K=1
    int i=n-1,j;
    while(i>=1&&a[i]>a[i+1]) {
        i--;
    }
    if(i==0) ok=1;
    else {
        j=n;
        while(a[j]<a[i]) j--;
        swap(a[i],a[j]);
    }
    int l=i+1,r=n;
    while(l<r){
        swap(a[l],a[r]);
        l++;r--;
    } 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n ;
        for(int i=1;i<=n;i++) a[i]=i;
        while(!ok){
        in();
        sinh();
        } 
        cout <<"\n";
    }
}