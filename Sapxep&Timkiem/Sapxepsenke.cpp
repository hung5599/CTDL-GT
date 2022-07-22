#include<bits/stdc++.h>
using namespace std;
bool comp(int a ,int b){
    return a>b;
}
void process(int a[],int n, vector <int > v){
    sort(a,a+n,comp);
    int l=0,r=n-1;
    while(l<r){
        v.push_back(a[l]);
        v.push_back(a[r]);
        l++;
        r--;
    }
    int size = v.size();
    for(int i = 0 ;i < size;i++) cout << v[i] << " ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    vector <int> v;
    for( int i=0;i<n;i++) cin >> a[i] ;
    process(a,n,v);
    cout << "\n";
    }
}