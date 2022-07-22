#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n ;
    int a[n];
    vector <int> v;
    int m=-1,l=-1;
    for( int i=0;i<n;i++) {
        cin >> a[i] ;
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(a[i]!=v[i]){
            m = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=v[i]){
            l = i;
            break;
        }
    }
    cout << m+1 <<" "<< l+1 ;
    cout << "\n";
    }
}