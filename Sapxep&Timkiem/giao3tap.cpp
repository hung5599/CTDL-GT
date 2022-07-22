#include<bits/stdc++.h>
using namespace std;
void nhap(long long a[],long long n){
    for(int i=0;i<n;i++) cin >> a[i];
}
int main(){
    int t;
    cin >> t;
    while(t--){
    long long n,m,p;
    cin >> n >> m >> p;
    long long a[n],b[m],c[p];
    vector<long long> v;
    nhap(a,n);
    nhap(b,m);
    nhap(c,p);
    int i=0,j=0,k=0;
    while(i<n&&j<m&&k<p){
        if(a[i]==b[j]&&a[i]==c[k]){
            v.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if(a[i]<=b[j]&&a[i]<=c[k]) i++;
        else if(b[j]<=a[i]&&b[j]<=c[k]) j++;
        else{
            k++;
        }
    }
    if(v.size()==0) cout << "-1";
    else {
        for(auto x : v){
            cout << x << " ";
        }
    }
    cout << "\n";
    }
}