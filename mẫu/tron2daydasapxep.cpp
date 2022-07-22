#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n ;
    int a[m],b[n];
    int i=0,j=0;
    vector <int> v;
    for(int  h=0;h<m;h++) cin >> a[h];
    for( int k =0;k<n;k++) cin >> b[k];
    while (i<m&&j<n){
        if(a[i]<=b[j]){
            v.push_back(a[i]);
            ++i;
        }
        else {
            v.push_back(b[j]);
            ++j;
        }
    }
    while (i<m){
        v.push_back(a[i]);
        i++;
    }
    while (j<n){
        v.push_back(b[j]);
        j++;
    }
    for(int it=0;it<v.size();it++){
        cout << v[it] << " ";
    }
}