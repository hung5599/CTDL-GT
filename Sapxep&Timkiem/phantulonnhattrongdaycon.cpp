#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,x;
    cin >> n >> x ;
    int a[n];
    for( int i=0;i<n;i++) cin >> a[i] ;
    for(int i=0;i<n-x+1;i++){
        int max=-1;
        for(int j=i;j<i+x;j++){
            if(a[j]> max) max= a[j];
        }
        cout << max <<" ";
    }
    cout <<"\n";
    }
}