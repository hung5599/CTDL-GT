#include<bits/stdc++.h>
using namespace std;
int Apear(int a[],int l,int r,int x){
    int res = -1 ;
    if(l>r) return -1;
    else{
        int m = (l+r)/2;
        if(a[m]==x) res = m;
        else if(x>a[m]) return Apear(a,m+1,r,x);
        else return Apear(a,l,m-1,x);
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,x;
    cin >> n >> x;
    int a[n];
    for( int i=0;i<n;i++) cin >> a[i] ;
    int k = Apear(a,0,n-1,x);
    if(k==-1) cout <<"NO" <<endl;
    else cout << k+1 <<endl;
    }
}