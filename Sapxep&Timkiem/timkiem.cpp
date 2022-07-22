#include<bits/stdc++.h>
using namespace std;
int Apear(int a[],int n,int x){
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
void dem(int a[],int n,int x){
    sort(a,a+n);
    if (Apear(a,n,x)!= -1 ) cout << 1;
    else cout << -1; 
    
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,x;
    cin >> n >> x;
    int a[n];
    for( int i=0;i<n;i++) cin >> a[i] ;
    dem(a,n,x);
    cout << "\n";
    }
}