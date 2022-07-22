#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000]={0}, ok =1;
void in(){
    for(int i=1;i<=n;i++) cout << a[i] << " ";
    cout << " ";
}
void next(int a[], int n){
    int i=n-1;
    while(i>0&&a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok = 0;
    else {
        int j=n;
        while(a[j]<a[i]) j--;
        swap(a[i],a[j]);
        int l=i+1;
        int r = n;
        while(l<r){
            swap(a[l],a[r]);
            l++;r--;
        }
    }
    if(ok==1) in();
    else {
        for(int i=1;i<=n;i++) cout << i << " ";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        next(a,n);
        cout << "\n";
    }
}