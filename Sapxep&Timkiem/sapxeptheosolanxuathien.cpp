#include<bits/stdc++.h>
using namespace std;
bool comp( pair <int,int > a, pair<int,int > b){
     if(a.second == b.second) return a.first<b.first;
     return a.second > b.second;
}
int first_pos(int a[],int n,int x){
    int l=0,r=n-1;
    int res=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(x==a[mid]){
            res = mid;
            r = mid -1;
        }  
        else if(x>a[mid]) l= mid+1;
        else r = mid-1;
    }
    return res;
}
int last_pos(int a[],int n,int x){
    int l=0,r=n-1;
    int res=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(x==a[mid]){
            res = mid;
             l= mid + 1;
        }  
        else if(x>a[mid]) l= mid+1;
        else r = mid-1;
    }
    return res;
}
int dem(int a[],int n,int x){
    sort(a,a+n);
    int first = first_pos(a,n,x);
    int last = last_pos(a,n,x);
    return last - first + 1;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n  ;
    pair <int , int > p[n] ;
    int a[n];
    for( int i=0;i<n;i++) {
        cin >> a[i] ;
    }
    sort(a,a+n);
    for( int i=0;i<n;i++) {
        p[i].first = a[i];
        p[i].second = dem(a,n,a[i]);
    }
    sort(p,p+n,comp);
    for(int i=0;i<n;i++){
        cout << p[i].first << " ";
    }
    cout << endl;
    }
}