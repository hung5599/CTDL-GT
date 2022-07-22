#include<bits/stdc++.h>
using namespace std;
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
    int n,x;
    cin >> n >> x;
    int a[n];
    for( int i=0;i<n;i++) cin >> a[i] ;
    if(dem(a,n,x)==1)cout << -1;
    else cout << dem(a,n,x);
    cout << "\n";
    }
}