#include<bits/stdc++.h>
using namespace std;
bool comp( pair <int,int > a, pair<int,int > b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,x;
    cin >> n >> x ;
    pair <int , int > p[n] ;
    int a[n];
    for( int i=0;i<n;i++) {
        cin >> a[i] ;
        p[i].first = a[i];
        p[i].second = abs(x-a[i]);
        }
    stable_sort(p,p+n,comp);
    for(int i=0;i<n;i++){
        cout << p[i].first << " ";
    }
    cout << endl;
    }
}