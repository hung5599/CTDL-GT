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
    if(first==last&&last==-1) return 0;
    return last - first + 1;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n ;
    int a[n];
    for( int i=0;i<n;i++) cin >> a[i] ;
    cout << dem(a,n,0);
    cout << "\n";
    }
}